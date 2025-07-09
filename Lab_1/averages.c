#include <stdio.h>

int isEven(int n){
    int sum = 0;

    if(n < 0){
        n *= -1;
    }

    while (n > 0){
        sum += n % 10;
        n /= 10;
    }

    return (sum % 2 == 0);
}

int main(){
    int sum_even = 0;
    int sum_odd = 0;
    int evens = 0;
    int odds = 0;
    int n = -1;
    int i = 1;
    while(n != 0){
        if(i % 10 == 1 && i % 100 != 11){
            printf("Enter the %dst value: ", i);
        }
        else if(i % 10 == 2 && i % 100 != 12){
            printf("Enter the %dnd value: ", i);
        }
        else if(i % 10 == 3 && i % 100 != 13){
            printf("Enter the %drd value: ", i);
        } 
        else {
            printf("Enter the %dth value: ", i);
        }

        scanf("%d", &n);
        if(n != 0){
            if(isEven(n)){
                sum_even += n;
                evens++;
            } else {
                sum_odd += n;
                odds++;
            }
        }
        i++;
    }
    double avg_even = (double)sum_even / evens;
    double avg_odd = (double)sum_odd / odds;
    if(evens > 0 && odds > 0){
        printf("\nAverage of input values whose digits sum up to an even number: %.2f", avg_even);
        printf("\nAverage of input values whose digits sum up to an odd number: %.2f", avg_odd);
    }
    if(evens > 0 && odds == 0){
        printf("\nAverage of inputs whose digits sum up to an even number: %.2f", avg_even);
    }
    if(odds > 0 && evens == 0){
        printf("\nAverage of inputs whose digits sum up to an odd number: %.2f", avg_odd);
    }
    if(evens == 0 && odds == 0){
        printf("\nThere is no average to compute.");
    }
    printf("\n");
    return 0;
}