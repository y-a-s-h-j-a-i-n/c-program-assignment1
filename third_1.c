#include<stdio.h>
int main(){
    int n,a[10]={1,2,3,4,5,6,7,8,9,10};
    printf("enter the valued to be searched :");
    scanf("%d",&n);
    for(int i=0;i<sizeof(a);i++){
        if(a[i]==n){
            printf("element found at %d position",i+1);
            break;
        }
        if(i==(sizeof(a)-1))
        printf("element not found");
    }
}