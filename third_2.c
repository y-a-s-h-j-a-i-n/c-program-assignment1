#include<stdio.h>
int main(){
    int n,i,a,low,high,mid;
    printf("enter the number of element:");
    scanf("%d",&n);
    int array[n];
    printf("Enter the element in sorted manner:\n");
    for(i=0;i<n;i++){
        scanf("%d",&array[i]);
    }
    printf("enter the valued to find: ");
    scanf("%d",&a);
    low=0;
    high=n-1;
    mid=(low+high)/2;
    while(low<=high){
        if(array[mid]<a)
        low=mid+1;
        else if(array[mid]==a){
            printf("%d found at the location %d.",a,mid+1);
            break;
        }
        else
        high=mid-1;
        mid=(low+high)/2;
    }
    if(low>high)
    printf("%d is not found in the array",a);
}