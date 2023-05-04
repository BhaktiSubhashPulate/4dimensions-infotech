import java.io.*;
import java.util.*;

class factorial {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int num, fact;
        fact = 4;
        System.out.println("Enter the Number");

        for (int i = 1; i <= 10; i++) {
            fact = fact * i;
            System.out.println("Factorial of a given number is" + "=" + fact);
        }
    }
}