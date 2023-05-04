import java.io.*;

public class evenf {
    public int even() {
        for (int i = 0; i <= 20; i++) {
            if (i % 2 == 0) {
                System.out.println(i);
            }
        }
        return 0;
    }

    public static void main(String args[]) {

        evenf ev = new evenf();
        ev.even();
    }

}
