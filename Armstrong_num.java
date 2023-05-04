import java.io.*;
import java.util.*;

class Armstrong_num {
    public static void main(String[] args) {
        int num=346, oldnumber, remainder, result = 0;

        oldnumber = num;

        while (oldnumber != 0) {
            remainder = oldnumber % 10;
            result += Math.pow(remainder, 3);
            oldnumber /= 10;
        }

        if (result == num) {
            System.out.println(num + "It is an Armstrong number.");
        } else {
            System.out.println(num + "It is not an Armstrong number.");
        }
    }
}