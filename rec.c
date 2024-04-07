#include <stdio.h>

void rec(int a) {
	printf("in %d\n", a);
	if(a > 0) rec(a - 1);
	printf("out %d\n", a);
}

int main() {
	rec(2);
	return 0;
}
