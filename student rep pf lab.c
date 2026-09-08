#include <stdio.h>

int main() {
    char name[50];
    printf("Enter your Name: ");
    fgets(name, 50, stdin);
    char RollNo [20];
    printf("Enter your Roll Number: ");
    fgets(RollNo, 20, stdin);
    float engmarks;
    printf("Enter your english marks: ");
    scanf("%f", &engmarks);
    float mathmarks;
    printf("Enter your math marks: ");
    scanf("%f", &mathmarks);
    float phymarks;
    printf("Enter your physics marks: ");
    scanf("%f", &phymarks);

   /* final report*/
   printf("Final Report\n ");
    printf("Name: ");
    puts(name);
    printf("Roll Number: ");
    puts(RollNo);
    printf("English:%f\n ", engmarks);
    printf("Math:%f\n ", mathmarks);
    printf("Physics:%f\n ", phymarks);
    printf("Grand Total (out of 150): %f\n ", engmarks + mathmarks + phymarks);
    printf("Percentage: %f\n ", ((engmarks+mathmarks+phymarks)/150)*100);
    return 0;
}
