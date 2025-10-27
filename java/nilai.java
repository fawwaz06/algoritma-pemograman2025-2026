import java.util.Scanner; // <-- ini wajib diimpor agar Scanner bisa digunakan

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in); // Membuat objek Scanner untuk input
        
        System.out.println("Masukan nilai tugas:");
        double tugas = sc.nextDouble(); // Input nilai tugas
        
        System.out.println("Masukan nilai uts:");
        double uts = sc.nextDouble(); // Input nilai UTS
        
        System.out.println("Masukan nilai uas:");   
        double uas = sc.nextDouble(); // Input nilai UAS
        
        // Hitung nilai akhir dengan bobot 30% tugas, 30% UTS, 40% UAS
        double nilaiAkhir = (0.3 * tugas) + (0.3 * uts) + (0.4 * uas);
        
        System.out.println("Nilai Akhir: " + nilaiAkhir);
        
        // Menentukan status kelulusan
        if (nilaiAkhir >= 60)
            System.out.println("Status Lulus!");
        else
            System.out.println("Status Tidak Lulus.");
    }
}