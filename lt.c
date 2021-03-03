#include <stdio.h>
#include<stdlib.h>
int main() {
typedef struct nodes {
int val;
struct nodes * next;
} node;

node * curr, * head;
head = NULL;

curr = (node *)malloc(sizeof(node));
curr->val = 10;
curr->next  = head;
head = curr;

curr = (node *)malloc(sizeof(node));
curr->val = 20;
curr->next  = head;
head = curr;

curr = head;

while(curr) {
printf("%d\n", curr->val);
curr = curr->next ;
}

return 0;
}
