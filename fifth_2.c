#include<stdio.h>
int main()
{
    int a=10;
    int b=a,i=0;
    while(b!=0){
        b=b>>1;
        i+=1;
    }
    printf("%d\n",8-i);
}