
//167p
/*#include <stdio.h>

int main(void) {

	int temperature;

	printf("�µ��� �Է��Ͻÿ� : ");
	scanf_s("%d", &temperature);

	if (temperature > 0) {
		printf("������ �����Դϴ�.\n");

	}
	else if (temperature == 0) {
		printf("0���Դϴ�.\n");
	}
	
	else {
		printf("������ �����Դϴ�.\n");
	}

	return 0;

}*/









//168p
/*#include <stdio.h>

int main(void) {

	int num;

	printf("������ �Է��Ͻÿ� : ");
	scanf_s("%d", &num);

	if (num % 2 == 0) {
		printf("%d�� ¦���Դϴ�.\n", num);


	}

	else {
		printf("%d�� Ȧ���Դϴ�.\n",num);
	}

	return 0;
}*/







//169p
/*#include <stdio.h>

int main(void) {


	int score;

	printf("������ �Է��Ͻÿ�: ");
	scanf_s("%d", &score);


	if (score >= 60) {
		printf("�հ��Դϴ�.\n");
		printf("���б� ���� ���� �� �ֽ��ϴ�.\n");
	}
	
	else {
		printf("���հ��Դϴ�.\n");
	}

	return 0;
}*/









//171p
/*#include <stdio.h>

int main(void) {

	int x, y;

	printf("���� 2���� �Է��Ͻÿ�: ");
	scanf_s("%d%d", &x, &y);

	printf("ū �� : %d , ���� �� : %d\n", x > y ? x : y, x > y ? y : x);

	return 0;
}*/









//175p
/*#include <stdio.h>

int main(void) {


	int num;

	printf("������ �Է��Ͻÿ�: ");
	scanf_s("%d", &num);

	if (num >= 0 && num <= 100) {
		printf("%d�� 0�� 100���̿� �����մϴ�.\n",num);
	}
	else {
		printf("%d�� 0�� 100���̿� ���������ʽ��ϴ�.\n",num);
	}

	return 0;
}
*/









//�����ڸ��� �ǿ����� ���� ��� 0�� ������ ��� ������ ���̴�.
 
/*#include <stdio.h>
int main(void) {

	if (100) {
		printf("d");
	}
	else {
		printf("a");
	}
	
	while (12) {
		int a;
		scanf_s("%d", &a);
		if (a == 0) {
			break;
		}
	}
}*/










//178p


/*#include <stdio.h>

int main(void) {

	int year;

	printf("������ �Է��Ͻÿ�: ");
	scanf_s("%d", &year);

	if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0) {

		printf("%d�� �����Դϴ�.\n", year);
	}
	else {
		printf("%d�� ������ �ƴմϴ�.\n", year);
	}

	return 0;
}*/








//180p

/*#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(void) {

	srand(time(NULL));
	int num = rand() % 2;


	if (num == 0) {
		printf("�ո��Դϴ�.\n");
	}
	else {
		printf("�޸��Դϴ�.\n");
	}

} */










//184p
/*#include <stdio.h>

int main(void) {


	int score;
	char grade;

	printf("������ �Է��Ͻÿ�: ");
	scanf_s("%d", &score);


	if (score >= 90) {
		grade = 'A';
	}

	else if (score >= 80) {
		grade = 'B';
	}

	else if (score >= 70) {
		grade = 'C';
	}
	else if (score >= 60) {
		grade = 'D';
	}
	else {
		grade = 'F';
	}

	printf("���� %c\n", grade);

	return 0;
}*/










/*//185p
#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>

int main(void) {


	int a, b;
	char op;


	printf("������ �Է��Ͻÿ� : ");
	scanf("%d%c%d", &a, &op, &b);

	if (op == '+') {
		printf("%d %c %d = %d\n", a, op, b, a + b);
	}
	else if (op == '-') {
		printf("%d %c %d = %d\n", a, op, b, a - b);
	}
	else if (op == '*') {
		printf("%d %c %d = %d\n", a, op, b, a * b);
	}
	else if (op == '/') {
		printf("%d %c %d = %d\n", a, op, b, a / b);
	}

	else {

		printf("���������ʴ� �������Դϴ�.\n");
	}
	return 0;
}*/









//187p
/*#include <stdio.h>

int main(void) {

	int a, b, c;

	printf("3���� ������ �Է��Ͻÿ�: ");
	scanf_s("%d%d%d", &a, &b, &c);

	if (a > b && a > c) {
		printf("���� ū ���� %d�Դϴ�.\n", a);
	}

	else if (b > a && b > c) {
		printf("���� ū ���� %d�Դϴ�.\n", b);
	}
	else {
		printf("���� ū ���� %d�Դϴ�.\n", c);

	}


	return 0;
}*/










//194p

/*#include <stdio.h>

int main(void) {

	int month, days;

	printf("�ϼ��� �˰� ���� ���� �Է��Ͻÿ� : ");
	scanf_s("%d", &month);


	switch (month) {
	case 2:
		days = 28;

		break;
	case 4:
	case 6:
	case 9:
	case 11:
		days = 30;
		break;
	default:
		days = 31;
		break;
	}

	printf("%d���� �ϼ��� %d���Դϴ�.\n", month, days);

	double em;
	scanf_s("%lf", &em);
	printf("%lf", em / 100);
	return 0;
}
*/



#include <stdio.h>

int main(void)
{
	printf("���� ������ ������ �����մϴ�.\n");

	int coin = rand() % 2;
	printf("%d", coin);
	if (coin == 0) {
		printf("�ո��Դϴ�.\n");
	}
	else {
		printf("�޸��Դϴ�.\n");
	}

	return 0;
}