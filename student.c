#include <stdio.h>

int main()
{
    int a, b, c;
    float marks;
    printf("Enter the marks of 3 subjects");
    scanf("%d%d%d", &a, &b, &c);


    marks = (a + b + c) / 300.0  * 100  ;
    printf("Percentage marks:%f\n", marks);
    if (marks >= 40 && a >= 33 && b >= 33 && c >= 33)

        printf("Pappu pass ho gya");

    else
        printf("Pappu cant dance sala");

    return 0;
}