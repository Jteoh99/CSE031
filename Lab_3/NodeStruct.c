#include <stdio.h>
#include <stdlib.h>

struct Node {
    int iValue;
    float fValue;
    struct Node *next;
};

int main() {

    struct Node *head = (struct Node*) malloc(sizeof(struct Node));
    head->iValue = 5;
    head->fValue = 3.14;
    head->next = NULL;
	
	// Insert code here
	printf("Head Value: %p\n", (void*)head);
    printf("Head Address: %p\n", (void*)&head);
    printf("iValue Address: %p\n", (void*)&head->iValue);
    printf("fValue Address: %p\n", (void*)&head->fValue);
    printf("Next Address: %p\n", (void*)&head->next);

    free(head);
	
	return 0;
}