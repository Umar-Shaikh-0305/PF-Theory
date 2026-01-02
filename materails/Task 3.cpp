#include<stdio.h>

int main(){
  int age;
  char eyesight, writtentest, drivingtest, medicalcertificate;
  
  printf("Enter your age: ");
  scanf("%d", &age);   
  
  if(age<18){
  	   printf("not eligible\n");
  	   return 0;
   }
 
     printf("Did you pass eyesight exam? (p/f):\n");
     scanf(" %c",&eyesight);
     if(eyesight == 'f'){
     	printf("need prescription");
	 }
	 
   printf("Did you pass written exam? (p/f):\n" );
     scanf(" %c",&writtentest);
     if(writtentest == 'f'){
     	printf("retake the test");
	 }
	 
	 printf("Did you pass driving exam? (p/f):\n" );
     scanf(" %c",&drivingtest);
     if(drivingtest == 'f'){
     	printf("Not eligible");
     	return 0;
	 }
	  
	if (age > 60) {
        printf("Do you have a medical fitness certificate? (Y/N): \n");
        scanf(" %c", &medicalcertificate);
 
        if (medicalcertificate == 'Y' ) {
            printf("Eligible for License\n");
        } else {
            printf("Not Eligible due to medical certificate\n");
        }
    } else {
        printf("Eligible for License\n");
    }
       return 0;   
}

