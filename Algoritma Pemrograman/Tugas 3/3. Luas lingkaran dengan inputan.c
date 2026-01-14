#include <stdio.h>

int main(){
	float phi = 3.14;
	float jari_jari, luas;
	
	printf("Masukkan panjang jari-jari : ");
	scanf("%f", &jari_jari);

	luas = phi*jari_jari*jari_jari;
	printf("Luas lingkaran : %f",luas);
	
	return 0;
}
