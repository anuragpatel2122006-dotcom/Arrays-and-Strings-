#include <stdio.h>
#include <string.h>
int main() {
 char s1[100],s2[100]; int cmp;
 printf("Enter first string: "); gets(s1);
 printf("Enter second string: "); gets(s2);
 cmp=strcmp(s1,s2);
 if(cmp==0) printf("Same\n");
 else if(cmp>0) printf("First greater\n");
 else printf("Second greater\n");
 return 0;
}