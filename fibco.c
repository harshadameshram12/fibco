#include<stdio.h>
int fib(int n);
main()
{
int n,f;
printf(" enter the n=");
scanf("%d",&n);
f=fact(n);
printf(" the fib is=%d",f);

int fib(int n)
{
if(n==0)
{
return 0;
}
else 
(n==1)
{
return 1;
}
return fib(n-1)+fib(n-2);
}
