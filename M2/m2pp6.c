#include<stdio.h>
int main()
{   
    int choice, fare, adult, child;
    printf("Padma Express Bullet Train \n");
    printf("1. Ishwardi \n");
    printf("2. Ullapara \n");
    printf("3. Tangail\n");
    printf("4. Jaydebpur\n");
    printf("5. Dhaka \n");
    printf("    Enter Your Destination(1-5_): ");
    scanf("%d", &choice);
    printf("How many adult: ");
    scanf("%d", &adult);
    printf("\nHow many child: ");
    scanf("%d", &child);
    switch (choice)
    {
        case 1: 
        {
            fare = adult*150*1 + child*75*1;
            printf("**** Your Ticket ****\n");
            printf("Starting Station: Rajshahi\n");
            printf("Destination Station: Ishwardi\n");
            printf("Total Fare: %d", fare);
            break;
        }
        case 2: 
        {
            fare = adult*150*2 + child*75*2;
            printf("**** Your Ticket ****\n");
            printf("Starting Station: Rajshahi\n");
            printf("Destination Station: Ullapara\n");
            printf("Total Fare: %d", fare);
            break;
        }
        case 3: 
        {
            fare = adult*150*3 + child*75*3;
            printf("**** Your Ticket ****\n");
            printf("Starting Station: Rajshahi\n");
            printf("Destination Station: Tangail\n");
            printf("Total Fare: %d", fare);
            break;
        }
        case 4: 
        {
            fare = adult*150*4 + child*75*4;
            printf("**** Your Ticket ****\n");
            printf("Starting Station: Rajshahi\n");
            printf("Destination Station: Jaydebpur\n");
            printf("Total Fare: %d", fare);
            break;
        }
        case 5: 
        {
            fare = adult*150*5 + child*75*5;
            printf("**** Your Ticket ****\n");
            printf("Starting Station: Rajshahi\n");
            printf("Destination Station: Dhaka\n");
            printf("Total Fare: %d \n", fare);
            break;
        }
    }

}