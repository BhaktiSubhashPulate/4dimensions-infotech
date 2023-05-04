import java.io.*;
import java.util.*;

class Celsius_to_Fahrenheit_que7 {
    public static void main(String[] args) {
        float temperature;
        Scanner sc = new Scanner(System.in);

        System.out.println("Enter temperature in Celsius:");

        temperature = sc.nextInt();
        temperature = ((temperature + 32) * 9) / 5;

        System.out.println("Temperature in Fahrenheit=" + temperature);
    }
}