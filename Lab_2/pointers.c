#include <stdio.h>

int main() {
    int x = 0, y = 0;
    int *px, *py;
    int arr[10];

    px = &x;
    py = &y;
    printf("px points to value: %d\n", *px);
    printf("py points to value: %d\n", *py);
    printf("Address stored in px: %p\n", (void*)px);
    printf("Address stored in py: %p\n", (void*)py);

    for(int i = 0; i < 10; i++){
        *(arr + i) = i * 10;
    }

    printf("Array contents: ");
    for(int i = 0; i < 10; i++){
        printf("%d", *(arr + i));
    }
    printf("\n");

    printf("arr: %p\n", (void*)arr);
    printf("arr[0]: %p\n", (void*)&arr[0]);

    return 0;
}