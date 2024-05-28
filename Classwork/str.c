// #include<stdio.h>
// int main()
// {
//     char n[100] = "HeLLo";
//     printf("%s",n);

// }



#include<stdio.h>
#include<string.h>
int main()
{
    char n[100];
   strcpy(n,"HELLO");

//    gets(n);//-->scanf
//     puts(n);//-->printf

puts(strlwr(n));

}