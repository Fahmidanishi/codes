#include<stdio.h>
int fact(int n)
{

    if(n==1)
        return n;
    else
       return n*fact(n-1);

}
int main(){
    int n;
printf("Enter the number=");
scanf("%d",&n);

printf("factorial of %d = %d",n,fact(n));
}
