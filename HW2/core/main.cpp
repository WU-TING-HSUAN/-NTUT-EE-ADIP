#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>

int one_one(), one_two(), one_three(), two_one(), three_one(), five();

int main() {
	int input;
	printf("�d��");
	printf("\n");
	printf("1 : HW2_1_1");
	printf("\n");
	printf("2 : HW2_1_2");
	printf("\n");
	printf("3 : HW2_1_3");
	printf("\n");
	printf("4 : HW2_1");
	printf("\n");
	printf("5 : HW3_1");
	printf("\n");
	printf("6 : HW5(�Ъ`�ND8�ݭn�]�S�O�[�A�ݵ��j��30��)");
	printf("\n");
	printf("�п�J���X:");
	scanf("%d",&input);
	printf("\n");
	if (input == 1) {
		one_one();
	}
	if (input == 2) {
		one_two();
	}
	if (input == 3) {
		one_three();
	}
	if (input == 4) {
		two_one();
	}
	if (input == 5) {
		three_one();
	}
	if (input == 6) {
		five();
	}
}