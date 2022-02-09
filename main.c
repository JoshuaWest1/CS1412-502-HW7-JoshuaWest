#include <stdio.h>
#include <string.h>
// --------------------------------------------------------------------------------
// AUTHOR: Joshua Wade West
// FILENAME: HW7.cpp
// SPECIFICATION: Turns nouns plural
// FOR: CS 1412 Lab- Section 502

int main()
{
  char noun[20];//is the noun that is inputted and then modified
  char OG[20];//a copy of the original noun
int length;//the length of the inputted noun
int x,loops;//variables for string placemnt and # of loops

 printf("\n\nHow many words do you want to make plural?: ");//asks user for desired # of nouns to make plural
  scanf("%d", &loops);

  for(int i = 0; i < loops; i++){//sets up loop for # of nouns


  printf("\n\nEnter a word: ");//user enters a noun
  scanf("%s",noun);


  for(int i = 0; i < 20; i++){//copies the noun into OG array
  OG[i] = noun[i];
  }

  length = strlen(noun);//gets the length of the array
 // printf("Length o word %d\n",length );
x=length;// for simplicity, makes length into variable x

if( noun[x-1] == 'y')// if noun ends in y, convert 'y' into 'ies'
{noun[x-1] = 'i';//replaces y with i
 noun[x] = 'e';//adds e after i
 noun[x+1] = 's';// adds s after e
 noun[x+2] = '\0';
}

else if(noun[x-1] == 's'// if noun ends in s, add 'es'
||
(noun[x-2] == 'c'&& noun[x-1] == 'h' )// if noun ends in ch, add 'es'
||
(noun[x-2] == 's'&& noun[x-1] == 'h') )// if noun ends in sh, add 'es'
{
 noun[x] = 'e';//adds e
 noun[x+1] = 's';//adds s
 noun[x+2] = '\0';
}

else{ noun[x] = 's'; noun[x+1] = '\0';}// for anything else add an s

printf("Word %d is:\n", i+1);
printf("Plural form of the word %s is the word : %s", OG, noun );// prints the original nouns and the plural form.


  }// end of loop

  return(0);
}