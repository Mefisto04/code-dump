// #include<stdio.h>
// int revnum(int);
// int main(){
//     int n;
//     printf("enter any number: ");
//     scanf("%d",&n);
//     //revnum(n);
//     printf("reverse of the number is %d",revnum(n));
//     return 0;
// }
// int sum=0,rem;
// int revnum(int n){
//     if(n>0){
//         rem=n%10;
//         sum=sum*10+rem;
//         revnum(n/10);
//     }
//     else{
//         return sum;
//     }
    
// }


// #include<stdio.h>
// int revnum(int);
// int sum=0,rem;
// int main(){
//     int n;
//     printf("enter any number: ");
//     scanf("%d",&n);
//     revnum(n);
//     printf("reverse of the number is %d",sum);
//     return 0;
// }
// int revnum(int n){
//     if(n>0){
//         rem=n%10;
//         sum=sum*10+rem;
//         revnum(n/10);
//     }
//     else{
//         return 0;
//     }
    
// }

// #include<stdio.h>
// int prod(int, int);
// int p;
// int main(){
//     int n1,n2;
//     printf("enter any 2 number: ");
//     scanf("%d %d",&n1,&n2);
//     prod(n1,n2);
//     printf("product of two number is: %d",prod(n1,n2));
//     return 0;
// }
// int prod(int n1,int n2){
//     if(n1<n2){
//         return prod(n2,n1);
//     }
//     else if(n2!=0){
//         return (n1+prod(n1,n2-1));
//     }
//     else {
//         return 0;
//     }
// }


// #include<stdio.h>
// int fibo(int);
// int main(){
//     int n;
//     printf("enter no. of terms: ");
//     scanf("%d",&n);
//     printf("fibanacci series is:");
//     for(int i=0;i<n;i++){
//         printf("%d ",fibo(i));
//     }
//     return 0;
// }
// int fibo(int n){
//     if(n==0){
//         return 0;
//     }
//     else if(n==1){
//         return 1;
//     }
//     else{
//         return (fibo(n-1)+fibo(n-2));
//     }
// }


#include<stdio.h>
int gcd(int,int);
int main(){
    int a,b;
    printf("enter 2 number: ");
    scanf("%d %d",&a,&b);
    printf("gcd of 2 number is: %d", gcd(a,b));
    return 0;
}
int gcd(int a,int b){
if(b!=0){
    return gcd(b,a%b);
}
else{
    return a;
}

}