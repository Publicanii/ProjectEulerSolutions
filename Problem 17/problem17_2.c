#include <stdio.h>

int ones(int n);
int tens(int n);
int count_letters(int n);

int main(){
	int count = 0;
	for(int i = 1; i < 1000; i++){
		count += count_letters(i);
	}

	printf("sum of letter counts 1-1000: %d\n", count + 11); // one thousand

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
	// d3 hundred and {11-19} : 317
	// d3 hundred : 500
	// d2-d1 : 38
	// d2 : 60
	// {11-19} : 17
	// d1 : 5
	
	// printf("P0\n"); // log for testing
	if(d3){
		count += ones(d3/100) + 7; // {number} hundred
		if(d2+d1){
			count += 3; // add "and"
		}
	}
	// printf("P1\n"); // log for testing
	if(d2){
		if(d2 + d1 > 10 && d2 + d1 < 20){
			count += tens(d2+d1);
		}
		else{
			count += tens(d2); // {number}	
		}
	}
	
	// printf("P2\n"); // log for testing
	if(d1){
		if(d2 + d1 < 10 || d2 + d1 > 20){
			count += ones(d1); // {number}		
		}
	}
	// printf("P3\n"); // log for testing

	return count;
}

int ones(int n){
	switch(n){
		case 1: return 3; break;
		case 2: return 3; break;
		case 3: return 5; break;
		case 4: return 4; break;
		case 5: return 4; break;
		case 6: return 3; break;
		case 7: return 5; break;
		case 8: return 5; break;
		case 9: return 4; break;
	}
}

int tens(int n){
	switch(n){
		case 11: return 6; break;
		case 12: return 6; break;
		case 13: return 8; break;
		case 14: return 8; break;
		case 15: return 7; break;
		case 16: return 7; break;
		case 17: return 9; break;
		case 18: return 8; break;
		case 19: return 8; break;
	}
	
	switch(n){
		case 10: return 3; break;
		case 20: return 6; break;
		case 30: return 6; break;
		case 40: return 5; break;
		case 50: return 5; break;
		case 60: return 5; break;
		case 70: return 7; break;
		case 80: return 6; break;
		case 90: return 6; break;
	}
}
