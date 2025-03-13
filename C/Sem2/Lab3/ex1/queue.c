#include <stdio.h>
#include <stdlib.h>

#include "queue.h"

#define MAX_SIZE 5 // Define the maximum size of the queue

void initializeQueue(Queue *q) {
    q->front = -1;
    q->rear = -1;
}

int isEmpty(Queue *q) {
    return (q->front == -1);
}

int isFull(Queue *q) {
    return (q->rear == MAX_SIZE - 1);// return ((q->rear + 1) % MAX_SIZE == q->front);
}

void enqueue(Queue *q, int value) {
    if (isFull(q)) {
        printf("Queue is full! Cannot enqueue %d\n", value);
        return;
    }
    if (isEmpty(q)) {
        q->front = 0;
    }
    q->rear++;
    q->items[q->rear] = value;
    printf("Enqueued: %d\n", value);
}

int dequeue(Queue *q) {
    if (isEmpty(q)) {
        printf("Queue is empty! Cannot dequeue.\n");
        return -1;
    }
    int dequeuedValue = q->items[q->front];
    printf("Dequeued: %d\n", dequeuedValue);


    if (q->front == q->rear) { // If the queue becomes empty after dequeuing
        initializeQueue(q);
    } else {
        q->front++;
    }
    return dequeuedValue;
}

void display(Queue *q) {
    if (isEmpty(q)) {
        printf("Queue is empty.\n");
        return;
    }
    printf("Queue elements: ");
    for (int i = q->front; i <= q->rear; i++) {
        printf("%d ", q->items[i]);
    }
    printf("\n");
}
