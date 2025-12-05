#include <stdio.h>
#define NUM 75, 95, 64, 17, 47, 82, 18, 35, 87, 10, 20, 04, 82, 47, 65, 19, 01, 23, 75, 03, 34, 88, 02, 77, 73, 07, 63, 67, 99, 65, 04, 28, 06, 16, 70, 92, 41, 41, 26, 56, 83, 40, 80, 70, 33, 41, 48, 72, 33, 47, 32, 37, 16, 94, 29, 53, 71, 44, 65, 25, 43, 91, 52, 97, 51, 14, 70, 11, 33, 28, 77, 73, 17, 78, 39, 68, 17, 57, 91, 71, 52, 38, 17, 14, 91, 43, 58, 50, 27, 29, 48, 63, 66, 04, 68, 89, 53, 67, 30, 73, 16, 69, 87, 40, 31, 04, 62, 98, 27, 23, 9, 70, 98, 73, 93, 38, 53, 60, 04, 23


int num[] = {NUM};
int nums[15][15];
int main(){

	int count = 1;
	int last = 0;

	// Convert numbers array into triangle

	for(int i = 0; i < 15; i++){
		for(int j = 0; j < count; j++){
			nums[i][j] = num[last + j];
			// Debug
			// printf("nums[%d][%d] %d ",i, j ,nums[i][j]);
		}
		
		
		last = count + last;
		count++;
		// printf("\n");
	}

	for(int k = 13; k >= 0; k--){
		for(int i = k; i >= 0; i--){
			if(nums[k+1][i] < nums[k+1][i+1]){
				nums[k][i] += nums[k+1][i+1];
			}
			else{
				nums[k][i] += nums[k+1][i];
			}
		}
	}
	
	printf("%d", nums[0][0]);
	return 0;
}
