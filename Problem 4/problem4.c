#include <stdio.h>
#include <string.h>
int main(){
	char n[12];
	int max = 0;
	
	for(int i = 999; i > 99; i--)
	{
		for(int j = 999; j > 99; j--)
		{
			snprintf(n, sizeof(n), "%d", i*j);
						
			if(strlen(n) == 5) // if i*j 5 digit
			{
				if(n[4] == n[0] && n[3] == n[1])
				{
					if(i*j>max){
						max = i*j;
					}
				}
			}
			else
			{
				if(n[5] == n[0] && n[4] == n[1] && n[3] == n[2])
				{
					if(i*j>max){
						max = i*j;
					}
				}
			}
		}
	}

	printf("result: %d\n", max);
	
	return 0;
}
