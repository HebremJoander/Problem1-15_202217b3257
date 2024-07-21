//202217b3257 - Hebrem Joander P

#include <stdio.h>

#define QUEUE_SIZE 5 // Change this value as needed

int queue[QUEUE_SIZE];
int front = 0; // Initialize front
int rear = -1; // Initialize rear

// Function to check if the queue is full
int isFull() {
    return rear == QUEUE_SIZE - 1;
}

// Function to check if the queue is empty
int isEmpty() {
    return rear < front;
}

// Function to insert an element into the queue (enqueue)
void enqueue(int item) {
    if (isFull()) {
        printf("Queue is full. Cannot insert.\n");
        return;
    }
    queue[++rear] = item;
}

// Function to remove an element from the queue (dequeue)
void dequeue() {
    if (isEmpty()) {
        printf("Queue is empty. Cannot dequeue.\n");
        return;
    }
    printf("Dequeued element: %d\n", queue[front++]);
}

// Function to display the queue
void displayQueue() {
    if (isEmpty()) {
        printf("Queue is empty.\n");
        return;
    }
    printf("Queue elements: ");
    for (int i = front; i <= rear; i++) {
        printf("%d ", queue[i]);
    }
    printf("\n");
}

int main() {
    int choice, item;

    while (1) {
        printf("\nQueue Operations:\n");
        printf("1. Enqueue (Insert)\n");
        printf("2. Dequeue (Remove)\n");
        printf("3. Display Queue\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter the element to enqueue: ");
                scanf("%d", &item);
                enqueue(item);
                break;
            case 2:
                dequeue();
                break;
            case 3:
                displayQueue();
                break;
            case 4:
                printf("Exiting program.\n");
                return 0;
            default:
                printf("Invalid choice. Try again.\n");
        }
    }

    return 0;
}
