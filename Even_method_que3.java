import java.io.*;
import java.util.*;

public class Even_method_que3 {

    public static boolean isEven(int number) {
        if (number % 2 == 0)
            return true;
        else
            return false;
    }

    public static void main(String args[]) {
        Scanner read = new Scanner(System.in);
        int number;
        System.out.print("enter number:");
        number = read.nextInt();
        while (number != -1) {
            if (isEven(number) == true)
                System.out.printf("the number %d is even number", number);
            else
                System.out.printf("the number %d is odd number", number);
            System.out.printf("\n-----------------------------------\n");
            System.out.print("enter number:");
            number = read.nextInt();

        }
    }

}