#include <stdio.h>

int findMinValue(int n1, int n2, int n3);

int main(void) {
	int n1, n2, n3;
	int minValue;
	
	printf("ù ��° ���� : ");
	scanf("%d", &n1);
	printf("�� ��° ���� : ");
	scanf("%d", &n2);
	printf("�� ��° ���� : ");
	scanf("%d", &n3);

	minValue = findMinValue(n1, n2, n3);

	printf("�ּ� �� : %d \n", minValue);

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
