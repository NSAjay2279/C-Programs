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
            for(int j=1; j<=n; j++) {
                if (num[i] > num[i+j]) {
                    int temp = num[i];
                    num[i+j] = num[i];
                    num[i] = temp;
                }
            }
        }

        System.out.println("Here are the sorted numbers: ");
        for(int i=0; i<n; i++){
            System.out.println(num[i] + " ");
        }
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
*/
