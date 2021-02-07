#include <stdio.h>
int main()
{
	int p,c,m,b,comp;
	float per;
	printf("Enter your physics ,chem,maths,bio,computer marks\n");
	scanf("%d %d %d %d %d",&p,&c,&m,&b,&comp);
	per=(p+c+m+b+comp)/5;
	printf("percentage=%f",per);
	if(per>=90)
	{
		printf("Grade A\n");
	}
	else if(per>=80)
	{
		printf("Grade B\n");
	}
	else if(per>=70)
	{
		printf("Grade C\n");
	}
	else if(per>=60)
	{
		printf("Grade D\n");
	}
	else if (per>=40)
	{
		printf("Grade E\n");
	}
	else if(per<40)
	{
		printf("Grade F\n");
	}
	return 0;
}
