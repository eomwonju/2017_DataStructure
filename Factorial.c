#include <stdio.h>

int factorial(int n);

int main(void){
	int n, result;

	printf("Á¤¼ö n : ");
	scanf("%d", &n);

	result = factorial(&n);
	printf("%d! = %d\n", n, result);

	return 0;
}

int factorial(int *n){
	int i, result = 1;

	for(i=1; i<=*n; i++){
		result = result * i;
	}

	return result;
}
