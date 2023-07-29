#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
void bintodec( long int n){
    int rem = 0;
    int sum=0;
    int p=0;
    while(n>0)
    {
        rem=n%10;
        sum+=rem*pow(2,p);
        p++;
        n=(int)(n/10);
    }
    printf("Binary number = %ld\n", n);
    printf("decimal number = %d", sum);
}

void bintohex(long int n)
{
   char hexarr[16]={'0', '1', '2', '3', '4', '5', '6', '7', '8', '9','A', 'B', 'C', 'D', 'E', 'F'};
   int hexkey[16]={0, 1, 10, 11, 100, 101, 110, 111, 1000,1001, 1010, 1011, 1100, 1101, 1110, 1111};
   char hexval[256];
   int index=0;
   int rem = 0;
   printf("Binary number = %ld\n", n);
   while(n>0){
    rem=n%10000;
    for(int i=0; i<16; i++){
        if(rem==hexkey[i]){
            hexval[index]=hexarr[i];
            index++;
        }
   }
   n=(int)(n/1000);
}
    hexval[index]='\0';
    strrev(hexval);
    
    printf("Hexadecimal number = %s", hexval);

}
void bintooct(long int n)
{
   char octarr[8]={'0', '1', '2', '3', '4', '5', '6', '7'};
   int octkey[8]={0, 1, 10, 11, 100, 101, 110, 111};
   char octval[256];
   int index=0;
   int rem = 0;
   printf("Binary number = %ld\n", n);
   while(n>0){
    rem=n%1000;
    for(int i=0; i<8; i++){
        if(rem==octkey[i]){
            octval[index]=octarr[i];
            index++;
        }
   }
   n=(int)(n/1000);
}
    octval[index]='\0';
    strrev(octval);
    
    printf("Octal number = %s", octval);

}
void octtobin(int n)
{     
    int decimalNumber=anybasetodec(n,8);
    int binaryNumber=0;
    int i=1;
      while (decimalNumber != 0) {
        binaryNumber += (decimalNumber % 2) * i;
        decimalNumber /= 2;
        i *= 10;
    }
    printf("Octal number = %d",n);
    printf("Binary number = %d",binaryNumber);
}

void hextobin(int n)
{     
    int decimalNumber=anybasetodec(n,16);
    int binaryNumber=0;
    int i=1;
      while (decimalNumber != 0) {
        binaryNumber += (decimalNumber % 2) * i;
        decimalNumber /= 2;
        i *= 10;
    }
    printf("Octal number = %d",n);
    printf("Binary number = %d",binaryNumber);
}
int anybasetodec(int n,int base)
{
    int rem = 0;
    int sum=0;
    int p=0;
    while(n>0)
    {
        rem=n%10;
        sum+=rem*pow(base,p);
        p++;
        n=(int)(n/10);
    }
 return sum;
}
void main()
{   
    int n=0;
    while (n!=-1)
    {   
        printf("enter choice of n\n1. to get bin to dec\n2. to get bin to hex\n3. to get bin to oct\n-1. to exit\n:", n);
        scanf("%d", &n);
        long int num=0;
        scanf("%ld", &num);
        switch(n){
        case 1: bintodec(num); break;
        case 2: bintohex(num); break;
        case 3: bintooct(num); break;
        case -1:exit(0);break;
        default: printf("invalid");
        }
    }
}
