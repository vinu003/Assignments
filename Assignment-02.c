/***  print unit digit of a given number  ***/

#include<stdio.h>
int main()
{
    int num, remainder;
    printf("Enter a number\n");
    scanf("%d", &num);

    remainder= num % 10;
    printf("%d", remainder);
    return 0;
}

/*** print a given number without its last digit ***/

#include<stdio.h>
int main()
{
    int num, new_num;
    printf("Enter a integer\n");
    scanf("%d", &num);

    new_num= num / 10;
    printf("New integer = %d", new_num);

    return 0;
   
}

/*** swap values of two int variables ****/

#include<stdio.h>
int main()
{
    int A, B, C;
    printf("Enter value of A: ");
    scanf("%d", &A);
   
    printf("Enter value of B: ");
    scanf("%d", &B);
    C=A;
    A=B;
    B=C;

    printf("New value of A is %d and value of B is %d",A, C);

    return 0;
   
}

/*** swap values of two int variables without using a third variable ***/

#include<stdio.h>
int main()
{
    int A, B;
    printf("Enter value of A: ");     
    scanf("%d", &A);

    printf("Enter value of B: ");
    scanf("%d", &B);

    printf("New value of A is %d and value of B is %d", B,A);

    return 0;
   
}

/***  input a three-digit number and display the sum of the digits ***/

#include<stdio.h>
int main()
{
    int num, sum;
    printf("Enter three digit number: ");
    scanf("%d", &num);

    sum=(num / 100) + (num/10) % 10 + (num % 10);
    printf("Sum of digits is %d.", sum);

    return 0;
   
}

/***  take a character as an input and displays its ASCII code ***/

#include<stdio.h>
int main()
{
    char ch;
    printf("Enter a character: ");
    scanf("%c", &ch);

    printf("ASCII code of %c is %d.", ch,ch);

    return 0;

}

/*** program to find the position of first 1 in LSB ***/






/*** given number is even or odd using a bitwise operator ***/

#include<stdio.h>
int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    ((num & 1)==0)?printf("Number is Even"):printf("Number is Odd");
    return 0;

}

/*** program to print size of an int, a float, a char and a double type variable ***/

#include<stdio.h>
int main()
{
    int AB;
    float FLOAT;
    char CHAR;
    double DOUBLE;

    printf("Size of int is : %d\n", sizeof(AB));
    printf("Size of float is : %d\n", sizeof(FLOAT));
    printf("Size of char is : %d\n", sizeof(CHAR));
    printf("Size of double is : %d\n", sizeof(DOUBLE));

    return 0;
}

/***  make the last digit of a number stored in a variable as zero  ***/    
 
#include<stdio.h>
int main()
{
    int num, new_num, remainder;
    printf("Enter a integer\n");
    scanf("%d", &num);

    new_num = num / 10;
    remainder=0; 

    printf("%d%d",new_num, remainder);
    return 0;
}

/*** input a number from the user and also input a digit ***/

#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter value of A: ");
    scanf("%d", &a);

    printf("Enter value of B: ");
    scanf("%d", &b);

    printf("New value is %d%d",a,b);
    return 0;
}

/*** program to take the amount in INR and convert it into USD ***/

#include<stdio.h>
int main()
{
    float INR,new, USD=76.23f;
    printf("Enter a amount: ");
    scanf("%f", &INR);

    new=INR/USD;

    printf("%f INR will be %f USD.", INR,new);
    return 0;

}

/***  take a three-digit number from the user and rotate its digits by 
one position towards the right***/

#include<stdio.h>
int main()
{
    int num, num1, num2, num3, rotate;
    printf("Enter three digit number: ");
    scanf("%d", &num);

    num1= num / 100;
    num2= (num % 100)/10;
    num3= num % 10;

    rotate= num3*100 + num1*10 + num2;
    printf("New number: %d", rotate);

    return 0;
}