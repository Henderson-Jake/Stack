#ifndef STACK_H
#define STACK_H
#include <stdbool.h>

typedef struct Node {
	int val;
	struct Node *next;
}Node;

Node* createNode(int);
void push(Node**, Node*);
void pop(Node**);
bool isEmpty(Node*);
void peek(Node*);
Node* destroy(Node*);


#endif
