// for loop
#include <stdio.h>
int main()
{
    int i,num,sum=0;
    printf ("Enter the n term: ");
    scanf ("%d",&num);
    printf ("Odd numbers up to %d: ",num);
    for (i=1; i<=num; i++)
    {
        if (i%2==1)
        {
            sum+=i;
            printf ("%d ",i);
        }
    }
    printf ("\nSum of all odd numbers up to %d is: %d\n",num,sum);
    return 0;
}
// while loop
#include <stdio.h>
int main()
{
    int i=1,num,sum=0;
    printf ("Enter the n term: ");
    scanf ("%d",&num);
    printf ("Odd numbers up to %d: ",num);
    while (i<=num)
    {
        if (i%2==1)
        {
            sum+=i;
            printf ("%d ",i);
        }
        i++;
    }
    printf ("\nSum of all odd numbers up to %d is: %d\n",num,sum);
    return 0;
}
// do-while loop
#include <stdio.h>
int main()
{
    int i=1,num,sum=0;
    printf ("Enter the n term: ");
    scanf ("%d",&num);
    printf ("Odd numbers up to %d: ",num);
    do
    {
        if (i%2==1)
        {
            sum+=i;
            printf ("%d ",i);
        }
        i++;
    }
    while (i<=num);
    printf ("\nSum of all odd numbers up to %d is: %d\n",num,sum);
    return 0;
}
