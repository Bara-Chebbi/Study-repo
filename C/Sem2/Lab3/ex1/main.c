#include <stdio.h>
#include <stdlib.h>
#include "queue.h"

int main() {
    Queue q;
    initializeQueue(&q);

    enqueue(&q, 10);
    enqueue(&q, 20);
    enqueue(&q, 30);
    enqueue(&q, 40);
    enqueue(&q, 50);
    enqueue(&q, 60); // This should show "Queue is full"

    display(&q);

    dequeue(&q);
    dequeue(&q);

    display(&q);

    return 0;
}
