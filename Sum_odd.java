import java.io.*;
import java.util.*;

class Sum_odd {
    public static void main(String[] args) {
        int num = 50;
        int i;
        Scanner sc = new Scanner(System.in);

        for (i = 0; i <= num; i++) {
            if (i % 1 == 0) {
                System.out.println("Odd Number is" + i);
            }
        }
    }
}