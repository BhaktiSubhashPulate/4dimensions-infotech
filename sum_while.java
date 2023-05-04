import java.io.*;
import java.util.*;

class sum_while {
    public static void main(String[] args) {
        int i = 0;
        int sum = 0;

        while (i <= 10) {
            sum = sum += i;

            i++;
        }
        System.out.println("The sum is:" + sum);
    }
}