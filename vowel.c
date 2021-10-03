#include<stdio.h>
int main()
{
	char x;
	printf("Enter a character:");
	scanf("%c",&x);
	switch(x)
	{
		case 'A':
		case 'a':
		printf("The character %c is vowel",x);
		break;
		case 'e': case 'E':
		printf("The character %c is vowel",x);
		break;
		case 'i': case 'I':
		printf("The character %c is vowel",x);
		break;
		case 'o': case 'O':
		printf("The character %c is vowel",x);
		break;
		case 'u': case 'U':
		printf("The character %c is vowel",x);
		break;
		default:
		printf("the character%c is not vowel",x);
	}
}