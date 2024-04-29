#include <stdio.h>
#include <stdlib.h>

void score_fun(char yY); // 중간/기말 점수 입력
void end_fun(char nN);  // 프로그램 종료 메시지 출력
char alpha_err(char err);  // 알파벳 입력 오류 예외 처리
char* grade_fun(int score1, int score2); // 점수 등급 산출
void jumsu_err(int score1, int score2); // 점수 입력 오류 예외 처리


void main(void) {
  char input; 
  
  do{
    printf("프로그램을 시작하시겠습니까? (y/Y or n/N) ; ");
    scanf(" %c", &input);

    switch(input){
      case 'y':
      case 'Y':
        score_fun(input);
        break;
      case 'n':
      case 'N':
        end_fun(input);
        break;
      default:
        alpha_err(input);
        break;
    }
  }while(1);
}

void score_fun(char yY){
  int score1, score2;
  
  printf("중간고사와 기말고사 성적을 띄어쓰기로 구분하여 입력하십시오.(0~50) ");
  scanf("%d %d", &score1, &score2);

  grade_fun(score1, score2);
}

char* grade_fun(int score1, int score2){
  char my_grade[3] = {0};
  char grade[11][3] = {"A+", "A0", "B+", "B0", "C+", "C0", "D+", "D0", "E+", "E0", "F"};

  if(score1<0 || score1>50 || score2<0 || score2>50){
    jumsu_err(score1, score2);
  }
  else{
    int score = (score1+score2)/5;
    
    if (score==20){my_grade[0]=grade[0][0]; my_grade[1]=grade[0][1];}
    else if (score<12){my_grade[0]=grade[10][0];}
    else{my_grade[0]=grade[19-score][0]; my_grade[1]=grade[19-score][1];}

    printf("등급은 %s입니다.\n\n", my_grade);
  }

  return my_grade;
}

void jumsu_err(int score1, int score2){
  printf("%d와(과) %d은(는) 유효하지 않은 입력입니다. 두 수 모두 0~50 내의 정수여야 합니다.\n", score1, score2);
  score_fun('y');
}

void end_fun(char nN){
  printf("%c을 입력하여 프로그램을 종료합니다.\n", nN);
  exit(0);
}

char alpha_err(char err){
  printf("%c은(는) 유효하지 않은 입력입니다.\n\n", err);
  
  return err;
}

