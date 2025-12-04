#include <stdio.h>

int count_digits_letters(int n);
int count_letters(int n);

int main(){

	int count = 0;
	
	for(int i = 1; i < 1000; i++){
		count += count_letters(i);
	}

	printf("sum of letter counts 1-1000: %d\n", count + 11); // add 11 "one thousand"

	// TEST
	/*
	int tests[] = {473, 312, 500, 38, 60, 17, 5};
	int k = (int) sizeof(tests)/sizeof(int);
	printf("Test\n");
	for(int i = 0; i < k; i++){
		printf("%d has written via %d letters\n", tests[i], count_letters(tests[i]));
	}
	*/

	return 0;
}

int count_letters(int n){
	int d1;
	int d2;
	int d3;
	int count = 0;

	d1 = 0;
	d2 = 0;
	d3 = 0;
	
	d1 = n%10; // 1st digti
	d2 = (n-d1)%100; // 2nd digit
	d3 = n - d1 - d2; // 3rd digit

	// All forms 1-1000 : Test value
	// d3 hundred and d2-d1 : 473
	// d3 hundred and {11-19} : 312
	// d3 hundred : 500
	// d2-d1 : 38
	// d2 : 60
	// {11-19} : 17
	// d1 : 5
	
	// printf("P0\n"); // log for testing
	if(d3){
		count += count_digits_letters(d3/100) + 7; // {number} hundred
		if(d2+d1){
			count += 3; // add "and"
		}
	}
	// printf("P1\n"); // log for testing
	if(d2){
		if(d2 + d1 > 10 && d2 + d1 < 20){
			count += count_digits_letters(d2+d1);
		}
		else{
			count += count_digits_letters(d2); // {number}	
		}
	}
	
	// printf("P2\n"); // log for testing
	if(d1){
		if(d2 + d1 < 10 || d2 + d1 > 20){
			count += count_digits_letters(d1); // {number}		
		}
	}
	// printf("P3\n"); // log for testing

	return count;
}

int count_digits_letters(int n){
	switch(n){
		// No need for break, return is finishes statement
		// Ones
		case 1: return 3;
		case 2: return 3;
		case 3: return 5;
		case 4: return 4;
		case 5: return 4;
		case 6: return 3;
		case 7: return 5;
		case 8: return 5;
		case 9: return 4;
		// Special
		case 11: return 6;
		case 12: return 6;
		case 13: return 8;
		case 14: return 8;
		case 15: return 7;
		case 16: return 7;
		case 17: return 9;
		case 18: return 8;
		case 19: return 8;
		// Tens
		case 10: return 3;
		case 20: return 6;
		case 30: return 6;
		case 40: return 5;
		case 50: return 5;
		case 60: return 5;
		case 70: return 7;
		case 80: return 6;
		case 90: return 6;
	}
	return 0; // default
}
