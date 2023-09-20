#include <stdio.h>

int main()
{
    char value; 
    int kms, inch;
    printf("Enter the value\n");

    scanf("%d", value); 
    printf("you have entered %d as value\n");

    
    printf("Enter %f in kms\n");
    scanf("%f", &kms );
    
    if (value == kms)
    {
        /*k  stands for kms
        c stands for miles in a kilometer*/
        const float k;

        const float c = 0.621;

        printf("Enter the Kms\n");
        scanf("%f", &k);

        printf("k * c =%f\n", k * c);
        printf("your answer is %f\n");
        
    }

    else if ( value == inch)
    {
        /* i stands for inch
        f stands for foot in a inch*/
        const float i;
        const float f = 0.0833;
         printf("Enter the inch\n");
        scanf("%f", &i);

        printf("i * f =%f\n", i * f);
        printf("your answer is %f\n");

    }
     return 0;
}