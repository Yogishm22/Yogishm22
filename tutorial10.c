#include <stdio.h>

int main(int argc, char const *argv[])
{
    int age;
    printf("Enter your age\n");

    scanf("%d", &age);
    printf("you have entered %d as your age\n", age);
    if (age >= 18)
    {
        printf("you can vote");
    }
    else if (age > 10)
    {
        printf("You are between 10 to 18 and you can vote for kids");
    }

    else if (age > 3)
    {
        printf("You are between 3 to 10 and you can vote for babies");
    }
    else
    {
        printf("You cannot vote");
    }
    return 0;
}