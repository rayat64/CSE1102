#include<stdio.h>
int ax[16][5]; //declaring Global array
int menu()
{
    int option;
    printf("<----Menu---->\n");
    printf("    1. Book a Seat \n");
    printf("    2. Cancel a Seat \n");
    printf("    3. Display Seats \n");
    printf("    4. Exit \n");
    printf("    Enter your option(1-4): ");
    scanf("%d", &option);
    return option;
}
void Display(){
    printf("Inside Display\n");
    int i, j, s, count=0;
    for(i=0; i<16; i++)
    {
        for(j=0; j<5; j++)
        {
            s=i*5+j+1;
            if(ax[i][j]==0)
            {
                count++;
                printf("%3d", s);
            }
            else{
                printf("  X");
            }
            if(j==2)printf(" ");
        } //End of j loop
        printf("\n");

    } //End of i loop
    printf("total seats: 80\n");
    printf("Total unbooked seats: %d\n", count);
    printf("Total booked seats: %d\n", 80-count);

}
void SeatBook(){
    int i, j, x;
    printf("Enter Number of Seat: ");
    scanf("%d", &x);
    i = (x-1)/5;
    j=(x-1)%5;
    if(ax[i][j]==0){
        ax[i][j]=1;
        printf("Your Booking is Successful");
    }
    else
        printf("Sorry The seat is Booked");

}
void CancelBook(){
    int i, j, x;
    printf("Enter Number of Seat: ");
    scanf("%d", &x);
    i = (x-1)/5;
    j=(x-1)%5;
    if(ax[i][j]==1){
        ax[i][j]=0;
        printf("Your Cancel Booking is Successful");
    }
    else
        printf("Your seat has not been booked yet");

}


int main(){
    int op, i, j;
    for(i=0; i<16; i++)
    {
        for(j=0; j<5; j++)
        {
            ax[i][j]=0;
        }
    }
    while(1){
    op=menu();
    if(op==4){printf("End of Program \n");break;}
    printf("\nop=%d\n", op);

    switch(op)
    {
        case 1:
        {
            Display();SeatBook();
            break;
        }
        case 2:
        {
            Display();CancelBook();
            break;
        }
        case 3:
        {
            Display();
            break;
        }
    }//End of Switch
} //End of Infinty Loop of Menu

}