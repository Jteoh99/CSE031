#include <stdio.h>
int main(){
    int n = 0;
    int p = 0;
    printf("Enter the repetition count for the punishment phrase: ");
    while(n <= 0){
        if(scanf("%d", &n) != 1 || n <= 0){
            printf("You entered an invalid value for the repetition count! Please re-enter: ");
            while(getchar() != '\n');
        }
    }
    printf("\nEnter the line where you want to insert the typo: ");
    while(p <= 0 || p > n){
        if(scanf("%d", &p) != 1 || p <= 0 || p > n){
            printf("You entered an invalid value for the typo placement! Please re-enter: ");
            while(getchar() != '\n');
        }
    }
    printf("\n");
    for(int i = 0; i < n; i++){
        if(i == p - 1){
            printf("Cading wiht is C avesone!\n");
        } else {
            printf("Coding with is C awesome!\n");
        }
    }
    return 0;
}