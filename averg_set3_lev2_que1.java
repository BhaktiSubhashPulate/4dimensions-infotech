import java.io.*;
import java.util.Scanner;

class averg_set3_lev2_que1 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int sum = 0;
        for (int i = 0; i <= 10; i++) {
            System.out.println("Enter Number:");
            sum = sum + sc.nextInt();
            // int avg = sum / 10;
        }
        double avg = sum / 10;
        // System.out.println("Sum is:" + sum);
        System.out.println("avg is:" + avg);
    }

}
