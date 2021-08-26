

//93p

/*
#include <stdio.h>
#define EXCHANGE_RATE 1120

//기호상수를 만드는 법은 #define과 const가 존재한다.

int main(void) {


	const int exchange_rate = 1120;

	int usd;
	int krw;

	printf("달러화 금액을 입력하시오: ");
	scanf_s("%d", &usd);

	krw = usd * exchange_rate;
	int krw2 = usd * EXCHANGE_RATE;

	printf("달러화 %d달러는 %d원입니다.\n", usd, krw);

	printf("달러화 %d달러는 %d원입니다.\n", usd, krw2);

	return 0;
}*/






//94p


/*#include <stdio.h>

int main(void) {

	long long money;
	long long saving;
	int year=30;

	printf("매달 저축 금액을 입력하시오 :");
	scanf_s("%lld", &money);

	saving = money * 30 * 12;

	printf("30년 뒤의 재산 = %lld\n", saving);

	return 0;
}*/






//96p

/*#include <stdio.h>

int main(void) {

	int a = 100;
	int b = 200;

	int tmp;

	tmp = a;
	a = b;
	b = tmp;

	printf("a = %d, b = %d\n", a, b);

	return 0;
}*/







//103p

/*#include <stdio.h>

int main(void) {


	double distance = 149600000;
	double  speed = 300000;

	double sec = distance / speed;

	double min = sec / 60;

	printf("빛의 속도는 %.2lfkm/s\n",speed);                //.2는 소수점아래 두번째자리까지만 출력
	printf("태양과 지구와의 거리 %.2lfkm\n", distance);
	printf("도달 시간은 %.2lf분\n", min);

	return 0;
}*/







//105p

/*#include <stdio.h>

int main(void) {

	double c;
	double f;

	printf("화씨온도 = ");
	scanf_s("%lf", &f);

	c = (f - 32) * 5 / 9;
	printf("섭씨온도 = %.10lf\n", c);

	return 0;
}*/








//107p

/*#include <stdio.h>

int main(void) {

	double radius;

	printf("원의 반지름을 입력하시오 : ");
	scanf_s("%lf", &radius);

	printf("원의 면적 : %lf\n", radius * radius * 3.14);

	return 0;

}*/







//114p


/*#include <stdio.h>

int main(void) {


	int id, passwd;

	printf("아이디와 패스워드를 4개의 숫자로 입력하세요: ");
	printf("id: ____ \b\b\b\b");
	scanf_s("%d", &id);
	printf("password: ____\b\b\b\b");
	scanf_s("%d", &passwd);

	printf("입력하신 아이디는 \"%d\"이고 비번은 \"%d\"입니다,\n",id,passwd);

	return 0;
}*/








//117p-1

/*#include <stdio.h>
int main(void) {

	double input_num;

	printf("실수를 입력하시오 : ");
	scanf_s("%lf", &input_num);

	printf("지수 형식으로는 %e입니다.\n",input_num);

	return 0;

}*/









//117p-2

/*#include <stdio.h>

int main(void) {


	char a;

	printf("문자를 입력하시오: ");
	scanf_s("%c", &a);
	printf("아스키 코드 : %d\n", a);

	return 0;
}*/








//117p-3

/*#include <stdio.h>
int main(void) {

	double x;

	printf("x의 값을 입력하시오 : ");
	scanf_s("%lf", &x);

	printf("다항식의 값은 %lf입니다.\n", 3 * x * x * x - 7 * x * x + 9);

	return 0;
}*/









//117p-4

/*#include <stdio.h>

int main(void) {

	float m;

	printf("면적을 제곱미터 단위로 입력하시오: ");
	scanf_s("%f", &m);


	printf("%f제곱미터는 %.2f평입니다.\n", m, m / 3.3058);

	return 0;

}*/







//118p-1

/*#include <stdio.h>

int main(void) {

	printf("char형의 크기는 %d바이트입니다.\n", sizeof(char));
	printf("short형의 크기는 %d바이트입니다.\n", sizeof(short));
	printf("int형의 크기는 %d바이트입니다.\n", sizeof(int));
	printf("long형의 크기는 %d바이트입니다.\n", sizeof(long));
	printf("long long형의 크기는 %d바이트입니다.\n", sizeof(long long));
	printf("float형의 크기는 %d바이트입니다.\n", sizeof(float));
	printf("double형의 크기는 %d바이트입니다.\n", sizeof(double));
	printf("long double형의 크기는 %d바이트입니다.\n", sizeof(long double));

	return 0;
}*/
