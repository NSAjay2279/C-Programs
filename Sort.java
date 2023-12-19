import java.util.Scanner;
import java.util.Arrays; // Import Arrays for sorting

class Sort {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);

        System.out.println("Enter n value: ");
        int n = scan.nextInt();

        int[] num = new int[n]; // Correct syntax for array declaration

        System.out.println("Enter " + n + " numbers");
        for (int i = 0; i < n; i++) {
            num[i] = scan.nextInt();
        }

        // Sort the array
        Arrays.sort(num);

        // Print the sorted array
        System.out.println("Sorted numbers:");
        for (int i = 0; i < n; i++) {
            System.out.print(num[i] + " ");
        }

        // Close the scanner to avoid resource leak
        scan.close();
    }
}


/*
int main(void) {
    int n = get_int("Enter the value of n\n");
    int num[n];
    for(int i=0; i<n; i++){
        int num[i] = get_int("enter the %i numbers: ", i+1);
    }

    for(int i=0; i<n; i++){
        for(int j=1; i<=n; j++){
            num[i] < num[i+j];
        }
        int temp[i] = num[i];
        num[i+j] = num[i];
        num[i] = temp[i];
    }

    printf("Here are the sorted numbers: ");
    for(int i=0; i<n; i++){
        printf("%i", i);
    }
}
