#include<stdio.h>
int strin(char *x,char *y){
    while(*x !='\0' && *y != '\0'){
        if(*x != *y){
            return 0;
        }
        x++;
        y++;
    }
    if(*x == '\0' && *y == '\0'){
        return 1;
    }
    else{
        return 0;
    }
}
int main(){
    char name1[20],name2[20];
    int result;
    printf("Enter String1: ");
    scanf("%s",name1);
    printf("Enter String2: ");
    scanf("%s",name2);
    result = strin(name1,name2);
    if(result == 1){
        printf("String are Equal");
    }
    else{
        printf("String are not equal");
    }
    return 0;
}