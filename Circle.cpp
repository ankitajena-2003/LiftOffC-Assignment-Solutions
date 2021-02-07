//Check whether a word is vowel or connsonant.
#include<stdio.h>
int main()
{
	char ch;
	printf("Input a character:");
	scanf("%c" , &ch);
	switch(ch)
	{case 'a':
		case 'A':
		case 'e':
		case 'E':
		case 'i':
		case 'I':
		case 'o':
		case 'O':
			printf("%c is a vowel !", ch);
			break;
			default:
			printf("%c is not a vowel" , ch);
			
	}
	return 0;
}
