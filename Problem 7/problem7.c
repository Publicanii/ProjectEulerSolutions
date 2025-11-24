#include <stdio.h>
#include <math.h>

int is_prime(int number);

int main(){

	int i = 1;
	int j = 0;

	while(j<10001){
		i+=1;
		if (is_prime(i)){
			j += 1;
		}
	}
	printf("answer: %d\n",i);
	return 0;
}

int is_prime(int number){
	int high = sqrt(number);
	for (int i = 2; i <= high; i++){
		if(!(number % i)){
		 	return 0;
		 }
	}
	return 1;
}
