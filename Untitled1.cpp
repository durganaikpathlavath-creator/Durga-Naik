#include <stdio.h>
int main()
{
	char ch;
	char s[1000];
	char sen[1000];
	printf("enter a character:");
	scanf("%c\n",&ch);
	printf("enter the string:");
	scanf("%s\n",s);
	printf("enter the string:");
	scanf("%s",sen);
	printf("%c\n%s\n%s",ch,s,sen);
	return 0;
}
