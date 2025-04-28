#include<stdio.h>
int main(){


char  operator;
float num1,num2,result;


printf("enter two number : ");
scanf(" %f %f", &num1 , &num2 );


printf("enter type of operator (-,*,/,+) ");
scanf(" %c", &operator);

switch (operator)
{

case '+':
    result = num1 + num2;
    printf(" result : %f",result);
    break;    
case '-':
       result = num1 - num2;
       printf(" result : %f",result);
    break;
case '*':
    result = num1 * num2;
    printf(" result : %f", result);
    break;
case '/':
   if(num2!=0){
       result = num1 / num2;
       printf(" result : %f",result);}
   else
       printf(" not possible");
    break;

    default:printf(" Invalid operator\n");
    break;
}



return 0;    
}