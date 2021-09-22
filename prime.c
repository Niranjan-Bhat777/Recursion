#include<stdio.h>
int prime(int n,int i);
void main()
{
	int num,a;
	printf("Enter a number to check if its a prime number\n");
	scanf("%d",&num);
	a= prime(num,num/2);
	if(a==1)
	{
        printf("%d is a prime number\n", num);
    }
    else
    {
        printf("%d is not a prime number\n", num);
    }
}

int prime(int n, int i)
{
	if(i==1)
	{
		return 1;
	}
	else if(n%2==0)
	{
		return 0;
	}
	else
	{
		return prime(n,i-1);
	}
}
