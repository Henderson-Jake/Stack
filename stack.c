#include "stack.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

Node* createNode(int val){
	Node* n = malloc(sizeof(Node));

	n->val = val;
	n->next = NULL;

	printf("created node with val %d\n", val);

	return n;
}

void push(Node** head, Node* n) {
	n->next = *head;
	*head = n;

	printf("Pushed %d!!\n", (*head)->val);
}

void pop(Node** head){
	if(isEmpty(*head)) {
		printf("cannot pop an empty stack!!");
		exit(1);
	}

	Node* n = malloc(sizeof(Node));
	n = *head;
	*head = (*head)->next;
	printf("popped %d!!\n", n->val);
	free(n);
}

bool isEmpty(Node* head){
	if(head == NULL){
		return 1;
	}
	else {
		return 0;
	}
}

void peek(Node* head){
	if(isEmpty(head)) {
		perror("cannot peek an empty stack!!\n");
		return;
	}
	printf("peeked %d!!\n", head->val);
}

Node* destroy(Node* head) {
	if(head == NULL) {
		return NULL;
	}
	head = destroy(head->next);
	free(head);

	return NULL;
}

