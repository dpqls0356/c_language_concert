

//93p

/*
#include <stdio.h>
#define EXCHANGE_RATE 1120

//��ȣ����� ����� ���� #define�� const�� �����Ѵ�.

int main(void) {


	const int exchange_rate = 1120;

	int usd;
	int krw;

	printf("�޷�ȭ �ݾ��� �Է��Ͻÿ�: ");
	scanf_s("%d", &usd);

	krw = usd * exchange_rate;
	int krw2 = usd * EXCHANGE_RATE;

	printf("�޷�ȭ %d�޷��� %d���Դϴ�.\n", usd, krw);

	printf("�޷�ȭ %d�޷��� %d���Դϴ�.\n", usd, krw2);

	return 0;
}*/






//94p


/*#include <stdio.h>

int main(void) {

	long long money;
	long long saving;
	int year=30;

	printf("�Ŵ� ���� �ݾ��� �Է��Ͻÿ� :");
	scanf_s("%lld", &money);

	saving = money * 30 * 12;

	printf("30�� ���� ��� = %lld\n", saving);

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

	printf("���� �ӵ��� %.2lfkm/s\n",speed);                //.2�� �Ҽ����Ʒ� �ι�°�ڸ������� ���
	printf("�¾�� �������� �Ÿ� %.2lfkm\n", distance);
	printf("���� �ð��� %.2lf��\n", min);

	return 0;
}*/







//105p

/*#include <stdio.h>

int main(void) {

	double c;
	double f;

	printf("ȭ���µ� = ");
	scanf_s("%lf", &f);

	c = (f - 32) * 5 / 9;
	printf("�����µ� = %.10lf\n", c);

	return 0;
}*/








//107p

/*#include <stdio.h>

int main(void) {

	double radius;

	printf("���� �������� �Է��Ͻÿ� : ");
	scanf_s("%lf", &radius);

	printf("���� ���� : %lf\n", radius * radius * 3.14);

	return 0;

}*/







//114p


/*#include <stdio.h>

int main(void) {


	int id, passwd;

	printf("���̵�� �н����带 4���� ���ڷ� �Է��ϼ���: ");
	printf("id: ____ \b\b\b\b");
	scanf_s("%d", &id);
	printf("password: ____\b\b\b\b");
	scanf_s("%d", &passwd);

	printf("�Է��Ͻ� ���̵�� \"%d\"�̰� ����� \"%d\"�Դϴ�,\n",id,passwd);

	return 0;
}*/








//117p-1

/*#include <stdio.h>
int main(void) {

	double input_num;

	printf("�Ǽ��� �Է��Ͻÿ� : ");
	scanf_s("%lf", &input_num);

	printf("���� �������δ� %e�Դϴ�.\n",input_num);

	return 0;

}*/









//117p-2

/*#include <stdio.h>

int main(void) {


	char a;

	printf("���ڸ� �Է��Ͻÿ�: ");
	scanf_s("%c", &a);
	printf("�ƽ�Ű �ڵ� : %d\n", a);

	return 0;
}*/








//117p-3

/*#include <stdio.h>
int main(void) {

	double x;

	printf("x�� ���� �Է��Ͻÿ� : ");
	scanf_s("%lf", &x);

	printf("���׽��� ���� %lf�Դϴ�.\n", 3 * x * x * x - 7 * x * x + 9);

	return 0;
}*/









//117p-4

/*#include <stdio.h>

int main(void) {

	float m;

	printf("������ �������� ������ �Է��Ͻÿ�: ");
	scanf_s("%f", &m);


	printf("%f�������ʹ� %.2f���Դϴ�.\n", m, m / 3.3058);

	return 0;

}*/







//118p-1

/*#include <stdio.h>

int main(void) {

	printf("char���� ũ��� %d����Ʈ�Դϴ�.\n", sizeof(char));
	printf("short���� ũ��� %d����Ʈ�Դϴ�.\n", sizeof(short));
	printf("int���� ũ��� %d����Ʈ�Դϴ�.\n", sizeof(int));
	printf("long���� ũ��� %d����Ʈ�Դϴ�.\n", sizeof(long));
	printf("long long���� ũ��� %d����Ʈ�Դϴ�.\n", sizeof(long long));
	printf("float���� ũ��� %d����Ʈ�Դϴ�.\n", sizeof(float));
	printf("double���� ũ��� %d����Ʈ�Դϴ�.\n", sizeof(double));
	printf("long double���� ũ��� %d����Ʈ�Դϴ�.\n", sizeof(long double));

	return 0;
}*/
