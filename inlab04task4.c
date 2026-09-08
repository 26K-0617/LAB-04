#include <stdio.h>
int main(){
  
    //leap year checker task 4
    //leap agar div by 4 and not 100 OR div by 400
	int yr;
	printf("Enter a year: ");
	scanf("%d",&yr);

    
    if (yr%4==0 && yr%100!=0 || yr%400==0) {
        printf("%d is a leap year"); 
    } 
    else{
        printf("%d is not a leap year");
    }
    

    return 0;
}
