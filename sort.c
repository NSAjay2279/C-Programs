#include <stdio.h>
#include <cs50.h>

int main(void) {
    int n = get_int("Enter the value of n\n");
    for(int i=0; i<n; i++){
        int num[i] = get_int("enter the %i numbers\n\n", n);
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
