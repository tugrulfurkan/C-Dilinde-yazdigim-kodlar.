#include <stdio.h>
#include <stdlib.h>

int main()
{
    int sayi=0;
    int sayac=0;
    int test=1; /*Test,sayi asal ise 1 de kalacak*/

    printf("Sayiyi giriniz : ");
    scanf("%d",&sayi);
    if(sayi==1)
    printf("Asal degildir");


    for(sayac=sayi-1;sayac>1&&test==1;sayac--)

       { if(sayi%sayac==0)
         test=0;
         else
        test=1; }
  if(test==1)
    printf("Sayi asaldir.");
  else
    printf("Sayi asal degildir");


    return 0;
}
