/* escape.c -- ʹ��ת������ */
#include <stdio.h>
int main(void) {
	float salary;

	printf("\aEnter your desired monthly salary:");	//\a�Ǿ�����
	printf(" $_______\b\b\b\b\b\b\b");	//\b���˸�
	scanf("%f", &salary);
	printf("\n\t$%.2f a month is $%.2f a year.", salary, salary * 12.0);
	printf("\rGee!\n");	//\r�ǻس���ʹ���ص���ǰ����ʼ����

	return 0;
}

//���н����
//Enter your desired monthly salary : $4000.00
//
//Gee!$4000.00 a month is $48000.00 a year.
//