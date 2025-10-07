#include <stdio.h>
#include <ctype.h>
int main() {
 char str[100]; int i;
 printf("Enter string: ");
 gets(str);
 for(i=0; str[i]; i++) str[i]=tolower(str[i]);
 printf("Lowercase: %s\n", str);
 return 0;
}