#include <stdio.h>
int main() {
    char str[100];
    int count = 0;
    gets(str);

    while(str[count] != '\0')
        count++;

    printf("Length = %d", count);
    return 0;
}
