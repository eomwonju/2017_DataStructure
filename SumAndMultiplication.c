#include <stdio.h>

void sumAndMultiplication(int a[2]);

int main(void){
	int a[2], n1, n2;

	printf("첫 번째 정수 : ");
	scanf("%d", &n1);
	printf("두 번째 정수 : ");
	scanf("%d", &n2);

	a[0] = n1, a[1] = n2;

	sumAndMultiplication(a);

	return 0;
}

void sumAndMultiplication(int a[2]){
	int i, temp = 0, b[2] = {0, 1};

	if(a[0]>a[1]){
		temp = a[0];
		a[0] = a[1];
		a[1] = temp;
	}

	if(a[1]-a[0]<2){
		printf("ERROR");
	}

	else{
		for(i=a[0]+1; i<a[1]; i++){
			b[0] = b[0]+i;
			b[1] = b[1]*i;
		}
		printf("%d와 %d 사이에 존재하는 수의 합 : %d\n", a[0], a[1], b[0]);
		printf("%d와 %d 사이에 존재하는 수의 곱 : %d\n", a[0], a[1], b[1]);
	}
}