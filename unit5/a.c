
//167p
/*#include <stdio.h>

int main(void) {

	int temperature;

	printf("온도를 입력하시오 : ");
	scanf_s("%d", &temperature);

	if (temperature > 0) {
		printf("영상의 날씨입니다.\n");

	}
	else if (temperature == 0) {
		printf("0도입니다.\n");
	}
	
	else {
		printf("영하의 날씨입니다.\n");
	}

	return 0;

}*/









//168p
/*#include <stdio.h>

int main(void) {

	int num;

	printf("정수를 입력하시오 : ");
	scanf_s("%d", &num);

	if (num % 2 == 0) {
		printf("%d는 짝수입니다.\n", num);


	}

	else {
		printf("%d는 홀수입니다.\n",num);
	}

	return 0;
}*/







//169p
/*#include <stdio.h>

int main(void) {


	int score;

	printf("점수를 입력하시오: ");
	scanf_s("%d", &score);


	if (score >= 60) {
		printf("합격입니다.\n");
		printf("장학금 또한 받을 수 있습니다.\n");
	}
	
	else {
		printf("불합격입니다.\n");
	}

	return 0;
}*/









//171p
/*#include <stdio.h>

int main(void) {

	int x, y;

	printf("정수 2개를 입력하시오: ");
	scanf_s("%d%d", &x, &y);

	printf("큰 수 : %d , 작은 수 : %d\n", x > y ? x : y, x > y ? y : x);

	return 0;
}*/









//175p
/*#include <stdio.h>

int main(void) {


	int num;

	printf("정수를 입력하시오: ");
	scanf_s("%d", &num);

	if (num >= 0 && num <= 100) {
		printf("%d는 0과 100사이에 존재합니다.\n",num);
	}
	else {
		printf("%d는 0과 100사이에 존재하지않습니다.\n",num);
	}

	return 0;
}
*/









//조건자리에 피연사자 있을 경우 0을 제외한 모든 정수는 참이다.
 
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

	printf("연도를 입력하시오: ");
	scanf_s("%d", &year);

	if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0) {

		printf("%d는 윤년입니다.\n", year);
	}
	else {
		printf("%d는 윤년이 아닙니다.\n", year);
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
		printf("앞면입니다.\n");
	}
	else {
		printf("뒷면입니다.\n");
	}

} */










//184p
/*#include <stdio.h>

int main(void) {


	int score;
	char grade;

	printf("성적을 입력하시오: ");
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

	printf("학점 %c\n", grade);

	return 0;
}*/










/*//185p
#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>

int main(void) {


	int a, b;
	char op;


	printf("수식을 입력하시오 : ");
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

		printf("지원하지않는 연산자입니다.\n");
	}
	return 0;
}*/









//187p
/*#include <stdio.h>

int main(void) {

	int a, b, c;

	printf("3개의 정수를 입력하시오: ");
	scanf_s("%d%d%d", &a, &b, &c);

	if (a > b && a > c) {
		printf("가장 큰 수는 %d입니다.\n", a);
	}

	else if (b > a && b > c) {
		printf("가장 큰 수는 %d입니다.\n", b);
	}
	else {
		printf("가장 큰 수는 %d입니다.\n", c);

	}


	return 0;
}*/










//194p

/*#include <stdio.h>

int main(void) {

	int month, days;

	printf("일수를 알고 싶은 달을 입력하시오 : ");
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

	printf("%d월의 일수는 %d일입니다.\n", month, days);

	double em;
	scanf_s("%lf", &em);
	printf("%lf", em / 100);
	return 0;
}
*/



#include <stdio.h>

int main(void)
{
	printf("동전 던지기 게임을 시작합니다.\n");

	int coin = rand() % 2;
	printf("%d", coin);
	if (coin == 0) {
		printf("앞면입니다.\n");
	}
	else {
		printf("뒷면입니다.\n");
	}

	return 0;
}