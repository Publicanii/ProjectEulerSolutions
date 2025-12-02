#include <stdio.h>

int collatz(int n);

int main(){
	int lc_num = 0; // Longest chain number
	int lc_count = 0; // Longest chain value

	for(int i = 0; i < 1000000; i++){ // Try every number up to 1 million.
		
		int count = 0; // local counter
		int num = i; // localate i for not to affect main counter.
		
		while(num > 1){ // run until num reaches the value 1
			num = collatz(num); // find next chain of collatz.
			count++;
		}

		if (count > lc_count){ // If longer chain has founded, then set as longest.
			lc_count = count;
			lc_num = i;
		}
	}
	printf("Number that has longest chain: %d\n", lc_num);
	return 0;
}

int collatz(int n){
	if (n%2){
		return 3*n+1;
	}
	return n/2;
}
