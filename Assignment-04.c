/*** print MySirG 5 times on the screen ***/

#include <stdio.h>
int main()
{
    int i = 1;
    while (i <= 5)
    {
        printf("\nMySirG");
        i += 1;
    }
    return 0;
}

/*** print the first 10 natural numbers ***/

#include <stdio.h>
int main()
{
    int i = 1;
    while (i <= 10)
    {
        printf("%d ", i);
        i++;
    }
    return 0;
}

/*** print the first 10 natural numbers in reverse order ***/

#include <stdio.h>
int main()
{
    int i;
    for (i = 11; i >= 2; i--)
    {
        printf("%d ", i - 1);
    }
    return 0;
}

/*** print the first 10 odd natural numbers ***/

#include <stdio.h>
int main()
{
    int i = 1;
    while (i <= 20)
    {
        printf("%d ", i);
        i += 2;
    }
    return 0;
}

/***  print the first 10 odd natural numbers in reverse order ***/

#include <stdio.h>
int main()
{
    int i = 20;
    while (i >= 1)
    {
        printf("%d ", i - 1);
        i -= 2;
    }
    return 0;
}

/***  print the first 10 even natural numbers ***/

#include <stdio.h>
int main()
{
    int i = 2;
    while (i <= 20)
    {
        printf("%d ", i);
        i += 2;
    }
    return 0;
}

/*** print the first 10 even natural numbers in reverse order ***/

#include <stdio.h>
int main()
{
    int i = 20;
    while (i >= 2)
    {
        printf("%d ", i);
        i -= 2;
    }
    return 0;
}

/***  print squares of the first 10 natural numbers ***/

#include <stdio.h>
int main()
{
    int i = 1;
    while (i <= 10)
    {
        printf("%d ", i * i);
        i++;
    }
    return 0;
}

/***  print cubes of the first 10 natural numbers ***/

#include <stdio.h>
int main()
{
    int i = 1;
    while (i <= 10)
    {
        printf("%d ", i * i * i);
        i++;
    }
    return 0;
}

/***  print a table of 5 ***/

#include <stdio.h>
int main()
{
    int i;
    for (i = 5; i <= 50; i += 5)
    {
        printf("%d\n", i);
    }
    printf("\n");
    return 0;
}