/* Buatlah Algoritma, Flowchart, dan Program konversi angka menjadi isi  Sila Pancasila! */

#include <stdio.h>
int main()
{
	int nomer_sila;
	
	printf("Masukkan nomer sila (1-5) : ");
	scanf("%d", &nomer_sila);
	
	switch (nomer_sila)
	{
		case 1 : printf("Ketuhanan Yang Maha Esa\n");
		break;
		
		case 2 : printf("Kemanusiaan yang Adil dan Beradab\n");
		break;
		
		case 3 : printf("Persatuan Indonesia\n");
		break;
		
		case 4 : printf("Kerakyatan yang Dipimpin oleh Hikmat Kebijaksaaan dalam Permusawaratan Perwakilan\n");
		break;
		
		case 5 : printf("Keadilan Sosial bagi Seluruh Rakyat Indonesia\n");
		break;
		
		default: printf("Nomer sila salah\n");
	}

   return 0;	
}


