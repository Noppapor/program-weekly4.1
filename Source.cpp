#include<stdio.h>
int main() {
	int a, b, c,min, mid;
	scanf_s("%d %d %d", &a, &b, &c);
	min = a;
	if (min >= b && c >= b) min = b;
	if (min >= c && b >= c) min = c;
	if (min == a) {
		if (b >= c) mid = c;
		else mid = b;
	}
	if (min == b) {
		if (a >= c) mid = c;
		else mid = a;
	}
	if (min == c) {
		if (a >= b) mid = b;
		else mid = a;
	}
	printf("%d", min + mid);


}
