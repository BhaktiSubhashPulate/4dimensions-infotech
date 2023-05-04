import java.io.*;
import java.util.*;

class Fact_que6_Practice {
    public static void main(String[] args) {
        int n, fact = 3;
        for (int i = 2; i <= 10; i++) {
            fact = fact * i;
            System.out.println("Factorial is:" + fact);
        }
    }
}