#include <stdio.h>

int main () {
	
	int i, j, tinggi_segitiga;  
	
	printf ("-- Bintang Segitiga --\n");
	printf ("Masukkan Tinggi Segitiga: "); 
	scanf  ("%d", &tinggi_segitiga); 
	
	for (i = 1; i <= tinggi_segitiga; i++) {
		
		for (j = tinggi_segitiga; j >= i; j--) {
			printf (" ");
		}
		
		for (j = 1; j <= i*2-1; j++) {
			printf ("*"); 
		}
		printf ("\n");
		
	}
	return 0;
}

