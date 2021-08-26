//예제 1


/*#include <stdio.h>

int main(void){
    
    int score[5];
    
    for(int i  = 0; i<5;i++){
        score[i] = (i+1)*10;
        printf("score[%d] = %d \n", i,score[i]);
    }
    printf("\n");
    
    return 0;

}
*/








//예제 2
/*#include <stdio.h>
#define SIZE 26

int main(void){
    
    char codes[SIZE];
    
    for(int i = 0 ; i<SIZE; i++){
        codes[i] = 97+i;
        printf("%c ", codes[i]);
    }
    
    printf("\n");
    
    return 0;
}*/








//예제3

/*#include <stdio.h>
#define STUDENT 5

int main(void){
    
    int score[STUDENT];
    int sum = 0 ;
    
    for(int i = 0 ; i<STUDENT;i++){
        
        printf("학생들의 성적을 입력하시오 : ");
        scanf("%d",&score[i]);
        
        sum +=score[i];
        
    }
    printf("평균 값 = %d\n",sum/STUDENT);
    
    return 0;
    
}
*/








//예제4


/*#include <stdio.h>


int main(void){
    
    int array[5] = {31,63,62,87,14};
    
    for(int i = 0 ; i<5;i++){
        printf("array[%d] = %d \n",i,array[i]);
    }
    
    int size = sizeof(array)/sizeof(array[0]);
    
    printf("array size = %d\n",size);
    return 0;
}
*/







//lab

/*#include <stdio.h>

int main(void){
    
    int attendent[16];
    int count =0 ;
    
    for(int i = 0 ; i<16;i++){
        printf("%d번째 강의에 출석하셨나요?(출석은 1, 결석은 0): ",i+1);
        scanf("%d",&attendent[i]);
        if(attendent[i]==0)count++;
    }
    if((double)count/16>=0.3){
        printf("수업 일수 부족입니다.<%lf>%\n",(double)(16-count)/16*100);
    }
    else{
        printf("학점을 받을 수 있습니다.<%lf>%\n",(double)(16-count)/16*100);
    }
    
    return 0;
}
*/











//lab


/*#include <stdio.h>

int main(void){
    
    
    int price[10] = {12,3,19,6,18,8,12,4,1,19};
    
    int minnum=price[0];
    
    printf("[ %d ",minnum);
    for(int i = 1 ; i<10; i++){
        printf("%d ",price[i]);
        if(minnum>price[i])minnum = price[i];
        else continue;
    }
    printf("]\n최소값은 %d입니다.\n",minnum);
    
    return 0;
}
*/








//lab



/*#include <stdio.h>

int main(void){
    
    int array[10];
    
    for(int i= 0  ; i<10;i++){
        array[i] = (i+1)*10;
    }
    
    int find_index;
    printf("탐색할 값을 입력하시오 : ");
    scanf("%d",&find_index);
    
    for(int k=0;k<10;k++){
        if(array[k]==find_index){
            printf("탐색 성공 인덱스 = %d\n",k);
            return 0;
        }
    }
    printf("탐색 실패\n");
    return 0;
    
}
*/








//버블정렬



/*#include <stdio.h>


int main(void){
    
    
    int list[5] = {16,7,9,1,3};
    
    for(int i =0;i<5;i++){
        for(int k = 0; k<4;k++){
            if(list[k]>list[k+1]){
                int tmp = list[k];
                list[k]=list[k+1];
                list[k+1]=tmp;
            }
        }
    }
    
    printf("[ ");
    for(int j=0;j<5;j++){
        printf("%d ",list[j]);
        
    }
    printf("]\n");
    
    return 0;
}
*/







//283p예제



/*#include <stdio.h>

int main(void){
    
    int a[3][5] = {{0,1,2,3,4},{5,4,3,2,1},{2,4,6,8,10}};
    
    
    for(int i = 0; i<3;i++){
        for(int k = 0 ; k<5;k++){
            printf("a[%d][%d] = %d\n",i,k,a[i][k]);
        }
    }
    
    return 0;
}
*/








//lab

/*#include <stdio.h>

int main(void){
    
    int a_array[3][3] = {{1,0,0},{0,1,0},{0,0,1}};
    int b_array[3][3] = {{1,0,0},{0,1,0},{0,0,1}};
    
    int c_array[3][3] = {0};
    
    for(int i =0;i<3;i++){
        for(int k = 0 ; k<3;k++){
            c_array[i][k]=a_array[i][k]+b_array[i][k];
        }
    }
    for(int j = 0 ; j<3;j++){
        for(int l=0;l<3;l++){
            printf("%d ",c_array[j][l]);
        }
        printf("\n");
    }
    
    return 0;
}*/








/*#include <stdio.h>
#include <stdlib.h>
#include <time.h>

 

int main(void){
    
    srand(time(NULL));
    
    char game[3][3] = {{' ',' ',' '},{' ',' ',' '},{' ',' ',' '}};
    
    printf("게임을 시작하겠습니다.\n");
    
    int count=0;
    while(1){
        if(count%2==0){
            int x,y;
            printf("(x,y)좌표 : ");
            scanf("%d%d",&x,&y);
            
            if(game[x][y]=='O'||game[x][y]=='X'){
                printf("다시 입력하세요\n");
                continue;
                
                }
            
            game[x][y]='O';
                printf("---|---|---\n");
                for(int a=0;a<3;a++){
                    printf(" %c | %c | %c |\n",game[a][0],game[a][1],game[a][2]);
                    printf("---|---|---\n");
                
                }
              
            }
            
        
        else if(count%2==1){
            int x,y;
            x= rand()%3;
            y=rand()%3;
         
            if(game[x][y]=='O'||game[x][y]=='X')continue;
                
        
            game[x][y] = 'X';
            printf("컴퓨터 차례\n---|---|---\n");
            for(int a=0;a<3;a++){
                printf(" %c | %c | %c |\n",game[a][0],game[a][1],game[a][2]);
                printf("---|---|---\n");
            }

   
            
        }
        count++;
            
        if(game[0][0]=='X'&&game[0][1]=='X'&&game[0][2]=='X'){
            printf("컴퓨터 승리\n");
            break;
            
        }
        else if(game[1][0]=='X'&&game[1][1]=='X'&&game[1][2]=='X'){
                   printf("컴퓨터 승리\n");
                   break;
                   
               }
        
        else if(game[2][0]=='X'&&game[2][1]=='X'&&game[2][2]=='X'){
            printf("컴퓨터 승리\n");
            break;
            
        }
        else if(game[1][0]=='O'&&game[1][1]=='O'&&game[1][2]=='O'){
            printf("사용자 승리\n");
            break;
            
        }
        else if(game[0][0]=='O'&&game[0][1]=='O'&&game[0][2]=='O'){
            printf("사용자 승리\n");
            break;
            
        }
        else if(game[2][0]=='O'&&game[2][1]=='O'&&game[2][2]=='O'){
            printf("사용자 승리\n");
            break;
            
        }
        else if(game[0][0]=='X'&&game[1][1]=='X'&&game[2][2]=='X'){
            printf("컴퓨터 승리\n");
            break;
            
        }
        else if(game[0][2]=='X'&&game[1][1]=='X'&&game[2][0]=='X'){
            printf("컴퓨터 승리\n");
            break;
            
        }
        else if(game[0][0]=='O'&&game[1][1]=='O'&&game[2][2]=='O'){
            printf("사용자 승리\n");
            break;
            
        }
        else if(game[0][2]=='O'&&game[1][1]=='O'&&game[2][0]=='O'){
            printf("사용자 승리\n");
            break;
            
        }
        else if(game[0][0]=='X'&&game[1][0]=='X'&&game[2][0]=='X'){
                   printf("컴퓨터 승리\n");
                   break;
                   
               }
        else if(game[1][1]=='X'&&game[0][1]=='X'&&game[2][1]=='X'){
                   printf("컴퓨터 승리\n");
                   break;
                   
               }
        else if(game[1][2]=='X'&&game[0][2]=='X'&&game[2][2]=='X'){
                   printf("컴퓨터 승리\n");
                   break;
                   
               }
        else if(game[1][0]=='O'&&game[0][0]=='O'&&game[2][0]=='O'){
                   printf("사용자 승리\n");
                   break;
                   
               }
        else if(game[1][1]=='O'&&game[0][1]=='O'&&game[2][1]=='O'){
                   printf("사용자 승리\n");
                   break;
                   
               }
        else if(game[1][2]=='O'&&game[0][2]=='O'&&game[2][2]=='O'){
                   printf("사용자 승리\n");
                   break;
                   
               }
        int full=0;
        for(int i = 0 ; i<3;i++){
            for(int k= 0 ; k<3;k++){
                if(game[i][k]!=' ')full++;
            }
        }
        if(full==9){
            printf("무승부\n");
            return 0;
        }
    }
    return 0;
    
    // 아 반복문이랑 if문 쓰면되는데 바보처럼 경우의 수를 하나씩 다 입력해버렸다.:(ㄴ
}
*/








//programming


//1


/*#include <stdio.h>


int main(void){
    
    int days[]={31,29,31,30,31,30,31,31,30,31,30,31};
    
    for(int i = 0; i<12;i++){
        printf("%d월은 %d일까지 있습니다.\n",i+1,days[i]);
    }
}
*/






//2

/*#include <stdio.h>

int main(void){
    
    int input[5];
    
    for(int i =0; i<5;i++){
        printf("정수를 입력하시오 : ");
        scanf("%d",&input[i]);
    }
    
    int max = input[0];
    
    int min = input[0];
    
    for(int k = 0 ; k<5;k++){
        
        if(max<input[k])max= input[k];
        if(min>input[k])min = input[k];
    }
    
    printf("최솟값은 %d이고 최대값은 %d입니다.\n",min,max);
    
    
    return 0;
}
*/








//3


/*#include <stdio.h>

int main(void){
    
    int student[3][3] = {{30,10,11},{40,90,32},{70,65,56}};
    
    
    int student_avg[3];
    
    for(int i = 0 ; i<3; i++){
        for(int k = 0 ; k<3;k++){
            student_avg[i]+= student[i][k];
            
        }
    }
    
    for(int a = 0 ; a<3;a++){

        printf("%d번째 학생의 평균 =%d\n",a+1,student_avg[a]/3);
    }
    
    return 0;
}
*/







//4


/*#include <stdio.h>


int main(void){
    
    
    int x[9][9];
    
    
    for(int i = 0 ;i<9;i++){
        for(int k = 0; k<9;k++){
            x[i][k] = (i+1)*(k+1);
        }
    }
    
    int a,b;
    
    printf("알고싶은 구구단을 입력하시오(예: 9 3): ");
    scanf("%d%d",&a,&b);
    
    printf("%dX%d = %d\n",a,b,x[a-1][b-1]);
    
    return 0;
    
}*/







//5



/*#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main(void){

    int count[10] = {0};
    
    srand(time(NULL));
    
    for(int i = 0 ; i<100;i++){
        
        int num = rand()%10;
        count[num]++;
    }
    
    int bigger = 0;

    for(int k =0; k<10;k++){
        if(bigger<count[k]){
            bigger=count[k];
        
        }}
    
    printf("가장 많이 생성된 수 : ");
    for(int b = 0 ; b<10;b++){
        if(count[b]==bigger){
            printf("%d ",b);
            
        }
    }
    printf("\n");
    return 0;
    

}
*/







//6


/*#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main(void){
    
    
    srand(time(NULL));
    
    int dice[6]={0};
    
    for(int i = 0 ; i<60000;i++){
        int num = rand()%6+1;
        
        dice[num-1]++;
        
    }
    
    printf("===========================\n");
    printf("    주사위면    |     빈도    \n");
    for(int k = 0 ; k<6;k++){
        printf("      %d            %d       \n",k+1,dice[k]);
    }
}
*/






/*#include <stdio.h>


int main(void){
    
    
    int seat[10]={0};
    
    while(1){
        
        char ch;
        
        printf("좌석을 예약하시겠습니까?(y 또는 n): ");
        fflush(stdin);
        scanf("%c",&ch);
        if(ch=='n')break;
        
        else{
            printf("================================\n");
            printf("  1  2  3  4  5  6  7  8  9  10 \n");
            printf("================================\n");
            for(int i = 0 ; i<10;i++){
                printf("  %d",seat[i]);
            }
            printf("\n");
            
            while(1){
                printf("몇번째 좌석을 예약하시겠습니까?");
                int input_seat_number;
                scanf("%d",&input_seat_number);
                
                if(seat[input_seat_number-1]!=0){
                    printf("이미 예매된 좌석입니다.\n");
                    printf("다른 좌석을 골라주세요\n");
                    continue;
                }
                else{
                    seat[input_seat_number-1]=1;
                    break;
                }
            }
        }
    }
}
*/





/*#include <stdio.h>
#include <math.h>




int main(void){
    
    
    double number[5];
    double avg=0;
    
    
    for(int i=0; i<5;i++){
        
        double num;
        
        printf("실수를 입력하시오: ");
        scanf("%lf",&num);
        number[i]=num;
        avg+=num;
    }
    avg/=5;
    double result =0;
    for(int k = 0 ;k<5;k++){
        result += pow(number[k]-avg,2);
    }
    printf("평균 = %lf\n표준편차 = %lf\n",avg,sqrt(result/5));
}
*/








//9




#include <stdio.h>
#include <stdlib.h>


int main(void){
    
    
    
    char bug[10];
    
    
    int num = rand()%10;  //딱정벌레 위치
    
    bug[num]='*';
    
    for(int a=0;a<10;a++){
        if(a!=num){
            bug[a]='_';
        }
    }
    
    for(int i =0 ;i<10;i++){
        printf("%c ",bug[i]);
    }
    printf("\n");
    
    
    for(int k =0; k<12;k++){
        
        int move = rand()%2;
        // 0 왼쪽 1 오른쪽
        
        if(move == 0){
            bug[num]='_';
            bug[num-1]='*';
            num--; // 딱정벌레 위치가 변했으니까.
        }
        else if(move==1){
            bug[num]='_';
            bug[num+1]='*';
            num++;
        }
        for(int i =0 ;i<10;i++){
            printf("%c ",bug[i]);
        }
        printf("\n");
    }
    
    return 0;
}
