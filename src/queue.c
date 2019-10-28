#include <stdio.h>
#include <stdlib.h>

struct Queue {
    int size;
    int *front;
    int *rear;
    size_t capacity;
    int *queue_array;
};

typedef struct Queue Queue;

Queue * create_queue(size_t capacity) {
    printf("create queue\n");
    Queue *queue;
    return queue;
}

void close_queue(Queue *queue) {
    printf("close queue\n");
}