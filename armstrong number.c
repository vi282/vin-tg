#include <stdio.h>

int main(){
  int n , originalnum, remainder, result=0,digits=0;
  printf("enter a number : ");
  scanf("%d",&n);
  originalnum =n;
  while(originalnum !=0) {
    originalnum /=10;
    digits++;
    printf("iteraion %d, digits counted so far:%d\n", digits,digits);
  }
  originalnum=n;
  while (originalnum !=0) {
    remainder = originalnum %10;
    result += pow(remainder,digits);
    originalnum /=10;
  }
  if (result == n)
    printf("%d is an armstrong number\n",n);
  else
    printf("%d is not an armstrong number\n",n);
}
