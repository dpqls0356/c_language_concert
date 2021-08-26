


/*#include <stdio.h>

int main(void) {


	for (int i = 0; i < 3; i++) {
		printf("%d ������ %d�����Դϴ�.\n", i, i * 1609);
	}

	return 0;
}*/








/*#include <stdio.h>

int main(void) {


	for (int i = 0; i < 10; i++) {
		printf("�����ð��� ������ �ʰڽ��ϴ�.\n");
	}


	int i = 0;
	while (i < 10) {
		printf("%c ",65+i);
		i++;
	}
	printf("\n");
	return 0;
}*/









/*#include <stdio.h>

int main(void) {

	int i = 0;

	while (i < 10) {
		printf("i = %d\n", i);
		i++;
	}
	printf("\n");

	return 0;
}*/









/*#include <stdio.h>

int main(void) {

	int i = 0;
	while (i<3) {
		printf("%d ������ %d�����Դϴ�.\n", i, i * 1609);
		i++;
	}

	return 0;
}*/








/*#include <stdio.h>

int main(void) {

	int i = 5;
	int factorial = 1;
	while (i >= 1) {

		factorial *= i;
		i--;
	}

	printf("5! = %d\n", factorial);

	return 0;
}*/









/*#include <stdio.h>

int main(void) {

	int num;

	printf("������ �Է��Ͻÿ� : ");
	scanf_s("%d", &num);

	for (int i = 1; i < 10; i++) {
		printf("%d * %d = %d\n", num, i, num * i);
	}

	return 0;
}*/









/*#include <stdio.h>


int main(void) {

	int sum = 0;

	int i = 1;
	while (i <= 1000) {
		sum += i;
		i++;
	}
	printf("sum of 1 to 1000 = %d \n", sum);

	return 0;
}*/









/*#include <stdio.h>

int main(void) {

	int a, b;

	printf("�� ���� ������ �Է��Ͻÿ�(ū��, ������):");
	scanf_s("%d%d", &a, &b);

	int i =  b;

	while (i > 0) {
		if (b % i == 0 && a % i==0) {
			printf("�ִ� ������� %d�Դϴ�.\n", i);
			break;
		}
		i--;
	}

	return 0;
}*/






/*#include <stdio.h>


int main(void) {


	int ch;

	do {
		printf("1---���Ͽ���\n2---���������ϱ�\n3---����\n");
		printf("�ϳ��� �����Ͻÿ�:");
		scanf_s("%d", &ch);
		//if (ch == 3) {
			//printf("�����մϴ�.\n");
			//break;
		//}

	} while (ch != 1 && ch != 2&&ch!=3);
	printf("���õ� �޴� = %d\n", ch);

	return 0;
}*/











/*#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main(void) {


	srand(time(NULL));

	int num = rand() % 100 + 1;
	int ans;
	int count = 0;

	do {
		printf("������ �����Ͽ� ���ÿ�:");
		scanf_s("%d", &ans);
		count++;

		if (ans > num) {
			printf("������ ������ �����ϴ�.\n");
		}
		else if (ans < num) {
			printf("������ ������ �����ϴ�.\n");
		}

	} while (ans!=num);

	printf("�����մϴ�. �õ��� Ƚ�� = %d\n", count);
}*/









/*#include <stdio.h>

int main(void) {


	int sum = 0;

	for (int i = 1; i < 11; i++) {
		sum += i;

	}

	printf("1���� 10������ ������ �� = %d\n", sum);

	return 0;
}*/






/*#include <stdio.h>

int main(void) {

	for (int i = 0; i < 7; i++) {
		if (i == 0 || i == 6) {
			printf("***************\n");
		}
		else {
			printf("*             *\n");
		}
	}

	return 0;
}*/







/*#include <stdio.h>

int main(void) {

	int num;

	printf("������ �Է��Ͻÿ� : ");
	scanf_s("%d", &num);

	int result = 1;

	for (int i = num; i > 0; i--) {

		result *= i;;
	}
	printf("%d!�� %d�Դϴ�.\n", num, result);

	return 0;
}*/









/*#include <stdio.h>


int main(void) {


	for (int i = 0; i < 5; i++) {

		for (int k = 0; k < 10; k++) {
			printf("*");
		}
		printf("\n");
	}

	return 0;
}*/






/*#include <stdio.h>

int main(void) {

	for (int i = 1; i < 3; i++)
		for (int j = 3; j >= 1; j--)
			printf("%d ���ϱ� %d�� %d\n", i, j, j * i);
	return 0;
}*/








/*#include <stdio.h>

int main(void) {


	for (int i = 1; i < 10; i++) {
		for (int k = 1; k < 10; k++) {
			printf("%d*%d = %d\n", i, k, i * k);
		}
	}

	return 0;
}*/







/*#include <stdio.h>
int main(void) {

	double sum = 0;

	for (int i = 0; i < 10; i++) {

		double input;

		printf("%d��° �Ǽ��� �Է��Ͻÿ� : ",i+1);
		scanf_s("%lf", &input);
		if (input == -1) {
			printf("�հ� = %.2lf\n", sum);
			break;
		}
		else {
			sum += input;
		}
	}

	return 0;
}
*/





/*#include <stdio.h>

int main(void) {

	for (int i = 1; i < 11; i++) {
		if (i % 2 != 0)continue;
		else {
			printf("%d\n", i);
		}
	}

	return 0;
}
*/






#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {

	

	printf("��� ������ �ڵ����� �����մϴ�.\n");

	srand(time(NULL));

	do {
		int a = rand() % 100;
		int b = rand() % 100;

		printf("%d + %d = ", a, b);
		int ans;
		scanf_s("%d", &ans);
		if (ans == a + b) {
			printf("�¾ҽ��ϴ�.\n");
			break;
		}
		else{
			printf("Ʋ�Ƚ��ϴ�.\n");
		}
	} while (1);

	return 0;
}













//249p_1


/*#include <stdio.h>

int main(void) {

	int i = 60;
	while (i >= 0) {
		printf("%d ", i);
		i--;
		if (i == -1) {
			printf("\n�߻�\n");
			break;
		}
	}

	return 0;
}*/






//249p_2;


/*#include <stdio.h>

int main(void) {

	int num;
	printf("�� ���̳� �ݺ��ұ��? ");
	scanf_s("%d", &num);


	for (int i = 0; i < num; i++) {
		printf("�ȳ��ϼ���?\n");
	}

	return 0;
}*/







//249p_3


/*#include <stdio.h>

int main(void) {

	int i = 65;

	while (i <= 73) {
		printf("%d : %c\n", i, i);
		i++;
	}
	return 0;
}*/







//249p_4

/*#include <stdio.h>
int main(void) {

	int sum = 0;
	while (1) {
		int i;
		printf("������ �Է��Ͻÿ� : ");
		scanf_s("%d", &i);
		if (i == 0) {
			break;
		}
		sum += i;
			
	}
	printf("�հ� = %d\n", sum);
}*/








//250p_5

/*#include <stdio.h>
int main(void) {

	for (int i = 1; i < 8; i++) {
		for (int a = 1; a < i + 1; a++) {
			printf("%d", a);
		}
		for(int b = 1; b < 8-i; b++) {
			printf("*");
		}
		printf("\n");
	}
}*/







//250_6

/*#include <stdio.h>

int main(void) {

	int i = 1;
	while (i < 101) {
		if (i % 3 == 0) {
			printf("%d ", i);
			i++;
		}
		else {
			i++;
		}

		if (i == 101) {
			printf("\n");
		}
	}

	return 0;
}*/




//250p_7
/*#include <stdio.h>

int main(void) {

	int i = 1;

	while (i < 101) {
		if (i % 3 == 0 && i % 5 == 0) {
			printf("%d ", i);
			i++;
		}
		else {
			i++;
		}
	}

	return 0;
}*/









//250_8p

/*#include <stdio.h>
int main(void) {


	int a, b;
	printf("�������� : ");
	scanf_s("%d", &a);
	printf("�������� : ");
	scanf_s("%d", &b);

	int sum = 0;
	for (int i = a; i <= b; i++) {
		sum += i;

	}


	printf("Sum of %d to %d = %d\n", a, b, sum);

	return 0;
}*/









//251_9p

/*#include <stdio.h>

int main(void) {

	int num;

	printf("������ �Է��ϼ��� : ");
	scanf_s("%d", &num);

	for (int i = 1; i <= num; i++) {
		if (num % i == 0) {
			printf("%d ", i);
		}
	}

	return 0;
}*/







//251_10p
/*#include <stdio.h>

int main(void) {
	
	printf("==============================\n");
	printf("ȭ���µ�              �����µ�\n");
	for (int i = 0; i <= 100; i += 10) {
		printf("%d                     %d\n", i, (i - 32) * 5 / 9);
	}
	printf("==============================\n");
	return 0;
}*/











//251_11p

/*#include <stdio.h>

int main(void) {

	int num;
	printf("������ �Է��Ͻÿ� : ");
	scanf_s("%d", &num);

	for (int i = 0; i < 5; i++) {
		for (int a = 0; a < i + 1; a++) {
			printf("%d ", a + 1);
		}
		printf("\n");
	}

}*/











//252_12p
/*#include <stdio.h>

int main(void) {

	int num;

	while (1) {
		printf("�����͸� �Է��Ͻÿ� : ");
		scanf_s("%d", &num);

		if (num == 0) {
			break;
		}
		else {
			for (int i = 0; i < num; i++) {
				printf("*");
			}
			printf("\n");
		}
	}

	return 0;
}*/









//252_13p
/*#include <stdio.h>
int main(void) {

	for (int a = 1; a < 101; a++) {
		for (int b = 1; b < 101; b++) {
			for (int c = 1; c < 101; c++) {
				if (a * a + b * b == c * c) {
					printf("%d %d %d \n", a, b, c);
				}
			}
		}
	}

	return 0;
}*/










//252_14;
/*#include <stdio.h>
int main(void) {

	int num;
	printf("n�� ���� �Է��Ͻÿ�: ");
	scanf_s("%d", &num);

	int sum = 0;
	for (int i = 1; i <= num; i++) {
		sum += i * i;
	}

	printf("��갪�� %d�Դϴ�.\n", sum);

	return 0;
}*/








//253_15p
/*#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {

	int sum = 0;
	char a;

	printf("���ڸ� �Է��Ͻÿ� : ");
	scanf_s("%c", &a);

	if (a == 'a') {
		sum += 1;
		while (1) {
			char c;

			printf("���ڸ� �Է��Ͻÿ� (���� . ): ");
			scanf_s(" %c", &c);

			if (c == 'a') {
				sum += 1;
			}
			else if (c == '.') { break; }
		}
	}
	printf("a�� ���� = %d\n", sum);

	return 0;
}*/








//253_16

/*#include <stdio.h>
int main(void) {

	int oil = 1000;

	while (1) {
		int input;

		printf("���� ������ +, �Ҹ�� -�� �Է����ּ��� : ");
		scanf_s("%d", &input);

		oil += input;
		if (oil < 1000 * 0.1) {
			printf("(���) ���ᰡ 10%%�����Դϴ�.\n");
			break;
		}
		else {
			printf("���� �����ִ� ���� %d�Դϴ�.\n ", oil);
		}
	}
}*/









//253_17p
/*#include <stdio.h>

int main(void) {

	int num;
		printf("������ �Է��Ͻÿ�:");
		scanf_s("%d", &num);

		for (int i = 2; i < num; i++) {
			if (num % i == 0) {
				printf("%d�� �Ҽ��� �ƴմϴ�.\n", num);
				return 0;
			}
		}

		printf("%d�� �Ҽ��� �½��ϴ�.\n", num);

		return 0;
}*/






/*#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main(void) {


	srand(time(NULL));
	

	int money = 50;
	int game = 0;
	int v = 0;

	printf("�ʱ� �ݾ� $50\n��ǥ �ݾ� $250\n");

	while (1) {
		
		int prob = rand() % 2; // 0�� ��, 1�� �̱�
		//printf("%d ", prob);
		game++;	

		if (prob == 1) {
			money += 1;
			v++;
		 }
		else {
			money -= 1;
		}
		if (money == 0) {
			printf("\n�ݾ��� ��� �Ҿ����ϴ�.\n");
			return 0;
		}
		else if (money == 250) {
			printf("%d���� %d�� �¸�\n", game, v);
			printf("�̱� Ȯ�� = %.2lf\n", (double)v / (double)game*100);
			return 0;
		}

	}
}*/










//254p_19

/*#include <stdio.h>

int main(void) {

	int front = 0;
	int back = 1;

	int num;
	
	printf("���° �ױ��� ���ұ��? : ");
	scanf_s("%d", &num);

	printf("%d %d ", front, back);
	for (int i = 0; i < num-1; i++) {
		int result = front + back;
		front = back;
		back = result;
		printf("%d ", result);
	}
	printf("\n");
	return 0;
}*/


