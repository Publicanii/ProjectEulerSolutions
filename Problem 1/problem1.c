#include <stdio.h>

int main() {
    int anw;
	int lst;
 	int n;

	n = 999 / 3;
    lst = 999 - 999%3;
	anw = (n/2.0)*(3+lst);

	n = 999 / 5;
    lst = 999 - 999%5;
	anw += (n/2.0)*(5+lst);

	n = 999 / 15;
    lst = 999 - 999%15;
	anw -= (n/2.0)*(15+lst);

    printf("The anw is: %d\n", anw);
    return 0;
}
