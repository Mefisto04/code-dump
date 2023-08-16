#include<stdio.h>
struct info
{
    char name[20];
    int bank_b;
    int pan_num;
    int balance;

};
int main(){
    struct info a[3];
    for(int i=0;i<3;i++){
        printf("Enter Your Name: ");
        scanf("%s",a[i].name);
        printf("Enter Your Bank Number(of 6 digit): ");
        scanf("%d",&a[i].bank_b);
        printf("Enter Your Pan Number: ");
        scanf("%d",&a[i].pan_num);
        printf("Enter Your Bank Balace: ");
        scanf("%d",&a[i].balance);
        printf("\n");
    }
    printf("Employes Are: \n");
    for(int i=0;i<3;i++){
        if(a[i].balance<5000){
            printf("Name: %s \n",a[i].name);
            printf("Bank Number: %d \n",a[i].bank_b);
            printf("Pan Number: %d \n",a[i].pan_num);
            printf("Bank Balance: %d \n\n",a[i].balance);
        }
    }
    return 0;
}
