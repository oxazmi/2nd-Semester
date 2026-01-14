#include <stdio.h>

int main(){
	char nama[30], alamat[30], nama_ayah[30], nama_ibu[30], telepon[30];

	
	printf("Masukkan Nama Anda \t: "),gets(nama);
	printf("Masukkan Alamat Anda \t: "),gets(alamat);
	printf("Masukkan Nama Ayah \t: "),gets(nama_ayah);
	printf("Masukkan Nama ibu \t: "),gets(nama_ibu);
	printf("Masukkan Nomer Telepon \t: "),gets(telepon);
	
	
	printf("\n========IDENTITAS DIRI========\n"); 
	printf("Nama \t\t: %s\n",nama);
	printf("Alamat \t\t: %s\n",alamat);
	printf("Nama Ayah \t: %s\n",nama_ayah);
	printf("Nama Ibu \t: %s\n",nama_ibu);
	printf("Nomer Telepon \t: %s\n",telepon);
	
	return 0;
}
