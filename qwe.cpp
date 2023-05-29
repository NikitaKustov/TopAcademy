#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 5
int main()
{

int A[N],B[N],C[N+1],a,b,i,grs=0;

srand(time(NULL));

for(i=0; i<N+1 ; i++){
C[i]=0;
}

for(i=0; i<N ; i++){
a = random() % 2;
A[i]=a;
printf("%i ", a);
}
printf("\n");
for(i=0; i<N ; i++){
b = random() % 2;
B[i]=b;
printf("%i ", b);
}

for(i=N-1; i > -1;i--){ 
if(A[i]==2){
A[i+1]=1;
A[i]=0;
}
if(A[i] && B[i]){
C[i+1]=C[i+1]+((A[i] + B[i])%2);
C[i] = C[i] + 1;
}else{
if(A[i]>B[i]){
  C[i+1]=A[i]+ C[i+1];  
}else{
  C[i+1]=B[i]+ C[i+1];    
}

}
}
printf("\n");

if(C[0]==1){
printf("%s","Length exceeded, response:");
}else{
printf("%s","Otvet:");
}


for(i=0; i<N+1 ; i++){
if(i==0 && C[i]==0){}else{
printf("%i ", C[i]);}
}
}