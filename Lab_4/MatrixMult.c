
#include <stdio.h>
#include <stdlib.h>

int** matMult(int **a, int **b, int size) {
	// (4) Implement your matrix multiplication here. 
	// You will need to create a new matrix to store the product.
	int **result = (int **)malloc(size * sizeof(int *));
    for (int i = 0; i < size; i++) {
        *(result + i) = (int *)malloc(size * sizeof(int));
    }

    // Initialize result matrix with 0s
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            *(*(result + i) + j) = 0;
            for (int k = 0; k < size; k++) {
                *(*(result + i) + j) += *(*(a + i) + k) * *(*(b + k) + j);
            }
        }
    }

    return result;
}

void printArray(int **arr, int n) {
	// (2) Implement your printArray function here
	for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%-5d ", *(*(arr + i) + j));
        }
        printf("\n");
    }
}

int main() {
	int n = 0;
	// (1) Define 2 (n x n) arrays (matrices). 
	printf("Enter the size of the matrices: ");
    scanf("%d", &n);
	int **matA = (int **)malloc(n * sizeof(int *));
    int **matB = (int **)malloc(n * sizeof(int *));
    for (int i = 0; i < n; i++) {
		*(matA + i) = (int *)malloc(n * sizeof(int));
        *(matB + i) = (int *)malloc(n * sizeof(int));
    }

	printf("Enter elements for matrix A:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", *((matA) + i) + j);
        }
    }

	printf("Enter elements for matrix B:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", *((matB) + i) + j);
        }
    }

	// (3) Call printArray to print out the 2 arrays here.
	printf("Matrix A:\n");
    printArray(matA, n);

    printf("Matrix B:\n");
    printArray(matB, n);
	
	// (5) Call matMult to multiply the 2 arrays here.
	int **matC = matMult(matA, matB, n);
	
	// (6) Call printArray to print out resulting array here.
	printf("Resultant Matrix C (A * B):\n");
    printArray(matC, n);

    for (int i = 0; i < n; i++) {
        free(*(matA + i));
        free(*(matB + i));
        free(*(matC + i));
    }
    free(matA);
    free(matB);
    free(matC);

    return 0;
}