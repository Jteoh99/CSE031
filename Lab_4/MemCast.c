#include <stdio.h>

int main() {
	int i;
	int four_ints[4];
	char* four_c;

	for(i = 0; i < 4; i++)
        four_ints[i] = 2;

	printf("%x\n", four_ints[0]);
	
    four_c = (char*)four_ints;

	for(i = 0; i < 4; i++)
        four_c[i] = 'A' + i; // ASCII value of 'A' is 65 or 0x41 in Hex.
    
    // Add your code for the exercises here:
	
	printf("%x\n", four_ints[0]);

	printf("%x\n", four_ints[1]);

    printf("%p\n", (void*)four_ints);
    printf("%p\n", (void*)four_c);

	for (i = 0; i < 4; i++){
        printf("four_ints[%d]: Address = %p, Value = %x\n", i, (void*)&four_ints[i], four_ints[i]);
	}

	for (i = 0; i < 16; i++){
        printf("four_c[%d]: Address = %p, Value = %x\n", i, (void*)&four_c[i], four_c[i]);
	}
	
	return 0;
}