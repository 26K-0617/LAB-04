#include<stdio.h>

//LAB4 INLAB:task 2; largest of 3 numbers

int main(){
	int num1,num2,num3;
	printf("Enter three integers: ");
	scanf("%d %d %d",&num1,&num2,&num3);

    if(num1>num2 && num1>num3) {
		printf("%d is the greatest\n", num1);
	}
	else if (num2>num3) {
		printf("%d is the greatest\n", num2);
	}
    else {
        printf("%d is the greatest\n",num3);
    }
	return 0;
}
