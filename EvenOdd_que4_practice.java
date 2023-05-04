import java.io.*;
import java.util.*;

class EvenOdd_que4_practice {
    public static void main(String args[]) {
        int num;
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter the number:");

        num = sc.nextInt();

        if (num % 2 == 0)

            System.out.println(num + "It is even");

        else {
            System.out.println(num + "It is odd");
        }

    }
}