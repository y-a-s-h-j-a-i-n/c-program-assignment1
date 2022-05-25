#include<stdio.h>
#include<string.h>
int main(){
    FILE *file = fopen("file.txt","r");
    if(file==NULL){
        perror("Unable to open the file");
        exit(1);
    }
    char ch[256];
    int temp[3]={1,1,1};
    int i=0;
    while(fgets(ch,sizeof(ch),file)){
        if(temp[1]<strlen(ch)){
        temp[0]=i;
        temp[1]=strlen(ch);
        temp[2]=ftell(file);
        }
        i++;
    }
    fseek(file,temp[2]-temp[1],SEEK_SET);
    fgets(ch,sizeof(ch),file);
    printf("%s",ch);
    fclose(file);
    return 0;
}
