#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>


int main(){
  srand((unsigned)time(0));
  int i,M,N,j;
  printf("1. Dizinizin boyutunu giriniz:\n");  
  scanf("%d",&M);                         //Maksimum eleman say�s� kullan�c�dan al�narak dinamik dizi i�in yer ay�r�lacak
  int* dizi;                                  // 
  dizi=(int *)malloc((M*sizeof(int)));   //Dinamik olarak dizi olu�turuldu
  
  printf("2. Dizinizin boyutunu giriniz:\n");  
  scanf("%d",&N);                         //Maksimum eleman say�s� kullan�c�dan al�narak dinamik dizi i�in yer ay�r�lacak
  int* dizi2;                                  // 
  dizi2=(int *)malloc((N*sizeof(int)));   //Dinamik olarak dizi olu�turuldu
  
  for(i=0;i<M;i++)
  dizi[i]=rand()%1000;
  
  for(j=0;j<N;j++)
  dizi2[j]=rand()%1000;
