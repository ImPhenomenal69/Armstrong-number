// Online C compiler to run C program online
#include <stdio.h>
#include <math.h>

int main() {
     long int n,p=0;
     scanf("%ld",&n);
     for (long int i=1;i<1000;i++){
         long int k= pow(10,i);
     long int a = n/k;
     p=p+1;
     if (a==0) {
         break;
     }  
     }
     long int q=0;
     long int z=0;
     for( long int j=0;j<p;j++){
     long int c=pow(10,j);
     long int b=(n/c)%10;
     z=pow(b,p)+z;
    }
    printf("\n");
    if (n==z){
        printf("Number is ARMSTRONG");
    }
    else printf("Number is not an ARMSTRONG");
   
    return 0;
}
