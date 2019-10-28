#ifndef AAP_QUEUE_H
#define AAP_QUEUE_H

struct Queue;

struct Queue * create_queue(size_t capacity);

void close_queue(struct Queue *queue);

#endif