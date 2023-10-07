#include <stdio.h>

int main_sta() {
	/*for (int i = 0; i < 5; i++) {
		for (int j = i+1; j < 5; j++) {
			printf(" ");
		}
		for (int k = 0; k < i+1; k++) {
			printf("*");
		}
		printf("\n");
	}
	printf("\n");

	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < i; j++) {
			printf(" ");
		}
		for (int k = i; k < 5; k++) {
			printf("*");
		}
		printf("\n");
	}*/

	for (int i = 0; i < 5; i++) {
		for (int j = i + 1; j < 5; j++) {
			printf(" ");
		}
		for (int k = 0; k < (i*2) + 1; k++) {
			printf("*");
		}
		printf("\n");
	}
	printf("\n");

	


}