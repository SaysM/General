#include <stdio.h>
 
int decim(int n) {
    int a, i;
    int octal;
    octal = 0;
    i = 1;
 
    if(n <= 7 ) {
        octal = n;
    }else {
 
        while(n>=8) {
            a=n%8;
            n=n/8;
            octal = octal + a * i;
            i*= 10;
        }
        n=n%8;
        octal = octal + n * i;
 
    }
 
    return octal;
 
}

int hexa(int n){
    int a, i;
    int hexa;
    hexa = 0;
    i = 1;
 
    if(n <= 16 ) {
        hexa = n;
    }else {
 
        while(n>=8) {
            a=n%8;
            n=n/8;
            octal = octal + a * i;
            i*= 10;
        }
        n=n%8;
        hexa = hexa + n * i;
 
    }
 
    return hexa;
}
 
int main() {
    int n,octal;
 
    printf("Informe um numero decimal:");
    scanf("%d",&n);
 
    octal=decim(n);
 
    printf(" o numero octal eh: %d\n",octal);
 
 
 
    return 0;
}
 