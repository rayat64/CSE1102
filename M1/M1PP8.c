#include<stdio.h>
int main()
{
    float burger=200.0, sandwich=75.0, pizza=750.0, cold_drink=40.0;
    float bill, payment, change;
    int n_burg, n_sand, n_pizz, n_cold;


    printf("Enter NO. of Burger, Pizza, Sandwich And Cold Drink(maintain order of foods) \n");
    scanf("%d %d %d %d", &n_burg, &n_pizz, &n_sand, &n_cold);

    bill = n_burg*burger + n_sand*sandwich + n_pizz*pizza + n_cold*cold_drink;

    printf("Total Bill: %0.2f BDT \n", bill);

    printf("Payment = ");
    scanf("%f", &payment);


    change = payment - bill;
    printf("Return = %.2f BDT\n", change);

    return 0;


}
