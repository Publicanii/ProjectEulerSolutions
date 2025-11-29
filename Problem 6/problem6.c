#include <stdio.h>

int main(){

	int s1 = 0;
	int s2 = 0;

	for(int i = 1; i < 101; i++ ){
		s1 += i*i;
	}

	s2 = (100*101)/2;
	s2 = s2*s2;

	printf("Difference: %d\n", s2-s1);
	
	return 0;
}
