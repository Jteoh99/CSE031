#include <stdio.h>
#include <stdlib.h>

void printArray(int **array, int size) {
    for (int i = 0; i < size; i++) {  
        for (int j = 0; j < size; j++) {  
            printf("%d ", *(*(array + i) + j));
        }
        printf("\n");
    }
}

int main() {
	int i = 0, j = 0, n = 5;
	int **arr = (int**)malloc(n * sizeof(int*));

	// (3) Add your code to complete allocating and initializing the 2-D array here. The content should be all 0.
	for (int i = 0; i < n; i++) {
		*(arr + i) = (int*)malloc(n * sizeof(int));
		if (*(arr + i) == NULL){
			printf("failed\n");
			return 1;	
		}
		
		for (int j = 0; j < n; j++) {
			*(*(arr + i) + j) = 0;  
		}
	}
	


    // This will print out your array
	printArray(arr, n);

    // (6) Add your code to make arr a diagonal matrix
    for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (i == j) {
				*(*(arr + i) + j) = i + 1;
			} else {
				*(*(arr + i) + j) = 0;
			}
		}
	}	
	
	// (7) Call printArray to print array
    printArray(arr, n);

	return 0;
}


