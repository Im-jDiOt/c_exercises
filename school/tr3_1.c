#include <stdio.h>

int is_vowel(char c) {
  switch (c)
  {
  case 'a': case 'e': case 'i': case 'o': case 'u':
    printf("Consonant");
    break;
  default:
    printf("Vowel");
    break;
  }
 return 0; 
}

int main(void) {
  char c;

  printf("문자 입력: ");
  scanf("%c", &c);
  is_vowel(c);
  
  return 0;
}