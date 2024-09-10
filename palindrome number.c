#include <stdio.h>

int main(){
  int n, reversed=0,original;
  printf("enter a number;");
    scanf ("%d",&n);
  original=n;
  while (n!=0){
    int remainder=n%10;
    reversed=reversed *10+remainder;
    n/=10;
  }
  if(original==reversed){
    printf("%d is a palindrome number\n",original);
    }else{
    printf("%d is not a palindrome number\n",original);
    }
  return 0;

    }