#include <stdio.h>

#include "queue.h"

typedef struct Queue Queue;

int main(void) {

    Queue *queue = create_queue(10);
    close_queue(queue);

    return 0;
}