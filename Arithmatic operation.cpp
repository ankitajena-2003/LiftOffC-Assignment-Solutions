//WAP in C to perform all arithmatic operations

#include<stdio.h>
int main ()
{
	int a,b,sum,diff,mul,div,rem;
	printf("Enter two number \n");
	scanf("%d%d,&a,&b");
	sum=a+b;
	diff=a-b;
	mul=a*b;
	div=a/b;
	rem=a%b;
	printf("Addition is %d\n",sum);
	printf("Subtraction is %d\n",diff);
	printf("Multiplication is %d\n",mul);
	printf("Divison is %d\n",div);
	printf("Remainder is %d",rem);
	return 0;
}
