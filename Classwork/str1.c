#include <stdio.h>

int main()
{
    char str[] = "HELLOMYNAMEISJOHN";
    char ans[100];
    int i;
    for (i = 0; i <= str[i] != '\0'; i++)
    {
        ans[i] = str[i] + 32;
    }

    ans[i] = '\0';
    printf("%s", ans);
}