import java.util.*;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        System.out.print("Masukkan NIM: ");
        String nim = sc.nextLine();

        int[] arr = new int[nim.length()];
        for (int i = 0; i < nim.length(); i++) {
            arr[i] = Character.getNumericValue(nim.charAt(i));
        }

        int total = 0;
        int maks = arr[0];
        int minim = arr[0];

        for (int x : arr) {
            total += x;
            if (x > maks) maks = x;
            if (x < minim) minim = x;
        }

        double rata = (double) total / arr.length;

        System.out.println("Array digit: " + Arrays.toString(arr));
        System.out.println("Total digit     : " + total);
        System.out.println("Digit terbesar  : " + maks);
        System.out.println("Digit terkecil  : " + minim);
        System.out.println("Rata-rata digit : " + rata);

        System.out.print("Reverse array   : ");
        for (int i = arr.length - 1; i >= 0; i--) {
            System.out.print(arr[i] + " ");
        }
    }
}