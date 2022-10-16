//
//  replace_space_string.c
//  Basic-C
//
//  Created by Uwais Alqadri on 9/26/22.
//

#include <stdio.h>
#include <string.h>

int replace_space_string() {
  char string[10000] = "", str_result[10000] = "";
  char c;
  int islowercase_vowel, isuppercase_vowel;

  printf("Masukkan kalimat = ");
  scanf("%[^\n]s", string);

  for(int i = 0; i < strlen(string); i++) {
    c = string[i];

    islowercase_vowel = (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
    isuppercase_vowel = (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U');

    if (islowercase_vowel || isuppercase_vowel) c = ' ';

    strncat(str_result, &c, 1);
  }

  printf("Hasil = %s \n", str_result);

  return 0;
}
