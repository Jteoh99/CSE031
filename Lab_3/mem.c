#include <stdio.h>
#include <stdlib.h>

int main() {
	int num;
	int *ptr;
	int **handle;

	num = 14;
	ptr = (int *) malloc(2 * sizeof(int));
	*ptr = num;
	handle = (int **) malloc(1 * sizeof(int *));
	*handle = ptr;

	// Insert code here

	printf("Address of num: %p, Value: %d\n", (void*)&num, num);
    printf("Address of ptr: %p, Value: %p (points to: %d)\n", (void*)&ptr, (void*)ptr, *ptr);
    printf("Address of handle: %p, Value: %p (points to ptr)\n", (void*)&handle, (void*)handle);
    printf("Address stored in handle: %p, which points to %p (value: %d)\n", (void*)handle, (void*)*handle, **handle);

	return 0;
} 

