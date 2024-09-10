#include <stdio.h>

int main(){
  int a, b;
  char oper ;
  printf("enter the number 1:");
  scanf("%d",&a);
  printf("enter the number 2:");
  scanf("%d",&b);
  printf("enter the operator(+,-,*,/):");
  scanf(" %c",&oper);
  if (oper == '+')
  { 
  printf ("the sum is %d\n",a+b);
  }else if (oper =='-'){
    printf ("the difference id %d\n",a+b);
  }else if (oper == '*' ){
    printf("the product is %d\n",a*b);
  }else if (oper  == '/'){
    if (b!=0){
      printf ("the quotient is %d\n",a/b);
    }else {
      printf ( "division by zero is not allowed.\n");
        }
    }
    else {
      printf ("invalid operator.\n");
    }
}
