#include <stdio.h>
// 2 boyutlu dizinin satır ve sütun sayısı klavyeden girilir.
// pozitif,negatif ve sıfır olan elemanların adeti bulunur.

int main() 

{
    
 int i,j;
 int m,n;
 int PozitifSayaci = 0,NegatifSayaci = 0,SifirSayaci = 0;
 
 printf("dizinin satir sayisini girin: ");
 scanf("%d",&m);
 
 printf("dizinin sutun sayisini girin: ");
 scanf("%d",&n);
 
 int dizi[m][n]; 
 
 for(i = 0 ; i < m ; i++)
 {
  for(j = 0 ; j < n ; j++)
  {
   printf("dizi[%d][%d]: ",i,j);
   scanf("%d",&dizi[i][j]);
  }
 }
 
 printf("\n");
 
 for(i = 0 ; i < m ; i++)
 {
  for(j = 0 ; j < n ; j++)
  {
   if(dizi[i][j] > 0)
   {
    PozitifSayaci++;
   }
   
   else if(dizi[i][j] < 0)
   {
    NegatifSayaci++;
   }
   
   else
   {
    SifirSayaci++;
   }
  }
 }
 
 printf("dizinin %d tane elemani pozitif\n",PozitifSayaci);
 printf("dizinin %d tane elemani negatif\n",NegatifSayaci);
 printf("dizinin %d tane elemani sifir",SifirSayaci);

 return 0;
  
}