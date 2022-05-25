#include<stdio.h>
int main(){
    int array[100],position,element,i,n;
    printf("Enter number of elements in array\n");
    scanf("%d",&n);
    printf("enter %d elements\n",n);
    for(i=0;i<n;i++)
        scanf("%d",&array[i]);
    printf("enter the position where you wish to insert element\n");
    scanf("%d",&position);
    printf("enter the value of the inserted element\n");
    scanf("%d",&element);
    if(position >= n+2)
    printf("insert not possible.\n");
    else{
        for(i=n-1;i>=position-1;i--)
        array[i+1]=array[i];
        array[position-1]=element;
        printf("new array\n");
        for(i=0;i<n+1;i++)
        printf("%d\n",array[i]);
    }
    return 0;
}