#include<stdio.h>
#include<math.h>
int main(){
    int roll[10]={1, 2, 3, 4, 5, 6,7, 8,9, 10}, rolls, counter_25;
    float cgpa[10]={4.0, 3.9, 3.8, 3.9, 2.5, 2.1, 3.3, 2.00, 3.00, 4.0};
    float cgpa_sort[10];
    int roll_sort[10];
    


    //find cgpa using roll
    printf("\nEnter your Roll: ");
    scanf("%d",&rolls );
    for(int i=0; i<10;i++)
    {
        if(roll[i]==rolls)
        {
            printf("\nYour CGPA is: %.2f \n", cgpa[i]);
        }
    }

    //number of students whose cgpa is less than 2.5
    for(int i=0; i<10; i++)
    {
        if(cgpa[i]<2.5)
        {
            ++counter_25;
        }
    }
    printf("\nNumber of students with CGPA < 2.5 is %d \n", counter_25);

    //finding the roll number of students with the highest CGPA
    int max_cg=0;
    int i;
    for(i = 0; i<10; i++)
    {
        if(cgpa[i]>cgpa[max_cg])
        {
            max_cg=i;
        }
    }
    for(i=0; i<10; i++)
    {
        if(cgpa[max_cg]==cgpa[i])
        {
            printf("Roll %d has the highest CGPA %f \n", roll[i], cgpa[max_cg]);
        }
    }
    //top 5 students found by sorting CGPA and Changing assigned roll with 
    //corresponding indices
    int topper, j, k, temp_roll;
    float temp_cg;
    for(k=0; k<10; k++){
        for(j=k+1; j<10; j++){
            if(cgpa[k]<cgpa[j])
            {
                temp_cg = cgpa[j];
                temp_roll = roll[j];
                cgpa[j]=cgpa[k];
                roll[j]=roll[k];
                cgpa[k]=temp_cg;
                roll[k]=temp_roll;

            }

        }
    }
    //The array is now sorted accroing to the cg, the rolls were accordingly changed
    for(i=0; i<5; i++)
    {
            printf("%d. Roll: %d CGPA: %.2f \n", i, roll[i], cgpa[i]);
    }




}   