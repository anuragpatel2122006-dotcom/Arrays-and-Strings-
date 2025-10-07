#include <stdio.h>
#include <ctype.h>
int main() {
 char str[100]; int i,a=0,e=0,i1=0,o=0,u=0;
 printf("Enter string: ");
 gets(str);
 for(i=0; str[i]; i++){
 char c=tolower(str[i]);
 if(c=='a') a++;
 else if(c=='e') e++;
 else if(c=='i') i1++;
 else if(c=='o') o++;
 else if(c=='u') u++;
 }
 printf("a=%d e=%d i=%d o=%d u=%d\n",a,e,i1,o,u);
 return 0;
}