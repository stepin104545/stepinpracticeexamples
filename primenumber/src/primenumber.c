#include "primenumber.h"

int primenumber(int number)
{
  /*defining the true as 1 and false as 0*/
  int true = 1;
  int false = 0;
  /*making the falg 0 to check the for prime numner or not*/
  int flag=0;
  if(number <= 1)
  {
    /*checking wheather the number is less than 2 or not */
    return false;
  }
  for(int i=2;i<=(number/2);i++)
  {
    /*checking the number is prime or not*/
    if((number%i)==0){
    /*making the flag is equal to 1 if the number is not a prime number*/
    flag=1;
    }
  }
  if(flag==0){
    /*returning the true is the given number is prime number*/
    return true;
  }
  else{
    /*returning the false is the given number is not a prime number*/
    return false;
  }
}
