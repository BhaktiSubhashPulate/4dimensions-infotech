import java.io.*;
import java.util.*;



public static int longestIncreasingOrDecreasingSegment(int[] arr) {
    int n = arr.length;
    int longestIncreasing = 1;
    int longestDecreasing = 1;
    int maxLength = 1;

    for (int i = 1; i < n; i++) {
        if (arr[i] > arr[i-1]) { // increasing segment
            longestIncreasing++;
            longestDecreasing = 1;
        } else if (arr[i] < arr[i-1]) { // decreasing segment
            longestDecreasing++;
            longestIncreasing = 1;
        } else { // arr[i] == arr[i-1]
            longestIncreasing = 1;
            longestDecreasing = 1;
        }
        maxLength = Math.max(maxLength, Math.max(longestIncreasing, longestDecreasing));
    }

    return maxLength;

}