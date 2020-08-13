
#include <stdio.h>
#include <string.h>

void delimeter(char string[], char symbol[])
{
  char *ptr = strtok(string, symbol);
  while(ptr != NULL){
    printf("%s\n", ptr);
    ptr = strtok(NULL, symbol);
  }
}

int main()
{
  char string[100];
  char symbol[2];
  printf("Enter the string:");
  scanf("%[^\n]%*c",string);
  printf("Enter the token which you have written in string:");
  scanf("%[^\n]%*c",symbol);
  delimeter(string, symbol);
  return(0);
}
