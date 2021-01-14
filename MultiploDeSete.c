#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,r;
    // for (i=100; i<=200; i++)
    for (i=100; i<=200; i=i+7)
    {
        printf("\n o valor de i e %d", i);
        r = (i%7);
        if (r == 0)
        {
                printf("\n %d e multiplo de 7", i);
        }
    }
    return 0;
}
