

#include <stdio.h>
#include <stdlib.h>
int main(){

char crush[15];
char yourname[15];
int numOfChild;

printf("What is your name ?\n");
scanf("%s", &yourname);
printf("Who will marry you ?\n");
scanf("%s", &crush);
printf("How many children you want? \n");
scanf("%d", &numOfChild);

// answers of all questions
printf("%s is going to marry %s and you're going to have %d babies in the future \n", yourname, crush, numOfChild);

return 0;





}



