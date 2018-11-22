#include <stdio.h>

int findMinValue(int n1, int n2, int n3);

int main(void) {
	int n1, n2, n3;
	int minValue;
	
	printf("첫 번째 정수 : ");
	scanf("%d", &n1);
	printf("두 번째 정수 : ");
	scanf("%d", &n2);
	printf("세 번째 정수 : ");
	scanf("%d", &n3);

	minValue = findMinValue(n1, n2, n3);

	printf("최소 값 : %d \n", minValue);

	return 0;
}


int findMinValue(int n1, int n2, int n3) {
	int minValue = 0;

	if (n1 <= n2) {
		if (n1 <= n3) minValue = n1;
		else minValue = n3;
	}

	else {
		if (n2 <= n3) minValue = n2;
		else minValue = n3;
	}

	return minValue;
}
