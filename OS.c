#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>

int N = 10; // Maximum number of chocolates the box can hold
int count = 0; // Number of chocolates in the box
pthread_mutex_t m = PTHREAD_MUTEX_INITIALIZER; // Mutex for synchronization
pthread_cond_t fullBox = PTHREAD_COND_INITIALIZER; // Condition variable for a full box
pthread_cond_t emptyBox = PTHREAD_COND_INITIALIZER; // Condition variable for an empty box

// Child Thread
void *childThread(void *arg) {
    while (1) {
        // Lock the mutex to perform operations on the box
        pthread_mutex_lock(&m);

        // Check if the box is empty
        while (count == 0) {
            // The box is empty, so wake up the mother and wait for a refill
            printf("Child: Box is empty. Waking up the mother...\n");
            pthread_cond_signal(&emptyBox); // Signal the mother to refill
            pthread_cond_wait(&fullBox, &m); // Wait for the box to be refilled
        }

        // Child takes a chocolate from the box
        count--;
        printf("Child: Took a chocolate. Chocolates left: %d\n", count);

        // Unlock the mutex
        pthread_mutex_unlock(&m);

        // Child eats the chocolate
        printf("Child: Eating the chocolate...\n");
    }
}

// Mother Thread
void *motherThread(void *arg) {
    while (1) {
        // Lock the mutex to perform operations on the box
        pthread_mutex_lock(&m);

        // Check if the box is full
        while (count == N) {
            // The box is full, so wait for the child to consume chocolates
            printf("Mother: Box is full. Waiting for the child...\n");
            pthread_cond_wait(&emptyBox, &m); // Wait for the box to be empty
        }

        // Refill the box with N chocolates
        count = N;
        printf("Mother: Refilled the box. Chocolates available: %d\n", count);

        // Signal the child that the box is full now
        pthread_cond_broadcast(&fullBox);

        // Unlock the mutex
        pthread_mutex_unlock(&m);
    }
}

int main() {
    pthread_t child, mother;

    // Create child and mother threads
    pthread_create(&child, NULL, childThread, NULL);
    pthread_create(&mother, NULL, motherThread, NULL);

    // Wait for threads to finish (in a real application, you would need to use pthread_join)
    pthread_join(child, NULL);
    pthread_join(mother, NULL);

    return 0;
}
