#include <stdio.h>
int main()
{
    int i,j,k,m;
    for(int i=1;i<5;i++){
        for(int k=5;k>i;k--){
            printf(" ");
        }
        for(int j=1;j<=i;j++){
            printf("%c",'A'-1+i);
            for (int m = 2; m<=j; m++)
            {
                printf("%c",'A'-1+i);
            }
        }
        
        printf("\n");
    }
    return 0;
}