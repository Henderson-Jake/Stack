#include "stack.h"
#include <stdio.h>
#include <stdlib.h>

int main(void){
	int x = 1,y = 1;
	Node* head = malloc(sizeof(Node));
	printf("Stack Simulator\n");

	do {
		printf("--------------------------------\n1 - push || 2 - pop || 3 - peek || 4 - destroy\n--------------------------------\n");
		scanf("%d", &x);
		
		if(x == 1) {
			printf("enter value to push to stack:\n");
			scanf("%d", &y);
			Node* n = createNode(y);
			push(&head, n);
		}
		else if(x == 2){
			pop(&head);
		}
		else if(x == 3) {
			peek(head);
		}
		else if(x == 4) {
			head = destroy(head);
		}
		else {
			printf("please enter an integer value 1-4\n");
		}
	}while(x != 4);
	return 0;
}
