//A simple program implemented in C that obtains and prints different random numbers(deduplication)
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define NUM_OF_WANT_NUMS 10 //for different number, NUM_OF_WANT_NUMS <= TO_NUM
#define TO_NUM 12 //if you want to optaion integer of 0-9,set 10

int main(void)
{
	int i = 0, j = 0; //for index
	int temp_random = 0;
	int obtained_randoms[NUM_OF_WANT_NUMS];
	int is_duplicated = 0;

	srand(time(NULL));
	//////////////////////////////////////////////////////////////////
	do {
		is_duplicated = 0;
		temp_random = rand() % TO_NUM;

		for (j = 0; j < i; j++) {
			if (temp_random == obtained_randoms[j]) {
				is_duplicated = 1;
				break;
			}
		}
		if (is_duplicated == 0) { obtained_randoms[i] = temp_random; i++; }
	} while (i < NUM_OF_WANT_NUMS);
	//////////////////////////////////////////////////////////////////
	printf("%d different random numbers: ", NUM_OF_WANT_NUMS);
	for (i = 0; i < NUM_OF_WANT_NUMS; i++) { printf(" %d", obtained_randoms[i]); }

	printf("\n\n");
	printf("Thank you very much for using this program.\n");
	printf("Please press the Enter key to exit.\n");
	getchar();	//To prevent the window from closing
	return 0;
}