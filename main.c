#include <stdio.h>

int main(int argc, char const *argv[])
{
    int year;
    printf("please input a year\n");
    scanf("%d", &year);
    if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
        printf("%d is a leap year\n", year);

    else
        printf("%d is not a leap year\n", year);

    return 0;
}


