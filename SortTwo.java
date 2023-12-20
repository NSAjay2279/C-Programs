import java.util.*;

class Sort {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);

        System.out.println("Enter n value: ");
        int n = scan.nextInt();

        int num[] = new int[n];
        System.out.println("Enter " + n + " numbers");
        for(int i=0; i<n; i++) {
            num[i] = scan.nextInt();
        }

        for(int i=0; i<n; i++) {
            {
                if (num[i] < num[i+1]) {
                    int temp = num[i];
                    num[i] = num[i+j];
                    num[i+j] = temp;
                }
            }
        }

        System.out.println("Here are the sorted numbers: ");
        for(int i=0; i<n; i++){
            System.out.print(num[i] + " ");
        }
    }
}
