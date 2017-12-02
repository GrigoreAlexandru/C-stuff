#include <stdio.h>
#include <stdlib.h>
#include <math.h>




void ex1(int nr1, int nr2){
    printf(" \n Exercitiul 1 \n");
    printf("Suma este %d \n", nr1+nr2);
    printf("Diferenta este %d \n", nr1-nr2);
    printf("Produsul este %d \n", nr1*nr2);
    printf("Catul este %d \n", nr1/nr2);
}
void ex2(){
    printf(" \n Exercitiul 2 \n");
    int a,b,s=0;
    printf("Introduceti 2 numere:");
    scanf(" %d %d",&a,&b);
    s=a+b;
   printf("Ultima cifra a sumei este: %d",s%10);

}
void ex3(){
    printf(" \n Exercitiul 3 \n");
    int nr1, nr2;
    printf("Introduceti 2 numere:");
    scanf(" %d %d", &nr1, &nr2);
    printf("Suma este %d \n", nr1+nr2);
}
void ex4(){
    int nr;
    printf(" \n Exercitiul 4 \n");
    printf("Introduceti un numar:");
   scanf(" %d", &nr);
   if (nr % 2 == 0){
       printf("Numarul este par");
   } else {
       printf("Numarul este impar");
   }
   
}
int compare (const void * a, const void * b)
{
  return ( *(int*)a - *(int*)b );
}
void ex5(int nr1, int nr2, int nr3){
    printf(" \n Exercitiul 5 \n");
    int deSortat[] = {nr1, nr2, nr3};
    qsort (deSortat, 3, sizeof(int), compare);
    printf("Diferenta este %d",deSortat[2]-deSortat[0]);
}
void ex6(){
    printf(" \n Exercitiul 6 \n");
    int n, nr = 0;

    do {
        printf("Introduceti un numar, la 0 se opreste numaratoarea:");
        scanf(" %d",&n);
        if(!(n & 1)) nr++;
    } while(n);

    if(!(nr - 1)) printf("NU EXISTA\n");
    else printf("Numere pare : %d \n",nr - 1);
    
}
void ex7(int nr1, int nr2){
    printf(" \n Exercitiul 7 \n");
    printf("Diferenta este %d",nr1-nr2);
}
void ex8(int nr1, int nr2){
    printf(" \n Exercitiul 8 \n");
    if(nr1 > nr2) printf("%d",nr1); 
    else printf("%d",nr2);
}
void ex9(){
    printf(" \n Exercitiul 9 \n");
    int n;
    printf("Introduceti un numar de 2 cifre:");
    scanf(" %d",&n);
    printf("Suma zecilor si unitatilor = %d",n%10+(n%100)/10);
    
}
void ex10(double nr){
   
   printf(" \n Exercitiul 10 \n");
   printf("Radacina patrata numarului %f este : %f ", nr,  sqrt(nr));

}
void ex11(){
    printf(" \n Exercitiul 11 \n");
    int n;
    printf("Introduceti un numar:");
    scanf(" %d",&n);
    printf("Aria totala: %d \n",(n*n)*6);
    
    printf("Volumul: %d \n",n*n*n);
}
void ex12(){
    printf(" \n Exercitiul 12  \n");
    int x; 
    printf("Introduceti un numar de 3 cifre:");
    scanf(" %d",&x) ;
    x = x / 100 + (x / 10) % 10 + x % 10;
    printf("Suma cifrelor este: %d",x) ;
    
}

int main()
{
  ex1(6,2);
  ex2();
  ex3();
  ex4();
  ex5(5,1,200);
  ex6();
  ex7(4,2);
  ex8(2,4);
  ex9();
  ex10(4.0);
  ex11();
  ex12();
}
