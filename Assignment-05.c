/*** print MySirG N times on the screen ***/

#include <stdio.h>
int main()
{
    int i = 1, N;
    printf("Enter a number: ");
    scanf("%d", &N);
    while (i <= N)
    {
        printf("\nMySirG");
        i += 1;
    }
    return 0;
}

/*** print the first N natural numbers ***/

#include <stdio.h>
int main()
{
    int i = 1, N;
    printf("Enter a number: ");
    scanf("%d", &N);

    while (i <= N)
    {
        printf("%d ", i);
        i++;
    }
    return 0;
}

/*** print the first N natural numbers in reverse order ***/

#include <stdio.h>
int main()
{
    int i, N;
    printf("Enter a number: ");
    scanf("%d", &N);

    for (i = N; i <= N; i--)
    {
        printf("%d ", i);
        if (i == 1)
        {
            break;
        }
    }
    return 0;
}

/*** print the first N odd natural numbers ***/

#include <stdio.h>
int main()
{
    int i = 1, N;
    printf("Enter a number: ");
    scanf("%d", &N);

    while (i <= N)
    {
        printf("%d ", i);
        i += 2;
    }
    return 0;
}

/***  print the first N odd natural numbers in reverse order ***/

#include <stdio.h>
int main()
{
    int N, i;
    printf("Enter a number: ");
    scanf("%d", &N);

    for (i = N; i > 0; i -= 1)
    {
        if ((i % 2) == 0)
            printf("%d ", i - 1);
        else {
            printf("%d ", i);
            i-=1;
        }

    }
    return 0;
}

/***  print the first N even natural numbers ***/

#include <stdio.h>
int main()
{
    int i=2, N;
    printf("Enter a number: ");
    scanf("%d", &N);

    while (i <= N)
    {
        printf("%d ", i);
        i += 2;
    }
    return 0;
}

/*** print the first N even natural numbers in reverse order ***/

#include <stdio.h>
int main()
{
    int N,i;
    printf("Enter a number: ");
    scanf("%d", &N);

    for (i=N;i > 1; i-=1)
    {
        if((i %2)==0)
        {
        printf("%d ", i);
        }
        else {
            i-=1;
            printf("%d ", i);
        }   
    }
    return 0;
}

/***  print squares of the first N natural numbers ***/

#include <stdio.h>
int main()
{
    int i = 1,N;
    printf("Enter a number: ");
    scanf("%d", &N);

    while (i <= N)
    {
        printf("%d ", i * i);
        i++;
    }
    return 0;
}

/***  print cubes of the first N natural numbers ***/

#include <stdio.h>
int main()
{
    int i = 1,N;
    printf("Enter a number: ");
    scanf("%d", &N);

    while (i <= N)
    {
        printf("%d ", i * i * i);
        i++;
    }
    return 0;
}

/***  print a table of N ***/

#include <stdio.h>
int main()
{
    int i,N;
    printf("Enter a number: ");
    scanf("%d", &N);

    for (i = N; i <=(N*10); i =i+N )
    {
        printf("%d\n", i);
    }
    printf("\n");
    return 0;
}