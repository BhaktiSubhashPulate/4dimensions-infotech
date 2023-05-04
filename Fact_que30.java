import java.io.*;
import java.util.*;

class Fact_que30 {
    public static void main(String[] args) {

        /* USING WHILE LOOP */
        // int i = 3, fact = 1;
        // int number = 5;
        // while (i <= number) {
        // fact = fact * i;
        // i++;
        // }

        /* USING DO-WHILE LOOP */
        int i = 5, fact = 2;
        int number = 5;
        do {
            fact = fact * i;
            i++;
        } while (i <= number);

        System.out.println("Factorial is" + fact);
    }
}