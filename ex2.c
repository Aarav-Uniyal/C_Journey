#include <stdio.h>

int main(int argc, char const *argv[])
{
    int response;
    float num;
    while (1){

    printf("\n1 - kms to miles\n2 - inches to foot\n3 - cms to inches\n4 - pound to kgs\n5 - inches to meters\n6 - Quit\n");
    scanf("%d", &response);
    if (response==6){
        printf("quitting...");
        break;
    }
    else
    {   
        printf("Enter number\n");
        scanf("%f", &num);

        if (response==1){
            printf("%.2f",num*1.6);
        }

        else if (response==2)
        {
            printf("%.2f", num*12);
        }
        
        else if (response==3)
        {
            printf("%.2f", num/2.54);
        }
        else if (response==4)
        {
            printf("%.2f", num*2.2);
        }
        else if (response==5)
        {
            printf("%.2f", num/39.37);
        }

        else
        {
            printf("not a valid response");
        }
        
    }
    
    }

    return 0;
}
