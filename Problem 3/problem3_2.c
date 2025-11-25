#include <stdio.h>
#include <math.h>

int main(){
	long int n;
	int k;

	n = 600851475143; 
	k = sqrt(n);

	for(int i=2; i <= k; i++){
		if(n%i == 0){
			if(n == i){
				printf("result: %ld\n", n);
			}
			n = n/i;
		}
	}
	
	return 0;
}
