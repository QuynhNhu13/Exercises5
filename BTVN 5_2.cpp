#include<stdio.h>


int main(){
	
	long long isbn;
	printf ("ISBN Validator ============== ");
	printf ("ISBN (0 to quit): ");
	scanf ("%lld", &isbn);
	
	while (isbn!=0){
		int multiplier=10;
		int sum = 0; 
		if (isbn>0){
			while (isbn>0){
			int digit = isbn%10;
			sum +=digit*multiplier;
			multiplier--;
			isbn/=10;
			}
			if(sum%11==0){	
			printf ("This is a valid ISBN. ");
			} else {
			printf ("This is not a valid ISBN. ");
			}
		} else {
			printf ("This is not a valid ISBN. ");
		}
		printf ("ISBN (0 to quit): ");
		scanf ("%lld", &isbn);
	}
	
	printf ("Have a Nice Day!");
	
	return 0;
}


