#include <stdio.h>

void sumAndMultiplication(int a[2]);

int main(void){
	int a[2], n1, n2;

	printf("ù ��° ���� : ");
	scanf("%d", &n1);
	printf("�� ��° ���� : ");
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
		printf("%d�� %d ���̿� �����ϴ� ���� �� : %d\n", a[0], a[1], b[0]);
		printf("%d�� %d ���̿� �����ϴ� ���� �� : %d\n", a[0], a[1], b[1]);
	}
}