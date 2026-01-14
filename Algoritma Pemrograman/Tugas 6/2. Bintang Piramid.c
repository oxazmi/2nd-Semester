#include <stdio.h>

int main () {
	
	int i, j, tinggi_piramid;
	
	printf("-- PIRAMID --\n");
	printf("Masukkan Tinggi Piramid: ");
	scanf("%d", &tinggi_piramid);
	
	for (i = tinggi_piramid; i >= 1; i--) {
		
		for (j = 1; j <= i; j++) {
			printf ("*");
		}
		printf("\n");
	}
	return 0;
}
