/*** given number is positive or non-positive ***/

#include <stdio.h>
int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    if (num >= 0)
    {
        if (num == 0)
            printf("%d is neither positive nor negative.", num);

        else
            printf("%d is positive.", num);
    }
    else
    {
        printf("%d is Non-positive.", num);
    }

    return 0;
}

/*** given number is divisible by 5 or not ***/

#include <stdio.h>
int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    if (num % 5 == 0)
    {
        printf("%d is divisible by 5.", num);
    }
    else
    {
        printf("%d is not divisible by 5.", num);
    }

    return 0;
}

/*** given number is an even number or an odd number ***/

#include <stdio.h>
int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    ((num & 1) == 0) ? printf("%d is Even.", num) : printf("%d is Odd.", num);

    return 0;
}

/*** given number is an even number or an odd number without using % operator ***/

#include <stdio.h>
int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    if ((num & 1) == 0)
    {
        printf("%d is Even.", num);
    }
    else
    {
        printf("%d is Odd.", num);
    }

    return 0;
}

/*** given number is a three-digit number or not ***/

#include <stdio.h>
int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    ((num >= 100) && (num <= 999)) ? printf("%d is a three-digit number.", num) : printf("%d is not a three-digit number.", num);

    return 0;
}

/*** print greater between two numbers ***/

/***  whether roots of a given quadratic equation are real... ***/

#include <stdio.h>
int main()
{
    double D, a, b, c;
    printf("Enter value of a : ");
    scanf("%lf", &a);

    printf("Enter value of b : ");
    scanf("%lf", &b);

    printf("Enter value of c : ");
    scanf("%lf", &c);

    D = b * b - (4 * a * c);

    if (D >= 0)
    {
        if (D == 0)
            printf("roots are real and equal");
        else
            printf("roots are real and distinct.");
    }
    else
    {
        printf("roots are imaginary and unequal");
    }

    return 0;
}

/*** whether a given year is a leap year or not ***/

#include <stdio.h>
int main()
{
    int year;
    printf("Enter a year: ");
    scanf("%d", &year);

    ((year % 4 == 0) && (year % 100 != 0) || (year % 400 == 0)) ? printf("%d is a Leap year", year) : printf("%d is not a Leap year", year);

    return 0;
}

/*** find the greatest among three given numbers ***/

#include <stdio.h>
int main()
{
    double a, b, c;
    printf("Enter three numbers: \n");
    scanf("%lf%lf%lf", &a, &b, &c);

    if(a>=b && a>=c)
    {
        printf("%.2lf is greatest among three given numbers", a);
    }
    else if(b>=a && b>=c)
    {
        printf("%.2lf is greatest among three given numbers", b);
    }
    else
    {
        printf("%.2lf is greatest among three given numbers", c);
    }

    return 0;
}

/*** takes the cost price and selling price of a product ***/

#include <stdio.h>
int main()
{
    double CP, SP, Profit, PP, Loss, LP;
    printf("Enter cost price: ");
    scanf("%lf", &CP);

    printf("Enter selling price: ");
    scanf("%lf", &SP);

    if (SP >= CP)
    {
        Profit = SP - CP;

        if (SP == CP)
        {
            printf("No Profit, No Loss");
        }
        else
        {
            PP = (Profit / CP) * 100;
            printf("Profit percentage= %lf", PP);
        }
    }
    else
    {
        Loss = CP - SP;
        LP = (Loss / CP) * 100;
        printf("Loss percentage= %lf", LP);
    }

    return 0;
}

/*** take marks of 5 subjects from the user ***/

#include <stdio.h>
int main()
{
    int S1, S2, S3, S4, S5, Total;
    float Percentage;

    printf("Enter five subjects marks: \n");
    scanf("%d%d%d%d%d", &S1, &S2, &S3, &S4, &S5);

    Total = S1 + S2 + S3 + S4 + S5;
    Percentage = Total / 5.0;

    if ((S1 >= 33) && (S2 >= 33) && (S3 >= 33) && (S4 >= 33) && (S5 >= 33))
    {
        printf("Total marks= %d\n", Total);
        printf("Percentage= %.2f%%\n", Percentage);
        printf("You have passed");
    }
    else
    {
        printf("Total marks= %d\n", Total);
        printf("Percentage= %.2f%%\n", Percentage);
        printf("You have failed");
    }

    return 0;
}

/*** check whether a given alphabet is in uppercase or lowercase ***/

#include <stdio.h>
int main()
{
    char alpha;
    printf("Enter an alphabet: ");
    scanf("%c", &alpha);

    if (alpha >= 65 || alpha >= 97)
    {
        if (alpha <= 90)
        {
            printf("Alphabet is in Uppercase.");
        }

        if (alpha <= 122)
        {
            printf("Alphabet is in Lowercase.");
        }
    }
    else
    {
        printf("You have not entered alphabet.");
    }
    return 0;
}

/*** check whether a given number is divisible by 3 and divisible by 2 ***/

#include <stdio.h>
int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    if ((num % 6) == 0)
    {
        printf("%d is divisible by both 2 AND 3.", num);
    }
    else if ((num % 2) == 0)
    {
        printf("%d is only divisible by 2.", num);
    }
    else if ((num % 3) == 0)
    {
        printf("%d is only divisible by 3.", num);
    }
    else
    {
        printf("%d is NOT divisible by both 2 and 3.", num);
    }
}

/*** check whether a given number is divisible by 7 or divisible by 3 ***/

#include <stdio.h>
int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    if ((num % 21) == 0)
    {
        printf("%d is divisible by 3 AND 7.", num);
    }
    else if ((num % 3) == 0)
    {
        printf("%d is divisible by 3.", num);
    }
    else if ((num % 7) == 0)
    {
        printf("%d is divisible by 7.", num);
    }
    else
    {
        printf("%d is NOT divisible by both 3 and 7.", num);
    }
}

/***  check whether a given number is positive, negative or zero ***/

#include <stdio.h>
int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    if ((num <= 0))
    {
        if (num == 0)
        {
            printf("Entered number is zero.");
        }
        else
        {
            printf("Entered number is Negative.");
        }
    }
    else
    {
        printf("Entered number is Positive.");
    }
}

/*** check whether a given character is an alphabet (uppercase), an
alphabet (lower case), a digit or a special character ***/

#include <stdio.h>
int main()
{
    char alpha;
    printf("Enter an alphabet: ");
    scanf("%c", &alpha);

    if (alpha >= 33 || alpha >= 48 || alpha >= 58 || alpha >= 65 || alpha >= 91 || alpha >= 97 || alpha >= 123)
    {
        if (alpha <= 47)
        {
            printf("It's a special character.");
        }
        else if (alpha <= 57)
        {
            printf("It's a Digit.");
        }
        else if (alpha <= 64)
        {
            printf("It's a special character.");
        }
        else if (alpha <= 90)
        {
            printf("Alphabet is in Uppercase.");
        }
        else if (alpha <= 96)
        {
            printf("It's a special character.");
        }
        else if (alpha <= 122)
        {
            printf("Alphabet is in Lowercase.");
        }
        else if (alpha <= 126)
        {
            printf("It's a special character.");
        }
    }
    else
    {
        printf("BOOM !");
    }
    return 0;
}

/*** program which takes the length of the sides of a triangle as an input ***/

#include <stdio.h>
int main()
{
    int a, b, c;

    printf("Enter three sides of triangle: \n");
    scanf("%d%d%d", &a, &b, &c);

    if ((a + b) > c)
    {
        if ((b + c) > a)
        {
            if ((a + c) > b)
            {
                printf("Triangle is valid.");
            }
            else
            {
                printf("Triangle is not valid.");
            }
        }
        else
        {
            printf("Triangle is not valid.");
        }
    }
    else
    {
        printf("Triangle is not valid.");
    }
    return 0;
}

/*** program which takes the month number as an input and display number of
days in that month ***/

#include <stdio.h>
int main()
{
    int num;
    printf("Enter the month number: ");
    scanf("%d", &num);

    if (num == 1 || num == 3 || num == 5 || num == 7 || num == 8 || num == 10 || num == 12)
    {
        printf("31 days");
    }
    else if (num == 4 || num == 6 || num == 9 || num == 11)
    {
        printf("30 days");
    }
    else if (num == 2)
    {
        printf("28/29 days");
    }
    return 0;
}
