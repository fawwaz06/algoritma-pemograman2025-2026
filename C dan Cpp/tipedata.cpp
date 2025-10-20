#include <conio.h>
#include <stdio.h>
#include <iostream>
using namespace std;

main()
{
    char a [30]="---BELAJAR TIPE DATA---";
    short b;
    int c;
    long d;
    float e;
    double f;
    int g = 1;
    int h = 2;

    b = 10000;
    c = 1000000000;
    e = 3.12345;

    cout<<a<<endl;
    cout<<"Tipe data short:"<<b<<endl;
    cout<<"Tipe data int:"<<c<<endl;
    cout<<"Tipe data long:"<<d<<endl;
    cout<<"Tipe data float:"<<e<<endl;

    cout<<"Tipe data double:"<<f<<endl;
    cout<<endl;

    cout<<"Berikut Hasil Boolean:"<<endl;
    cout<<(g>h);// akan mengasilakan niai 0 (false),karena 1 kuarang dari 2
     cout<<endl; 
    cout<<(g<h);// akan mengasilakan niai 1 (true),karena 1 kuarang dari 2 
     cout<<endl;
     cout<<(g==h);// akan mengasilakan niai 0 (false),karena 1 kuarang dari 2
     cout<<endl;
      cout<<(g !=h);// akan mengasilakan niai 1 (true),karena 1 kuarang dari 2 
}
