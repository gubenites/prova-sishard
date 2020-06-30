#include <stdio.h>
#include <stdlib.h>

typedef struct {
	int *data;
	int capacity, n;
} queue;

queue *create_queue(int n) {
	queue *q = malloc(sizeof(queue));
	q->data = malloc(sizeof(int) * n);
    q->capacity = n;
    q->n = 0;
	return q;
}

void destroy_queue(queue *q) {
	free(q);
}

void queue_add(queue* q, int i) {
	q->data[q->n] = i;
	q->n++;
}

int queue_pop(queue *q) {
    int r = q->data[0];
    for (int i = 0; i < q->n; i++) {
        q->data[i-1] = q->data[i];
    }
	return r;
}

int main() {
	queue *q = create_queue(4);
	queue_add(q, 10);
	queue_add(q, 20);
	queue_add(q, 30);
	queue_add(q, 40);
	queue_add(q, 50);
	for (int i = 0; i < 5; i++) {
		printf("Next: %d\n", queue_pop(q));
	}
	destroy_queue(q);
}
