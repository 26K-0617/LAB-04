#include <stdio.h>
int main (){
	//task6: days in a month
	//31 days mon group into single case use fallthru case w/o break stacked togeth  similar for 30 days
	//case 2 feb call or refusse leap yr logic to decide bw 28 and 29 days
	//default case to handle invalid no./
	//enter month(1-12); enter year out feb 2024 has 29 days
	int month, yr, days;
	printf("Enter a month(1-12): ");
	scanf("%d", &month);
	printf("Enter a year: ");
	scanf("%d",&yr);

    // number of days using fall-through
    switch (month) {
        case 1: case 3: case 5: case 7: case 8: case 10: case 12:
            days = 31;
            break;

        case 4: case 6: case 9: case 11:
            days = 30;
            break;

        case 2: //leap for feb
            if (yr % 4 == 0 && yr % 100 != 0 || yr % 400 == 0) 
			{
                days = 29;
            } else {
                days = 28;
            }
            break;

        default:
            printf("Invalid month!!!\n");
            return 1;
    }

    switch (month) {
        case 1:  printf("January ");   break;
        case 2:  printf("February ");  break;
        case 3:  printf("March ");     break;
        case 4:  printf("April ");     break;
        case 5:  printf("May ");       break;
        case 6:  printf("June ");      break;
        case 7:  printf("July ");      break;
        case 8:  printf("August ");    break;
        case 9:  printf("September "); break;
        case 10: printf("October ");   break;
        case 11: printf("November ");  break;
        case 12: printf("December ");  break;
    }

    printf("%d has %d days\n", yr, days);

    return 0;
}


