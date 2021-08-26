
#include <stdio.h>
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
        scanf("%c",&input_w);

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
