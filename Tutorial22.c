/*

kms to miles
inches to foot
cms to inches
pound to kgs
inches to meters

*/
#include <stdio.h>

int main(int argc, char const *argv[])
{
    //start;//
    char input;
    float kmsTomiles = 0.6213;
    float inchesTofoot = 0.0833;
    float cmsToinches = 0.3937;
    float poundTokgs = 0.453592;
    float inchesTometers = 0.0254;
    float first, second;

    while (1)

    {
        printf("Enter the input charachter.q to quit\n;   1. kms to miles\n    2. inches to foot\n    3. cms to inches\n    4. pound to kgs\n    5. inches to meters\n  ");
        scanf("%c\n", &input);

        printf("Enter quantity in terms of first unit\n");
        scanf("%f\n", first);

        switch (input)
        {
        case 'q':
            printf("Press q to quit\n");
            goto end;
            break;

        case '1':
            printf("Enter the numerical value in terms of first unit\n");
            scanf("%f\n", &first);
            second = first * kmsTomiles;
            printf("%f kms is equal to %f miles\n", first, second);
            break;

        case '2':
            printf("Enter the numerical value in terms of first unit\n");
            scanf("%f\n", &first);
            second = first * inchesTofoot;
            printf("%f inches is equal to %f foot\n", first, second);
            break;

        case '3':
            printf("Enter the numerical value in terms of first unit\n");
            scanf("%f\n", &first);
            second = first * cmsToinches;
            printf("%f cms is equal to %f inches\n", first, second);
            break;

        case '4':
            printf("Enter the numerical value in terms of first unit\n");
            scanf("%f\n", &first);
            second = first * poundTokgs;
            printf("%f pounds is equal to %f kgs\n", first, second);
            break;

        case '5':
            printf("Enter the numerical value in terms of first unit\n");
            scanf("%f\n", &first);
            second = first * inchesTometers;
            printf("%f inches is equal to %f meters\n", first, second);
            break;

        default:
            printf("In default now\n");
            break;
        }
    }
end:

    return 0;
}
