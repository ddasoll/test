#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	double num1;
	double num2;

	printf("�Ǽ��� �Է��Ͻÿ�:");
	scanf("%lf %lf", &num1, &num2);

	printf("%f\t%f\t%f\t%f\n", num1+num2, num1-num2, num1*num2, num1/num2);

	return 0;
}