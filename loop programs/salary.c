/*Write a program to accept the basic salary and total sales amount for a
salesperson and calculate commission according to the sales amount. Display the
net salary and the commission earned. The range is as follows -/**/
#include <stdio.h>
int main()
{
    float basic_salsry, sale_amount, commission = 0, netSalary;
    printf("\nEnetr the basic salary :");
    scanf("%f", &basic_salsry);
    printf("\nEnter the sale amount :");
    scanf("%f", &sale_amount);

    if (sale_amount >= 5000 && sale_amount <= 7500)
    {
        commission = sale_amount * 3;
    }
    else if (sale_amount >= 7501 && sale_amount <= 10500)
    {
        commission = sale_amount * 8;
    }
    else if (sale_amount >= 10501 && sale_amount <= 15000)
    {
        commission = sale_amount * 11;
    }
    else if (sale_amount >= 15000)
    {
        commission = sale_amount * 15;
    }

    netSalary = sale_amount + commission;

    printf("\nCommission is : $%f\n", commission);
    printf("\nNet salary is : $%f\n", netSalary);
}