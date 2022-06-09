#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char const *argv[]) {
  char *series[7] = {
    "The Walking Dead",
    "Game of Thrones",
    "Stranger Things",
    "La Casa de Papel",
    "Breaking Bad",
    "Vikingos",
    "Umbrella Academy"
  };
  char *motivo[7] = {
    "sus actores",
    "su trama",
    "sus FX",
    "sus personajes",
    "su noPor",
    "el final que todos esperaban para irse a dormir",
    "no"
  };
  srand(time(NULL));
  for (int i = 0; i < 7; i++) {
    int r = rand()%7;
    int s = rand()%7;
    printf("%s es la mejor serie por %s\n", series[r], motivo[s]);
  }
  return 0;
}
