//124p

/*#include <stdio.h>

int main(void) {


	int x, y;

	printf("두 개의 정수를입력하시오:");
	scanf_s("%d%d", &x, &y);


	int result;

	result = x + y;

	printf("%d+%d = %d\n", x, y, result);


	result = x - y;

	printf("%d-%d = %d\n", x, y, result);

	result = x * y;

	printf("%d*%d = %d\n", x, y, result);

	result = x / y;

	printf("%d/%d = %d\n", x, y, result);


	result = x % y;

	printf("%d%%%d = %d\n", x, y, result);

	return 0;
}*/












//126p

/*#include <stdio.h>

int main(void) {


	float x, y;

	printf("두 개의 정수를입력하시오:");
	scanf_s("%f%f", &x, &y);


	float result;

	result = x + y;

	printf("%f+%f = %f\n", x, y, result);


	result = x - y;

	printf("%f-%f = %f\n", x, y, result);

	result = x * y;

	printf("%f*%f = %f\n", x, y, result);

	result = x / y;

	printf("%f/%f = %f\n", x, y, result);



	return 0;
}

*/





//127P


/*#include <stdio.h>

int main(void) {

	int time = 1000;

	int min = time / 60;

	int sec = time % 60;

	printf("1000초는 %d분 %d초입니다\n", min, sec);


	return 0;
}*/




//129p

/*#include <stdio.h>

int main(void) {


	int x = 1;
	int y = 1;


	y = ++x;

	printf("x = %d, y = %d\n",x,y);   //22

	y = x++;
	printf("x = %d, y = %d\n", x, y);  //32

	return 0;
}*/








//131p


/*#include <stdio.h>


int main(void) {


	int candy;
	int price;
	int money;


	printf("현재 가지고 있는 돈 : ");
	scanf_s("%d", &money);

	printf("캔디의 가격 : ");
	scanf_s("%d", &price);

	candy = money / price;

	printf("최대로 살 수 있는 캔디의 갯수 : %d\n", candy);


	printf("캔디 구입 후 남은 돈 : %d\n", money % price);

	return 0;

}*/








//132p
/*#include <stdio.h>


int main(void) {


	int input_moeny;
	int price;
	int return_money;


	printf("투입한 돈 : ");
	scanf_s("%d", &input_moeny);

	printf("물건값 : ");
	scanf_s("%d", &price);

	return_money = input_moeny - price;

	printf("거스름돈 : %d\n\n",return_money);

	printf("100원 짜리 : %d\n10원짜리 : %d\n1원짜리 : %d\n", return_money / 100, (return_money % 100) / 10, (return_money % 100) % 10);

	return 0;

}*/






//134p

/*#include <stdio.h>
int main(void) {

	int x = 10, y = 10;

	printf("x = %d, y = %d\n", x, y);

	x += 1;

	printf("(x+=1)이후 x = %d\n", x);
	y *= 2;
	printf("(y*=2)이후 y = %d\n", y);

	return 0;
}*/







//138p


/*#include <stdio.h>

int main(void) {


	int x, y;


	printf("두 개의 정수를 입력하시오 :");
	scanf_s("%d%d", &x, &y);

	printf("%d == %d 의 결괏값 : %d\n",x, y, x == y);

	printf("%d != %d 의 결괏값 : %d\n",x, y, x != y);

	printf("%d > %d 의 결괏값 : %d\n",x, y, x > y);

	printf("%d < %d 의 결괏값 : %d\n",x, y, x < y);

	printf("%d >= %d 의 결괏값 : %d\n",x, y, x >= y);

	printf("%d <= %d 의 결괏값 : %d\n",x, y, x <= y);


	return 0;
}*/








//140p
/*#include <stdio.h>

int main(void) {

	int x = 9, y = 10;

	printf("%08X & %08X = %08X\n", x, y, x & y);
	printf("%08X | %08X = %08X\n", x, y, x | y);
	printf("%08X ^ %08X = %08X\n", x, y, x ^ y);
	printf("~%08X = %08X\n", x, ~x);

	return 0;
}*/







//142p

/*#include <stdio.h>

int main(void) {

	int x = 9;

	printf("%d<<1 = %d\n", x, x << 1);
	printf("%d>>1 = %d\n", x, x >> 1);

	return 0;
}*/







//146p

/*#include <stdio.h>

int main(void) {

	int a = 10;
	int b = 20;
	int c = 30;
	int d = 3;
	int result;


	result = a + b * c / d; //210;

	printf("result = %d\n", result);

	result = (a + b) * c / d; // 300;

	printf("result = %d\n", result);

	result = a = b = 1;

	printf("result = %d\n", result);

	return 0;
}*/











//149p
/*#include <stdio.h>

int main(void) {


	int i;
	double f;

	f = 5 / 4;
	printf("(5/4) = %f\n", f);  //1

	f = (double)5 / 4;
	printf("(double)5/4 = %f\n", f);  //1.xxx

	i = 1.3 + 1.8;
	printf("1.3+1.8 = %d\n", i); //3

	i = (int)1.3 + (int)1.8;

	printf("(int)1.3 + (int)1.8 = %d\n", i);  //2

	return 0;
}*/








//151p
/*#include <stdio.h>
int main(void) {

	int x = 2;

	double y = 3.0 * x * x + 7.0 * x + 9;

	printf("y = 3.0 * x * x + 7.0 * x + 9 = %lf\n", y);

	return 0;
}*/







//152p

/*#include <stdio.h>
#include <math.h>

int main(void) {

	double money = 24;
	double saving;

	saving = (money * pow((1.0 + 0.06), 382));

	printf("382년 후의 원리금 = %lf\n", saving);

	return 0;
}*/








//157p-1
/*#include <stdio.h>

int main(void) {

	int x, y;

	printf("첫번째 정수를 입력하시오:");
	scanf_s("%d", &x);
	printf("두번째 정수를 입력하시오:");
	scanf_s("%d", &y);

	printf("몫은 %d이고 나머지는 %d입니다.\n", x / y, x % y);

	return 0;
}


*/








//157p_2
/*#include <stdio.h>
int main(void) {

	int x;

	printf("첫 번째 정수를 입력하시오:");
	scanf_s("%d", &x);

	printf("세 제곱의 값은 %d*%d*%d = %d\n", x, x, x, x * x * x);

	return 0;
}*/








//157_3;
/*#include <stdio.h>
int main(void) {

	int x, y, z;

	printf("정수 3개를 입력하시오 :  ");
	scanf_s("%d%d%d", &x, &y, &z);

	printf("%d*%d-%d = %d\n", x, y, z, x * y - z);


}*/







//158_4

/*#include <stdio.h>

int main(void) {

	int x;

	printf("정수를 입력하시오 : ");
	scanf_s("%d", &x);

	printf("백의 자리 수 : %d\n십의 자리 수 : %d\n일의 자리 수 : %d\n", x / 100, (x % 100) / 10, x % 100 % 10);

	return 0;
}*/








//158p_5
/*#include <stdio.h>

int main(void) {

	double x;

	printf("실수를 입력하시오:");
	scanf_s("%lf", &x);

	double result = (x * x * x - 20) / (x - 7);

	printf("수식의 값은 %.5lf입니다.\n", result);

	return 0;
}*/







//158p_6

/*#include <stdio.h>

int main(void) {

	double x, y;

	printf("2개의 실수를 입력하시오 : ");
	scanf_s("%lf%lf", &x, &y);

	printf("정수부의 합 = %d\n", (int)x + (int)y);

	return 0;
}*/








//159_7

#include <stdio.h>
#include <math.h>

int main(void) {

	int x1, x2;
	int y1, y2;

	printf("첫번째 점(x1,y1): ");
	scanf_s("%d%d", &x1, &y1);


	printf("두번째 점(x2,y2): ");
	scanf_s("%d%d", &x2, &y2);

	double distance = sqrt(pow((x1 - x2), 2) + pow((y1 - y2), 2));

	printf("Distance = %.5lf\n", distance);

	return 0;
}