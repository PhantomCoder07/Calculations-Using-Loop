// for loop
#include <stdio.h>
int main()
{
    int i,a=1,num,sum=0;
    printf ("Enter n term: ");
    scanf ("%d",&num);
    printf ("First %d terms odd number: ",num);
    for (i=1; i<=num; i++)
    {
        printf ("%d ",a);
        sum+=a;
        a+=2;
    }
    printf ("\nSum of first %d terms odd numbers: %d\n",num,sum);
    return 0;
}
// while loop
#include <stdio.h>
int main()
{
    int i=1,a=1,num,sum=0;
    printf ("Enter n term: ");
    scanf ("%d",&num);
    printf ("First %d terms odd number: ",num);
    while (i<=num)
    {
        printf ("%d ",a);
        sum+=a;
        a+=2;
        i++;
    }
    printf ("\nSum of first %d terms odd numbers: %d\n",num,sum);
    return 0;
}
// do-while loop
#include <stdio.h>
int main()
{
    int i=1,a=1,num,sum=0;
    printf ("Enter n term: ");
    scanf ("%d",&num);
    printf ("First %d terms odd number: ",num);
    do
    {
        printf ("%d ",a);
        sum+=a;
        a+=2;
        i++;
    }
    while (i<=num);
    printf ("\nSum of first %d terms odd numbers: %d\n",num,sum);
    return 0;
}
