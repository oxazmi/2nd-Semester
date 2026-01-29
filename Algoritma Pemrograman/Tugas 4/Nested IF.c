#include <stdio.h>
int main()
{
	char jenis_kelamin;
	int tinggi_badan;

	printf("Program Seleksi Tinggi Badan Penerimaan Pegawai PT KAI\n");
	printf("==============================================\n\n");
	printf("(jenis kelamin)\n");
	printf("Laki-laki : L\n");
	printf("Perempuan : P\n\n");
	printf("Pilih jenis kelamin anda (L/P) : ");
	scanf("%c", &jenis_kelamin);
	printf("==============================================\n\n");
	printf("(Tinggi badan)\n");
	printf("Masukkan tinggi badan anda (dalam cm) : ");
	scanf("%d", &tinggi_badan);
	printf("==============================================\n");

	if (jenis_kelamin == 'L' || jenis_kelamin == 'l')
	{
		if (tinggi_badan >= 170)
			printf("Selamat anda lolos seleksi ");
		else if (tinggi_badan < 170)
			printf("Maaf anda tidak lolos seleksi");
	}

	else if (jenis_kelamin == 'P' || jenis_kelamin == 'p')
	{
		if (tinggi_badan >= 160)
			printf("Selamat anda lolos seleksi ");
		else if (tinggi_badan < 160)
			printf("Maaf anda tidak lolos seleksi");
	}

	else
	{
		printf("Data yang anda masukkan tidak sesuai");
	}

	return 0;
}
