#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>

void mergesort(int alt,int �st){
if(alt<�st)
{
int m=(alt+�st)/2;
mergesort(alt, m);
mergesort(m+1,�st);
merge(alt, m,�st);
}
}

void merge(int alt,int m,int�st){
int i, j, k;

for(i=alt; i<=�st; i++)
b[i]=a[i];
i=alt; j=m+1; k=alt;


while(i<=m && j<=�st)
if(b[i]<=b[j])
a[k++]=b[i++];
else
a[k++]=b[j++];

while(i<=m)
a[k++]=b[i++];
}




int main(){
  srand((unsigned)time(0));
  int i,M,N,j;
  printf("1. Dizinizin boyutunu giriniz:\n");  
  scanf("%d",&M);                         //Maksimum eleman say�s� kullan�c�dan al�narak dinamik dizi i�in yer ay�r�lacak
  int* dizi;                                  // 
  dizi=(int *)malloc((M*sizeof(int)));   //Dinamik olarak dizi olu�turuldu
  
  for(i=0;i<M;i++)
  dizi[i]=rand()%1000;
  
}
