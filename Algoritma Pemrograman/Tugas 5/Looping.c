#include <stdio.h>
#include <stdbool.h>

int main() 
{
    int bilangan;
    bool bil = true;
    
    printf("================================================\n");
    printf("| Program Menentukan Bilangan Prima Atau Bukan |\n");
    printf("================================================\n");
    printf("*Note: Bilangan yang anda inputkan harus bilangan bulat positif\n\n");
    
    printf("Masukkan sebuah bilangan: ");
    scanf("%d", &bilangan);

    int i;
    
    for (i = 2; i <= bilangan / 2; i++) 
	{
        if (bilangan % i == 0) 
		{
            bil = false;
            break;
        }
    }

    if (bil)
        printf("%d termasuk bilangan prima\n", bilangan);
          else
            printf("%d bukan termasuk bilangan prima\n", bilangan);

    return 0;
}
