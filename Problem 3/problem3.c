#include <stdio.h>
#include <math.h>


int is_prime(int number){
	int high = sqrt(number);
	for (int i = 2; i <= high; i++){
		if(!(number % i)){
			return 0;
		}
	}
	return 1;
}


int main(){
	long int n;
	int k;
	int v;

	n = 600851475143; 
	k = sqrt(n);

	for(int i=2; i <= k; i++){
		if(n%i == 0){
			if(is_prime(i)){
				v = i;
			}
		}
	}
	printf("answer: %d", v);
	
	return 0;
}
