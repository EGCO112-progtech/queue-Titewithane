#include "Node.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "Queue.h"

int main(int argc, char **argv) {
  NodePtr headPtr = NULL;
  NodePtr tailPtr = NULL;
  /* For struct Queue*/
  Queue q;
  q.headPtr = NULL;
  q.tailPtr = NULL;
  q.size = 0;

  int i, x, mon, a = 1;

  for (i = 1; i < argc; i++) {

    if (strcmp(argv[i], "x") == 0) {

      printf("customer no: %d\n", a);
      x = dequeue_struct(&q);
      if (x == 0)
        printf("No order\n");
      else {
        printf("\nYou have to pay %d\n", x);

        do {
          printf("Cash: ");
          scanf("%d", &mon);
        } while (mon < x);

        if (mon == x)
          printf("Thank you\n");
        else if (mon > x) {
          printf("Thank you\n");
          printf("Change is %d\n", mon - x);
        }
      }
      a++;
    } else {

      enqueue_struct(&q, atoi(argv[i]), atoi(argv[i + 1]));
      i++;
    }
  }
  // printf("There are %d", q.size);
  printf("=====================================\n");
  if (q.size == 0 || q.size == 1)
    printf("There is %d people left in the queue\n", q.size);
  else
    printf("There are %d people left in the queue\n", q.size);


  while (q.size > 0)
    dequeue_struct(&q);

  return 0;
}