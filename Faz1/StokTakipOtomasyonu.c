#include <stdio.h>
#include <stdlib.h>
#include<stdbool.h> 
#include <string.h>

int main()
{
   int urunfiyat, i, urunstok;
   char urun [50];
   char inputString[1000];
   FILE *filePointer;
   char fileName[20] = "test.txt";

   printf("\nBir dosya adi giriniz : ");

   filePointer = fopen(fileName, "w");
   if(filePointer ==NULL)
   {
      printf(" Dosya acilmasi sirasinda hata olustu.");
      exit(1);
   }

   fgets(inputString, sizeof inputString, stdin);
   fprintf(filePointer, "%s", inputString);
   fclose(filePointer);
   printf("\n Dosya olusturulmustur. \n", fileName);

   printf("\n urun stok sayisini giriniz: ");
   scanf("%d", &urunstok);
   FILE *fptr;
   fptr = (fopen("dosya.txt", "w"));
   if(fptr == NULL)
   {
       printf("Hata!");
       system("PAUSE");
   }
   for(i = 0; i < urunstok; ++i)
   {
      printf("urun %d markasi: ", i+1);
      scanf("%s", urun);
      printf("urun fiyatini giriniz: ");
      scanf("%d", &urunfiyat);
      fprintf(fptr,"\n urunmarkasi: %s \n urunfiyati=%d \n", urun, urunfiyat);
   }
   fclose(fptr);
   system("PAUSE");
}

