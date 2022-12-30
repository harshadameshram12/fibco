#include<stdio.h>

//with return type without parameter
int add();
int mul();
void main()
{
	int ans,ans1;
	ans=add();// function calling
	printf("\n add=%d",ans);
	printf("\n add=%d",add());//function calling
	
}
int add()
{
	int a,b,c;
	printf("\n enter a&b= ");
	
	scanf("%d%d",&a,&b);
	c=a+b;
	return c;
}
