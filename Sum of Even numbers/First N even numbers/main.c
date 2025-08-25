// for loop t1 (Standard)
#include <stdio.h>
int main()
{
    int i,a=2,num,sum=0;
    printf ("Enter n term: ");
    scanf ("%d",&num);
    printf ("First %d even number: ",num);
    for (i=1; i<=num; i++)
    {
        printf ("%d ",a);
        sum+=a;
        a+=2;
    }
    printf ("\nSum of first %d even numbers: %d\n",num,sum);
    return 0;
}
// for loop t2
#include <stdio.h>
int main()
{
    int i,num,sum=0;
    printf("Enter a integer number:");
    scanf("%d",&num);
    for (i=1; i<=num; i++)
    {
        sum+=2*i;
    }
    printf("\nSum of first %d even number: %d\n",num,sum);
    return 0;
}
// while loop
#include <stdio.h>
int main()
{
    int i=1,a=2,num,sum=0;
    printf ("Enter n term: ");
    scanf ("%d",&num);
    printf ("First %d even number: ",num);
    while (i<=num)
    {
        printf ("%d ",a);
        sum+=a;
        a+=2;
        i++;
    }
    printf ("\nSum of first %d even numbers: %d\n",num,sum);
    return 0;
}
// do-while loop
#include <stdio.h>
int main()
{
    int i=1,a=2,num,sum=0;
    printf ("Enter n term: ");
    scanf ("%d",&num);
    printf ("First %d even number: ",num);
    do
    {
        printf ("%d ",a);
        sum+=a;
        a+=2;
        i++;
    }
    while (i<=num);
    printf ("\nSum of first %d even numbers: %d\n",num,sum);
    return 0;
}
