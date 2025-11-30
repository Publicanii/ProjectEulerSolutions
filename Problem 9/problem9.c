#include <stdio.h>
#include <math.h>

#define NUM 1000

int main(){
	int ctrl = 1;
	for (int i = 1; i <= NUM; i++){
		for(int j = 1; j <= NUM; j++){
			if(sqrt(i*i+j*j)+i+j == NUM)
			{
				printf("abc: %d\n", i * j * (int) sqrt(i*i+j*j));
				ctrl = 0;
				break;
			}
		}
		if(!ctrl){
			break;
		}
	}
	
	return 0;
}
