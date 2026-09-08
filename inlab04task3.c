int main(){
  //task 3 marks grade
  
	int num;
	printf("Enter marks: ");
	scanf("%d",&num);
  if (num<=100 && num>=0) {
    if (num>=85) {
        printf("Grade: A"); 
    }
    else if (num>=70){
        printf("Grade: B");
    }
    else if (num>=60){
        printf("Grade: C"); 
    }
    else if (num>=50){
        printf("Grade: D");
    } 
    else{
        printf("Grade: F");
    }
    
   } 
     else {
      printf("Error! Please enter integer b/w 0 and 100.");
    }  
    return 0;
}
