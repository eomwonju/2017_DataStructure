#include <stdio.h>

int exponential(int n);

int main(void){
	int result, n;

	printf("���� n : ");
	scanf("%d", &n);

	result = exponential(&n);

	printf("2�� %d�� : %d \n", n, result);

	return 0;
}

int exponential(int *n){
	int i, result = 1;

	for(i=0; i<*n; i++){
		result = result*2;
	}

	return result;
}