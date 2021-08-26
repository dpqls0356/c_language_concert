//422
/*#include <stdio.h>
#include <string.h>

struct student{
    
    long number;
    char name[100];
    double grade;
    
};
int main(void){
    struct student s1 = {20194551,"이예빈",4.0};
    struct student s2;
    strcpy(s2.name,"홍길동");
    s2.grade =3.9;
    s2.number = 20170001;
   
       
    printf("학번 = %ld\n이름 = %s\n학점 = %lf\n\n",s1.number,s1.name,s1.grade);
    printf("학번 = %ld\n이름 = %s\n학점 = %lf\n\n",s2.number,s2.name,s2.grade);
    
    
}
*/








//lab 425

/*#include <stdio.h>
#include <math.h>



struct point{
    
    int x;
    int y;
    
};


int main(void){
    
    struct point p[2];
    
    for(int i = 0 ; i<2;i++){
        printf("점의 좌표를 입력하시오 (x,y) : ");
        scanf("%d %d",&p[i].x,&p[i].y);
    }
    
    double distance = sqrt(pow(p[0].x-p[1].x,2)+pow(p[0].y-p[1].y,2));
    
    printf("두 점사이의 거리는 %lf입니다.\n",distance);
}
*/










/*#include <stdio.h>
#include <string.h>

struct student{
    
    long number;
    char name[100];
    double grade;
    
};


int main(void){
    
    struct student s[3];
    
    for(int i = 0 ; i <3;i++){
        long number;
        char name[100];
        double grade;
        
        printf("학번을 입력하시오 : ");
        scanf("%ld",&number);
        
        s[i].number = number;
        
        printf("이름을 입력하시오: ");
        scanf("%s",name);
        
        strcpy(s[i].name,name);
        
        printf("학점을 입력하시오: ");
        scanf("%lf",&grade);
        
        s[i].grade = grade;
    }
    
    printf("=======================================\n");
    for(int i = 0 ; i < 3; i++){
        printf("학번 = %d, 이름 = %s, 학점 = %lf\n",s[i].number,s[i].name,s[i].grade);
    }
    printf("=======================================\n");

}
*/








/*#include <stdio.h>
#include <string.h>


struct vector{
    
    double x;
    double y;
};

struct vector get_vector_sum(struct vector v1, struct vector v2){
    
    struct vector v3;
    
    v3.x = v1.x+v2.x;
    v3.y = v1.y+v2.y;
    
    return v3;
    
}


int main(void){
    
    struct vector v1 = {2.0,3.0};
    struct vector v2 = {.y = 6.0,.x = 5.0};
    
    struct vector v3 = get_vector_sum(v1,v2);
    printf("백터의 합은 (%lf, %lf)입니다.\n",v3.x,v3.y);
    
}

*/




/*#include <stdio.h>

struct student{
    
    int number;
    char name[100];
    double grade;
    
};


int main(void){
    
    struct student s ={.name = "yebeen", .number = 20194551, .grade = 4.0};
    
    
    struct student *p = &s;
    
    
    printf("학번 = %d , 이름 = %s , 학점 = %.2lf\n",p->number,(*p).name,p->grade);
    
    return 0;
}
*/








/*#include <stdio.h>

enum days{mon,tue,wed,thu,fri,sat,sun};

int main(void){
    
    
    char days_c[7][20] = {"monday","tuesday","wednesday","thusday","firday","saturday","sunday"};
    
    enum days i;
    
    for(i  = mon;i<sun;i++){
        printf("%d번째 요일은 %s입니다.\n",i+1,days_c[i]);
        
    }
    
}
*/








/*#include <stdio.h>

typedef struct point{
    
    int x,y;
}POINT;

int main(void){
    
    POINT p1;
    POINT p2={10,10};
    POINT p3;
    
    
    p1.x= 2;
    p1.y = 3;
    
    p3.x = p1.x+p2.x;
    p3.y = p1.y+p2.y;
    
    printf("( %d , %d ) + ( %d , %d ) -> ( %d , %d )\n",p1.x,p1.y,p2.x,p2.y,p3.x,p3.y);
    
    
    return 0;
    
    
}
*/

