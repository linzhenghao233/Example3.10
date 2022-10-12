/* escape.c -- 使用转移序列 */
#include <stdio.h>
int main(void) {
	float salary;

	printf("\aEnter your desired monthly salary:");	//\a是警报。
	printf(" $_______\b\b\b\b\b\b\b");	//\b是退格。
	scanf("%f", &salary);
	printf("\n\t$%.2f a month is $%.2f a year.", salary, salary * 12.0);
	printf("\rGee!\n");	//\r是回车，使光标回到当前行起始处。

	return 0;
}

//运行结果：
//Enter your desired monthly salary : $4000.00
//
//Gee!$4000.00 a month is $48000.00 a year.
//