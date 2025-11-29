#include <stdio.h>

int main(){
	int a = 1;
	int b = 1;
	int c = 0;
	int total = 1;

	while(a<=4000000){
		if(a % 2){
			total += a;
		}
		 c = a;
		 a = b + a;
		 b = c;
	}
	printf("sonuc: %d\n", total);		
	return 0;
}
