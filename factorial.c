#include<stdio.h>
#include<conio.h>
void main()
{
	int n,fact=1;
	clrscr();
	printf("enter value of n\n");
	scanf("%d",&n);
	while(n>1)
	{
		fact=fact*n;
		n=n-1;
	}
	printf("fact of entered n is:%d",fact);
	getch();
}
