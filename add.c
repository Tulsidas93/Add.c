#include<stdio.h>                          // header file decleration
int main()
{
    int num1,num2,num3,result;             //decleration of variabels
    printf("enter first number");          // print "statment"
    scanf("%d", &num1);                    // input 1st number
    printf("first number is: %d\n",num1);  //print 1st number
    printf("enter second number\n");       // print statment
    scanf(" %d",&num2);                    // input 2nd number
    printf("second number is:%d\n",num2);  // print 2nd number
    printf("enter third number \n");       // print statment
    scanf(" %d",&num3);                    // input 3rd number
    printf("third number is:",num3);       // print 3rd number
        result=num1+num2+num3;             // calculate addition
printf("result is %d", result);            //print add result
return 0;
}
