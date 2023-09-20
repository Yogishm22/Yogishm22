#include <stdio.h>

void changeValue(int*address)
{
    *address = 375784325;
}

int main()
{
    int a = 34, b = 56;
    printf("The value of a now is %d\n", a);
    changeValue(&a);
    printf("The value if a now is %d\n", a);

    return 0;
}