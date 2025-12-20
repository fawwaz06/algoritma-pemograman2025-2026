#include <iostream>
#include <conio.h>
#include <stdlib.h>
#define MAX 8
using namespace std;

int nomer[MAX];
int head = 0, tail = -1;

bool isEmpty(){
    if (tail == -1) {
        return true;
    } else {
        return false;
    }
}
bool isFull(){
    if (tail == MAX - 1) {
        return true;
    } else {
        return false;
    }
}
void antrianMasuk(int no){
    if (isEmpty()){
        head=tail=0;
    }else{
        tail++;
    }
    nomer[tail]=no;
}
void antrianKeluar(){
    if (isEmpty()){
        cout<<"Antrian kosong!"<<endl;
    }else{
        cout<<"Nomor antrian "<<nomer[head]<<" keluar dari antrian"<<endl;
        for (int i = head; i < tail; i++) {
            nomer[i] = nomer[i + 1];
        }
        tail--;
        if (tail < 0) {
            head = 0;
            tail = -1;
        }
    }
}
void clear(){
    if(isEmpty()){
        cout<<"Antrian kosong!"<<endl;

    }else{
        system("cls");
        printf("==============================\n");
        printf("   DAFTAR NOMOR ANTRIAN\n");
        printf("==============================\n");
        for(int a=head; a<=tail; a++){
            printf("   Nomor Antrian: %d\n", nomer[a]);
        }
        printf("==============================\n");
    }
}

int main(){
    system("color 1F");
    int choose, p=1, urut;
    do{
        system("cls");
        cout << "\n\n==== ANTRIAN SEDERHANA ===="
             << "\n1. Masukkan Nomor Antrian    |"
             << "\n2. Keluarkan Nomor Antrian   |"
             << "\n3. Tampilkan Daftar Antrian  |"
             << "\n4. Clear Antrian             |"
             << "\n5. Keluar                    |" << endl;
        cout << "\nChoose !: "; cin >> choose;
        cout << "\n\n";
        if(choose==1){
            if(isFull()){
                cout<<"Antrian sudah penuh!"<<endl;
            }else{
                urut=p;
                antrianMasuk(urut);
                cout << "ANTRIAN" << endl;
                cout << "--------------------------" << endl;
                cout << "|" << p << "|" << endl;
                cout << "--------------------------" << endl;
                cout << "Silahkan tunggu" << endl;
                p++;
            }
        } 
        else if(choose == 2){
            cout << "==============================" << endl;
            cout << " No. Antri : [" << nomer[head] << "] Di panggil" << endl;
            cout << "==============================" << endl;
            antrianKeluar();
            cout << "Silahkan untuk diproses" << endl;
        }
        else if(choose == 3){
            clear();
        }
        else if(choose == 4){
            for(int i = 0; i < MAX; i++){
                nomer[i] = 0;
            }
            head = 0;
            tail = -1;
            cout << "Antrian telah direset!" << endl;
        }
        else if(choose == 5){
            cout << "Terima kasih telah menggunakan program ini!" << endl;
            return 0;
        }
        else{
            cout << "Pilihan tidak valid!" << endl;
        }
        cout << "\nTekan sembarang tombol untuk melanjutkan...";
        getch();
    }while(true);
    
    return 0;
}