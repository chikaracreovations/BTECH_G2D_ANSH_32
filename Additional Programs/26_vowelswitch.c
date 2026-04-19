#include <stdio.h>
int main(){
char c;
printf("Enter character: ");
scanf(" %c",&c);
switch(c){
case 'a':case 'e':case 'i':case 'o':case 'u': case 'A':case 'E':case 'I':case 'O': case 'U':printf("Vowel\n"); break;
default: printf("Consonant\n");
}
return 0;
}