#define MAX_SIZE 5 // Define the maximum size of the queue

typedef struct {
    int items[MAX_SIZE];
    int front, rear;
} Queue;


void initializeQueue(Queue *q);

int isEmpty(Queue *q);
int isFull(Queue *q) ;

// Function to enqueue an element
void enqueue(Queue *q, int value) ;
// Function to dequeue an element
int dequeue(Queue *q);

void display(Queue *q) ;

