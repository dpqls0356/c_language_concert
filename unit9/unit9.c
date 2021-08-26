
//예제 0

/*#include <stdio.h>


int main(void){
    
    int i = 10;
    char c ='c';
    double f = 12.3;
    
    printf("i의 주소 : %u \n",&i);
    printf("c의 주소 : %u \n",&c);
    printf("f의 주소 : %u \n",&f);

}*/







//예제1


/*#include <stdio.h>

int main(void){
    
    int number = 9;
    int *p = &number;
    
    printf("p의 값 : %d\n",*p);
    printf("number의 값 : %d\n",number);
    printf("number의 주소 : %u\n",&number);
    printf("p의 주소 : %u\n",p);
}*/





//예제2

/*#include <stdio.h>

int main(void){
    
    int number = 9;
    int *p = &number;
    
    
    printf("number의 값 : %d\n",number);
    
    *p =20;
    
    printf("number의 값 : %d\n",number);
  
}
*/




//값에 의한 호출 예제

/*#include <stdio.h>

void modify(int n){
    n = 99;
}
int main(void){
    
    int number = 1;
    
    modify(number);
    
    printf("number = %d \n",number);
    
    return 0;
}
*/




//참조에 의한 호출


/*#include <stdio.h>

void modify(int *n){
    *n = 99;
}
int main(void){
    
    int number = 1;
    
    modify(&number);
    
    printf("number = %d \n",number);
    
    return 0;
}
*/






//swap



/*#include <stdio.h>

void swap(int *a,int *b){
    
    int tmp;
    tmp= *a;
    *a= *b;
    *b = tmp;
    
}
int main(void){
    
    int a = 100, b = 200;
    
    printf("swap() 전 a = %d, b = %d\n",a,b);
    swap(&a,&b);
    printf("swap() 전 a = %d, b = %d\n",a,b);

}*/





//363p에 대한 실험
//포인터를 NULL로 초기화하고 다른 주소 대입 안할시 오류로 판단.

/*#include <stdio.h>

int main(void){
    
    int *p = NULL;
    int a = 10;
    
   // p=&a;
    printf("%d\n",*p);
}*/










//lab369p


/*#include <stdio.h>

double get_array_avg(int val[],int n){
    
    int avg =0;
    
    for(int i = 0 ; i<n;i++){
        avg+=*(val+i);
        
    }
    return (double)avg/n;
}


void print_array(int val[],int n){
    
    printf("[");
    for(int i = 0 ; i<n;i++){
        printf("%d ",val[i]);
    }
    printf("]\n");
}

int main(void){
    
    int array[5]={10,20,30,40,50};
    
    double avg = get_array_avg(array,5);
    
    print_array(array,5);
    printf("배열 원소들의 평균 = %.2lf\n",avg);
    
    return 0;
    
}

*/








//programming_1

/*#include <stdio.h>

int get_array_sum(int *A,int size){
    
    int sum = 0;
    
    for(int i = 0 ; i<size;i++){
        sum+=*(A+i);
    }
    
    return sum;
}

void print_array(int val[],int n){
    
    for(int i = 0 ; i<n;i++){
        printf("%d ",val[i]);
    }
    printf("\n");
}


int main(void){
    
    int data[10] = {1,2,3,4,5,6,7,8,9};
    
    int sum = get_array_sum(data, 10);
    
    printf("print_array()\n");
    print_array(data, 10);
    printf("배열 요소의 합 = %d\n",sum);
    
    return 0;
}
*/








//2
/*#include <stdio.h>

void print_array(int val[],int n){
    
    for(int i = n ; i>0;i--){
        printf("%d ",val[i-1]);
    }
    printf("\n");
}

int main(void){
    
    int array[5];
    
    printf("5개의 정수를 입력하시오 : ");
    for(int i = 0 ; i<5;i++){
        int a;
        scanf("%d",&a);
        array[i]=a;
    }
    
    printf("역순 : ");
    print_array(array,5);
    
    return 0;
}
*/








//3

/*#include <stdio.h>
#include <math.h>

void quadratic(int a,int b,int c,double *xplus,double *xminus){
    
    *xplus = (-b+sqrt(b*b-4*a*c))/(2*a);
    *xminus =(-b-sqrt(b*b-4*a*c))/(2*a);
    
}


int main(void){
    
    double xplus,xminus;
    quadratic(1, 4, 3, &xplus, &xminus);
    
    
    printf("첫번째 실근 = %.2lf\n",xplus);
    printf("두번째 실근 = %.2lf\n",xminus);

}
*/






//4


#include <stdio.h>


void get(double val,int *i_part,double *f_part){

    *i_part =(int)val;
    *f_part =val-*i_part;
    
}

int main(void){
    
    double num = 3.14;
    int i_part;
    double f_part;
    get(num,&i_part,&f_part);
    printf("정수부 = %d\n소수부 = %f\n",i_part,f_part);
    
    return 0;
}
