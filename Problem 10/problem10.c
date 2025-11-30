#include <stdio.h>
#include <math.h>

#define PRIMES 2000000

int main(){

	int total = 0; // Total starts at 0
	int ctrl = 1; // First control value set to true 

	for(int i = 2; i <= PRIMES; i++){ // Count to PRIMES number 

		int max = sqrt(i); // Set max value to check
		
		for(int j = 2; j < max; j++){
			/* 
			Check if the numbers between 2 to square root of the i is can devide i.
			If so, set control false and break.
			If not, continue checking.
			*/
			if(!(i%j)){
				ctrl = 0;
				break;
			}
		}
		
		if(ctrl){ // If control is true, add to total.
			total += i;
		}
		else{    // If control is false, reset to default value
			ctrl = 1;
		}
	}

	printf("%d", total);

	return 0;
}
