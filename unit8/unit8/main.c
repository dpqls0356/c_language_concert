//예제 1

/*#include <stdio.h>


int get_integer(){
    
    int input_n;
    scanf("%d",&input_n);
    
    return input_n;
}

int main(void){
    
    printf("정수를 입력하세요: ");
    int num = get_integer();
    printf("입력한 정수 = %d\n",num);
}
*/







//예제 2

/*#include <stdio.h>

int find_bigger(int x,int y){
    return x>y?x:y;
}

int main(void){
    
    int x,y;
    printf("두 개의 정수를 입력하시오: ");
    scanf("%d%d",&x,&y);
    
    int bigger_n=find_bigger(x, y);
    printf("더 큰 수 = %d\n",bigger_n);
    
    return 0;
}
*/








//예제3

/*#include <stdio.h>


int power(int x,int y){
    
    int result =1;
    for(int i= 0; i<y;i++){
        result*=x;
        
    }
    
    return result;
}


int main(void)
{
    
    int x,y;
    printf("n의 m승에 들어갈 n과 m을 입력하시오: ");
    scanf("%d%d",&x,&y);
    
    
    int result = power(x, y);
    
    printf("%d\n",result);
}
*/




//예제1 변형

/*#include <stdio.h>


int get_integer(){
    
    int input_n;
    scanf("%d",&input_n);
    
    return input_n;
}

int main(void){
    
    printf("정수를 입력하세요: ");
    int x = get_integer();
    printf("정수를 입력하세요: ");
    int y = get_integer();

    printf("입력한 정수들의 합 = %d\n",x+y);
}
*/





//예제2 변형

/*#include <stdio.h>

int find_bigger(int x,int y){
    return x>y?x:y;
}



int get_integer(){
    
    int input_n;
    scanf("%d",&input_n);
    
    return input_n;
}

int main(void){
    
    printf("정수를 입력하세요: ");
    int x = get_integer();
    printf("정수를 입력하세요: ");
    int y = get_integer();
    
    int bigger_n=find_bigger(x, y);
    printf("더 큰 수 = %d\n",bigger_n);
    
    return 0;
}
*/





//예제3 변형

/*#include <stdio.h>


int power(int x,int y){
    
    int result =1;
    for(int i= 0; i<y;i++){
        result*=x;
        
    }
    
    return result;
}

int get_integer(){
    
    int input_n;
    scanf("%d",&input_n);
    
    return input_n;
}

int main(void){
    
    printf("정수를 입력하세요: ");
    int x = get_integer();
    printf("정수를 입력하세요: ");
    int y = get_integer();
    
    int result = power(x, y);
    
    printf("%d\n",result);
}
*/






//lab315p


/*#include <stdio.h>

int FtoC(int temp_f){
    
    return (temp_f-32.0)*5.0/9.0;
}


int main(void){
    
    int temp_f;
    
    printf("화씨온도를 입력하시오:");
    scanf("%d",&temp_f);
    
    printf("화씨온도 %d는 섭씨온도 %d입니다.\n",temp_f,FtoC(temp_f));
    
}
*/






//lab334

/*#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main(void){
    
    srand(time(NULL));
    
    int num[6];
    
    for(int i = 0; i<6;i++){
        int number = rand()%45+1;
        
        for(int k= 0; k<i;k++){
            if(num[k]==number){
                i--;
                continue;
            }
        }
        num[i]=number;
        printf("%d ",num[i]);
        
    }
    printf("\n");
}
*/





/*#include <stdio.h>

int factorial(int n){
    
    if(n<=1)return 1;
    else return n*factorial(n-1);
    
}

int main(void){
    
    int fact;
    
    printf("알고싶은 팩토리얼을 입력하시오:");
    scanf("%d",&fact);
    
    printf("%d! = %d\n",fact,factorial(fact));
    
    return 0;
}
*/







//programming




//1
/*#include <stdio.h>


double function(int x,int y){
    
    return 1.5*x+3.0*y;
}

int main(void){
    
    
    printf("x = 1.0, y = 1.0, f(x,y) = %lf\n",function(1, 1));
    printf("x = 2.0, y = 1.0, f(x,y) = %lf\n",function(2, 1));
    printf("x = 1.0, y = 2.0, f(x,y) = %lf\n",function(1, 2));
}*/






//2

/*#include <stdio.h>

double get_bigger(double x,double y){
    
    return x>y?x:y;
}


int main(void){
    
    double x,y;
    

    printf("실수를 입력하시오 : ");
    scanf("%lf",&x);
    
    printf("실수를 입력하시오 : ");
    scanf("%lf",&y);
    
    printf("더 큰 수는 %lf\n",get_bigger(x, y));
}
*/






//3

/*#include <stdio.h>

void draw_stars(){
    printf("*************************\n");
}

int main(void){
    
    draw_stars();
    printf("Hello World!\n");
    draw_stars();
}*/








//4

/*#include <stdio.h>

void get_divisor(int x){
    
    for(int i =1; i<x+1;i++){
        if(x%i==0){
            printf("%d ",i);
        }
    }
}


int main(void){
    
    int x = 8;
    printf("%d의 약수  = ",x);
    get_divisor(x);
    printf("\n");
    
}
*/





//5

/*#include <stdio.h>


void prime_number_or_not(){
    
    for(int i= 2 ; i <101;i++){
      
        int count= 0 ;
        for(int k = 1; k<=i;k++){
            
            if(i%k==0)count++;
        }
        if(count==2){
            printf("%d ",i);
        }
    }
    
}


int main(void){
    
    prime_number_or_not();
    printf("\n");
}*/






//6

/*#include <stdio.h>
#include <math.h>


void ipower(int n,int k ){
    
    for(int i = 0 ; i<=k;i++){
        printf("%d\n",(int)pow(n,i));
    }
}


int main(void){
    
    ipower(3,5);
}
*/






//7

/*#include <stdio.h>
#include <math.h>

double dist_2d(int x1,int y1,int x2,int y2){
    
    return sqrt(pow((x1-x2),2)+pow((y1-y2),2));
}



int main(void){
    
    int x1;
    int y1;
    int x2;
    int y2;
    
    
    printf("첫번째 점의 자표를 입력하시오(x,y): ");
    scanf("%d%d",&x1,&y1);
    
    printf("두번째 점의 자표를 입력하시오(x,y): ");
    scanf("%d%d",&x2,&y2);
    
    printf("두 점 사이의 거리는 %lf입니다.\n",dist_2d(x1, y1, x2, y2));
}
*/

