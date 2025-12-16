#include <stdio.h>

int main() 
{
    int n, original, rev=0, r;
    printf("enter a integer :");
    scanf("%d", &n);
	original = n;
    while(n > 0) 
	{
        r = n % 10;
        rev = rev * 10 + r;
        n = n / 10;
    }

    if(original == rev)
        printf("Palindrome");
    else
        printf("Not Palindrome");

    return 0;
}
