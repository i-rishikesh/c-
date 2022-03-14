#include <stdio.h>

int main()
{
    int salary;
    float tax;
    printf("Enter salary");
    scanf("%d", &salary);
    if (salary <= 250000)
    {
        
        tax = 0.0;
        printf(" Nihayti Gareeb%f\n", tax);
    }
    else if (salary >= 250000 && salary <=500000)
    {
    
        tax = 0.05 * salary;
        printf(" Tax :%f\n", tax);
    }
    else if (salary >= 500000 && salary <= 1000000)
    {
        
        tax = 0.20 * salary;
        printf("Tax:%f", tax);
    
    }
    else
    { 
        double tax;
        tax=0.30*salary;
        printf("Tax:%f",tax);
    }

    return 0;
}