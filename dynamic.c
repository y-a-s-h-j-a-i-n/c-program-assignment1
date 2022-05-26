#include <stdio.h>
#include <stdlib.h>
int main(){
int *ptr, i , n1,value;
printf("Enter size: ");
scanf("%d", &n1);
ptr = (int*) malloc(n1 * sizeof(int));
printf("enter the element:\n");
for(i = 0; i < n1; ++i)
    scanf("%d\n",&ptr[i]);
printf("enter value 1)add\n2)delete\n ");
scanf("%d", &value);
if(value==1){
    int position,element;
    printf("enter the location and value:");
    scanf("%d %d",&position,&element);
    ptr = realloc(ptr, (n1+1) * sizeof(int));
    if(position >= n1+2)
    printf("insert not possible.\n");
    else{
        for(i=n1-1;i>=position-1;--i)
        ptr[i+1]=ptr[i];
        ptr[position-1]=element;
        printf("new array\n");
        for(i=0;i<n1+1;++i)
        printf("%d\n",ptr[i]);
    }
}
else if(value==2){
    int position;
    printf("enter the location\n");
    scanf("%d",&position);
    if(position >= n1+1)
    printf("Deletion not possible.\n");
    else{
        for(i=position-1;i<n1-1;++i)
        ptr[i]=ptr[i+1];
        printf("new array\n");
        for(i=0;i<n1-1;++i)
        printf("%d\n",ptr[i]);
    }
}
free(ptr);
return 0;
}
