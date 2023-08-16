//write a c program to create a file 
#include<stdio.h>
int main(){
    FILE *fp;
    fp = fopen("abcd.txt","w");
    fprintf(fp, "%s", "Welcome to PPS Lab\n");
    fprintf(fp, "%s", "Hello There!\n");
    fprintf(fp, "%s", "Welcome to PPS Lab");
    fclose(fp);
    return 0;
}