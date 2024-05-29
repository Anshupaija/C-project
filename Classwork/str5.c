// #include <stdio.h>
// #include <string.h>

// int main() {
//    char str1[20] = "Hello ";
//    char str2[20] = "World";

//    strcat(str1, str2);

//    printf("Concatenated string: %s\n", str1);

//    return 0;
// }
#include <stdio.h>
#include <string.h>

int main() {
   char str1[20] = "Hello ";
   char str2[20] = "World";
   char joined[40];

   strcpy(joined,strcat(str1,str2));

   printf("Concatenated string: %s\n", joined);

   return 0;
}