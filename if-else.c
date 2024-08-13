#include <stdio.h>

int main()
{
    int a;
    printf("1 - Maths and science\n2 - Maths or science\n3 - None\n");
    scanf("%d", &a);

    if (a==1)
    {
        printf("both passed. 45 ka gift");
    }

    else if (a==2)
    {
        printf("one subject passed. 15 ka gift"); 
    }

    else if (a==3)
    {
        printf("none passed. no gift");
    }
    
    else
    {
        printf("kya likha h be");
    }
    
    return 0;
}
