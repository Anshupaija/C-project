#include <stdio.h>

int main()
{
    char s[100];
    printf("Enter Your Name: ");
    gets(s);    
    int i;
    for (i = 0; i <= s[i] != '\0'; i++)
    {
        if (s[i] >= 'A' && s[i] <= 'Z')
        {
            s[i] = s[i] + 32;
        }
    }
    printf("%s", s);
}