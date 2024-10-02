#include <string.h>
#include <stdio.h>
#include <stdlib.h>

void inspect(char s[]) {
  int index = 0;
  while(s[index] != 0) {
    printf("%c (%hhu) ", s[index], s[index]);
    index += 1;
  }
  printf("\n");
}

char lower(char c) 
//takes a string and returns lowercase version (change upper to lower)
//A and Z can be subbbed for 65 and 90
{
  if(c >= 'A' && c<= 'Z')
  {
    /*we can just flip the 2^5 bit (bitwise operator)
    | is bitwise or, & is bitwise and
    both perform operation on each bit of the input

    0110 | 1010 = 1110
    0110 | 1010 = 0010
    */

    //return c | 0b00100000;
    return c+32;
  }
  return c;

}

void lowercase(char s[]) {
  int index = 0;
  //for (int index = 0; s[i] != 0; i++)
  while(s[index] != '\0') 
  {
    s[index] = lower(s[index]);
    index += 1;
  }
}

int main() {
  char abc[] = "ABC";
  lowercase(abc);
  inspect(abc);

  char mixed[] = "Hello Aaron!";
  lowercase(mixed);
  inspect(mixed);






}
