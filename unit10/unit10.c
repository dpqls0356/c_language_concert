//example 10-1


/*#include <stdio.h>

int main(void){
    
    char str1[6] = "Seoul";
    char str2[3] =  {'i','s','\0'};
    char str3[]= "the captital city of Korea";
    
    printf("%s %s %s",str1,str2,str3);
    
    printf("\n");
}
*/






//example 10-2

/*#include <stdio.h>


int main(void){
    
    
    char str[] = "komputer";
    
    printf("%s\n",str);
    
    str[0]= 'c';
    
    printf("%s\n",str);
    
    return 0;
}*/







//example 10-3



/*#include <stdio.h>


int main(void){
    
    
    char str[] = "A barking dog never bites";
    
    int i = 0 ;
    
    while(str[i]!= 0){
        i++;
    }
    
    printf("문자열의 갯수 = %d\n",i);
    
    return 0;
}
*/







//getchar()putchar()


/*#include <stdio.h>

int main(void){
    
    char ch = getchar();
    putchar(ch);
    printf("\n");
}
*/




 

//scanf printf


/*#include <stdio.h>


int main(void){
    
    
    char name[100];
    char address[100];
    
    printf("이름이 어떻게 되시나요?");
    scanf("%s",name);
    
    printf("어디에 사시나요?");
    scanf("%s",address);
    
    
    printf("반갑습니다. %s에 사시는 %s님\n",address,name);
  
    
    
    
    return 0;
}
*/





/*#include <stdio.h>


int main(void){
    
    
    char name[100];
    char address[100];
    
    printf("이름이 어떻게 되시나요?");
    gets(name);
    
    printf("어디에 사시나요?");
    gets(address);
    
    printf("반갑습니다. %s에 사시는 %s님\n",address,name);
  
    
    
    
    return 0;
}
*/





//strlen

/*
#include <stdio.h>
#include <string.h>



int main(void){
    
    char s[] = "qwertyuiop";
    
    int len  = strlen(s);
    
    printf("문자열의 길이는 %d입니다.\n",len);
    
    return 0;
}
*/
 
 
 
 
 //strcpy
 
 
 /*#include <stdio.h>
 #include <string.h>
 
 
int main(void){
    
    
    char name[] = "leeyebeen";
    char cpy_name[10];
    
    strcpy(cpy_name,name);
    
    printf("원본 = %s 복사본 = %s\n",name,cpy_name);
    
    return 0;
}


*/









//strcat


/*#include <stdio.h>
#include <string.h>

int main(void){
    
    
    char front_w[30]= "Hello ";
    char back_w[] = "World";
    
    strcat(front_w,back_w);
    
    puts(front_w);
    
}
*/







//strcmp

/*#include <stdio.h>
#include <string.h>

int main(void){
    
    
    char word1[100] ;
    char word2[100];
    
    printf("첫번째 단어를 입력하시오:");
    scanf("%s",word1);
    printf("두번째 단어를 입력하시오:");
    scanf("%s",word2);
    
    int a = strcmp(word1,word2);
    
    if(a<0){
        printf("%s가 %s보다 사전적으로 앞에 존재합니다.\n",word1,word2);
    }
    
   else if(a>0){
        printf("%s가 %s보다 사전적으로 앞에 존재합니다.\n",word2,word1);
    }
   else{
       printf("동일한 단어입니다.\n");
   }
}
*/







//change



/*#include <stdio.h>
#include <string.h>

int main(void){
    
    int i = atoi("100");
    double d = atof("10.12");
    printf("%d , %lf\n",i,d);
    
    
    return 0;
}*/








//pointer and char array

/*#include <stdio.h>
#include <string.h>


int main(void){
    
    char s[] = "Hello World";
    char *p = "Hello World";
    
    s[0] = 'h';
    
    printf("포인터가 가르키는 문자열 = %s\n",p);
    
    p = "Goodbye";
    
    printf("포인터가 가르키는 문자열 = %s\n",p);

}
*/






//see memory size

/*#include <stdio.h>

int main(void){
    
    double a = 3.141592;
    char b[] = "3.141592";
    
    
    printf("double =  %d , char = %d\n",sizeof(a),sizeof(b));
}
*/





//lab_398p


/*#include <stdio.h>
#include <string.h>



int main(void){
    
    
    char qus[]="딸기";
    char ans[100];
    
    do{
  
        printf("내가 가장 좋아하는 과일은 무엇일까요? ");
        gets(ans);
    }while(strcmp(ans,qus)!=0);
    
    printf("맞았습니다.  \n");
    
    return 0;
}
*/









//lab 399p


/*#include <stdio.h>
#include <string.h>

int main(void){
    
    
    char qus[] = "hello my name is yebin";
    int len =strlen(qus);
    char m[25];
    
    
    for(int i = 0 ; i <len;i++){
        if(qus[i]!=' '){
            m[i] = '_';
            
        }
        else{
            m[i] = ' ';
            
        }
    }
    
    while(1){
        
        char input_w;
        int count = 0 ;
        
        printf("문자열을 입력하시오 : %s\n",m);
        printf("글자를 추측하시오 :");
        scanf("%s",&input_w);
        
        for(int i = 0; i<len;i++){
            if(qus[i]==input_w){
                m[i] = input_w;
            }
        }
        
        
        for(int  k = 0 ; k<len;k++){
            if(m[k]==qus[k])count++;
        }
        
        if(count==len){
            puts(qus);
            return 0;}
        else continue;
    }
    
    
}
*/









//lab 401p


/*
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>


int main(void){
    
    
    char qus[] = "apple";
    char cmp_qus[] ="apple";
    
    srand(time(NULL));
    
    for(int i = 0 ; i<strlen(qus);i++){
        int a = rand()%strlen(qus);
        int b = rand()%strlen(qus);
        
        char tmp  = cmp_qus[a];
        cmp_qus[a] = cmp_qus[b];
        cmp_qus[b] = tmp;

    }
    
    while(1){
        
        char ans[100];
        printf("%s는 어떤 단어가 스크램블된 것일까요? ",cmp_qus);
        scanf("%s",ans);
        
        if(strcmp(ans,qus)!=0)continue;
        else{
            printf("축하합니다.\n");
            break;
        }
    }
    
}
*/











//lab 405p



/*#include <stdio.h>
#include <string.h>



int main(void){
    
    
    char dic[5][2][30]= {{"book","책"},{"boy","소년"},{"computer","컴퓨터"},{"language","언어"},{"rain","비"}};
    
    
    
    char input_w[30];
    printf("단어를 입력하시오 : ");
    scanf("%s",input_w);
    
    for(int i = 0 ; i <5;i++){
        if(strcmp(dic[i][1],input_w)==0){
            printf("%s : %s\n",dic[i][1],dic[i][0]);
            return 0;
        }
    }
    printf("일치하는 단어가 없습니다.\n");
    
}
*/






/*
#include <stdio.h>
#include <string.h>


int main(void){
    
    char fruit[6][20] = {
        "pineapple","banana","apple","tomato","pear","avocado"};
    
    
    for(int i= 0 ; i<6;i++){
        for(int k = 0 ; k<5;k++){
            if(strcmp(fruit[k],fruit[k+1])>0){
                char im[20];
                strcpy(im,fruit[k]);
                strcpy(fruit[k],fruit[k+1]);
                strcpy(fruit[k+1],im);

            }
        }
    }
    
    for(int i = 0 ; i<6; i++){
        printf("%s\n",fruit[i]);
    }
}





*/



//programming 1

/*#include <stdio.h>
#include <string.h>


int main(void){
    
    char passwd[100];
    
  
    while(1){
        
        printf("암호를 생성하시오 : ");
        scanf("%s",passwd);
        
        int num_count =0;
        int sm_count = 0;
        int big_count = 0 ;
        
        for(int i = 0 ; i<strlen(passwd);i++){
            
            if(passwd[i]>='0'&&passwd[i]<='9'){
                num_count++;
            }
            
            else if(passwd[i]>='A'&&passwd[i]<='Z'){
                big_count++;
            }
            
            else if(passwd[i]>='a'&&passwd[i]<='z'){
                sm_count++;
                
            }
        
            else{
                continue;
                
            }
        }
        //printf("b = %d, s = %d, n = %d\n",big_count,sm_count,num_count);
        
        if(big_count>0&&sm_count>0&&num_count>0){
            printf("적정한 암호입니다.\n");
            return 0;}
        
        else{
            printf("대소문자와 숫자를 모두 사용하여 비밀번호를 만드시오!\n");
            continue;
        }
        
    }
}
*/






//programming 2


/*#include <stdio.h>
#include <string.h>


int main(void){
    
    
    char qus[] = "1234";
    char ans[4] ;
    char *p = ans;
    
    int count = 0;
    for(int i = 0 ; i < 4;i++){
        getch(ansp[i]);
        putch('*');
        if(qus[i]==ans[i])count++;
        
    }
    if(count==4){
        printf("비밀번호 일치\n");
    }
    else{
        printf("비밀번호 불일치\n");
    }
    
    return 0;
    
}*/







//programming3
/*
#include <stdio.h>
#include <string.h>

int main(void){
    
    char input[100] ;
    
    printf("문자열을 입력하시오 : ");
    //scanf("%s",input);//or
    gets(input);
    
    printf("입력한 문자열 : %s\n",input);
    
    int alpha[26] = {0};
    
    
    for(int i= 0 ; i <strlen(input);i++){
        int a = (int)input[i]%97;
       //printf("(%c , %d) ",input[i],a);
        alpha[a]++;
        
    }

    for(int i = 0 ; i < 26;i++){
        if(alpha[i]>0){
            printf("%c문자가 %d번 등장하였슴!\n",(char)97+i,alpha[i]);
        }
    }
}*/









//programming 4
 

//공백이 있는 문자열 입력은 gets로 받기
//공백이 없는 문자열은 scanf로 가능


/*#include <stdio.h>
#include <string.h>


int main(void){
    
    
    char text[100];
    
    printf("텍스트를 입력하시오 : ");
    gets(text);


    
    printf("공백이 제거된 텍스트 :");
    for(int i = 0 ; i <strlen(text);i++){
        if(text[i]==' '   &&  text[1+i]==' '){
            continue;
        }
        else  printf("%c",text[i]);
    }
    printf("\n");
    
}*/








//programming 5
 
/*#include <stdio.h>
#include <string.h>


int main(void){
    
    char text[100] ;
    
    printf("텍스트를 입력한다 : ");
    gets(text);

    for(int i = 0 ; i<strlen(text);i++){
        if(text[i]=='a'||text[i]=='o'||text[i]=='i'||text[i]=='u'||text[i]=='e'){
            continue;
        }
        else{
            printf("%c",text[i]);
        }
    }
    printf("\n");
}

*/






//programming 6
/*
#include <stdio.h>
#include <stdlib.h>
#include <string.h>



int main(void){
    
    char text[100];
    
    printf("텍스트를 입력하시오 : ");
    gets(text);
    
    printf("대문자 출력 : ");
    for(int i  = 0 ; i<strlen(text);i++){
        if(text[i]!=' '){
            printf("%c",(int)(text[i])-32);}
        else printf(" ");
    }
    printf("\n");
}
*/






//programming7


/*#include <stdio.h>
#include <string.h>


int main(void){
    char text[100];
    
    printf("텍스트를 입력하시오 : ");
    gets(text);
    
    for(int i =strlen(text)-1; i>=0;i--){
        printf("%c",text[i]);
    }
    printf("\n");
    
}
*/





//programming8


/*#include <stdio.h>
#include <stdlib.h>
#include <string.h>



int main(void){
    
    char text[100];
    
    printf("텍스트를 입력하시오 : ");
    gets(text);
    
    printf("소문자 출력 : ");
    for(int i  = 0 ; i<strlen(text);i++){
        if(text[i]!=' '){
            printf("%c",(int)(text[i])+32);}
        else printf(" ");
    }
    printf("\n");
}
*/







//programming 9

/*#include <stdio.h>
#include <stdlib.h>
#include <string.h>



int main(void){
    
    char text[100];
    
    printf("텍스트를 입력하시오 : ");
    gets(text);
    
    int count = 0 ;
    
    for(int i = 0 ; i <strlen(text);i++){
        if(text[i]==' ')count++;
    }
    
    printf("단어의 갯수 = %d\n",count+1);
    
}*/




//programming10

/*#include <stdio.h>
#include <string.h>


int main(void){
    
    char text[100];
    
    printf("문자열을 입력하시오: ");
    scanf("%s",text);
    
    int len = strlen(text);
    int yorn=0;
    

    for(int i=0;i<strlen(text)/2;i++){
        
        if(text[i]!=text[len-1]){
            printf("회문이 아닙니다.\n");
            yorn = 1;

            break;
        }
            len--;
        
    }

    if(yorn ==0){
        printf("회문입니다.\n");
    }
 
}*/






//programming11


/*#include <stdio.h>

int main(void){
    
    char c;
    printf("아스키코드 값을 알고싶은 문자를 입력하시오 : ");
   // scanf("%c",&c);
    c =  getchar();
    printf("ASCII : %d\n",c);
}
*/







//programming12

/*#include <stdio.h>
#include <string.h>


void remove_g(char text[]){
    
    for(int i = 0 ; i <strlen(text);i++){
        if(text[i]!=' '){
            printf("%c",text[i]);
        }
    }
    printf("\n");
}
int main(void){
    
    char text[100];
    gets(text);
    
    remove_g(text);
    
}*/









//programming13



/*#include <stdio.h>
#include <string.h>


int main(void){
    
    char text[100];
    
    printf("텍스트를 입력하시오 :");
    gets(text);
    
    int count[5]={0};
    
    for(int i = 0 ; i <strlen(text);i++){
        for(int k  = 0;k<5;k++){
            if(text[i]==(char)(97+k)){
                count[k]++;
            }
        }
    }
    
    for(int k  = 0;k<5;k++){
        printf("%c : %d\n",(char)(97+k),count[k]);
        }
}*/







//programming14

/*#include <stdio.h>
#include <string.h>


int main(void){
    
    char text[100];
    
    printf("텍스트를 입력하시오 : ");
    gets(text);

    char yorn = 0 ;
    
    for(char cmp = 'A';cmp<='Z';cmp++){
        if(cmp==text[0])yorn =1;
        
    }
    
    int len = strlen(text);
    
    if(yorn == 0)text[0]=(char)(text[0]-32);
    
    if(text[len-1]!='.'){
        text[len] ='.';
        text[len+1]='\0';
    
    }
    
    printf("결과 텍스트 출력: ");
    puts(text);
    printf("\n");
}*/







//programming15
/*#include <stdio.h>

int main(void){
    
    char text[100];
    
    printf("문장을 입력하시오 : ");
    gets(text);
    
    printf("전체 프로그램 :\n#include <stdio.h>\nint main(void)\n{\n     ");
    puts(text);
    printf("\n      return 0;\n}\n");
    
    return 0;
}
*/

