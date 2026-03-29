#include <stdio.h>
int main(){
char c;
printf("Enter a character: ");
scanf(" %c",&c);
if(c=='a'||c=='A'||c=='e'||c=='E'||c=='i'||c=='I'||c=='o'||c=='O'||c=='u'c=='U')
printf("Vowel\n");
else
printf("Consonant\n");
return 0;
}
