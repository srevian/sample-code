#include<stdio.h>

int isprime(int num,int i)
{
    if(i==1)
        return 1;

    else
    {
        if(num%i==0)
            return 0;
        else
            isprime(num,i-1);
    }
}
void main()
{
    int num,prime;
    printf("\n Enter a no: ");
    scanf("%d",&num);
    if(num==1||num==0)
        printf("\n %d is not counted as a prime number",num);
    else
    {
        prime=isprime(num,num/2);
        if(prime)
            printf("\n %d is prime number",num);
        else
            printf("\n %d is not a prime number",num);
    }
}
