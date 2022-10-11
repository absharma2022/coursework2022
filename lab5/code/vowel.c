// This is a c code to verfiy user entered character is vowel or consonant

#include<stdio.h>
#include<math.h>
int main()
{

char ch;
printf(" please enter the character \n");
scanf("%c",&ch);

if(ch=='a' || ch=='e' || ch=='i' || ch=='o' ||ch=='u' || ch=='A' || ch=='E' || ch=='I' || ch=='O' ||ch=='U')

printf("The entered character is vowel \n");
else
printf("The entered character is consonant \n");

return 0;

}
