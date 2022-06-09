#include <stdio.h>
#include <stdlib.h>
//Ampliar el programa anterior para traducir un mensaje de varias palabras. En la traducci ́on a Morse cada letra est ́a separada por un espacio y cada palabra con un |.
int main(int argc, char const *argv[]) {
  char *morse[] ={
    ".-",
    "-...",
    "-.-.",
    "-..",
    ".",
    "..-.",
    "--.",
    "....",
    "..",
    ".---",
    "-.-",
    ".-..",
    "--",
    "-.",
    "---",
    ".--.",
    "--.-",
    ".-.",
    "...",
    "-",
    "..-",
    "...-",
    ".--",
    "-..-",
    "-.--",
    "--.."
  };
  int i = 1;
  while (i < argc) {
    int j = 0;
    while (argv[1][j] != 0) {
      printf("%s ", morse[argv[1][j] - 'a']);
      j++;
    } printf("| ");
    i++;
  } printf("\n");
  return 0;
}
