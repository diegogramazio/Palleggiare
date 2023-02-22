#include <stdio.h>

void richiamami(void);

int main() {
      printf("Mi piace palleggiare\n");
      richiamami();
}

void richiamami(void) {
      int x;
      printf("Introduci un intero\n");
      scanf("%d", &x);
      printf("Hai introdotto %d\n\n", x);
      main();
      system("PAUSE");
}
