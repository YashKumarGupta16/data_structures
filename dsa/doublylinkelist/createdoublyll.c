#include <stdio.h>
#include <stdlib.h>

struct node {
    struct node* prev;
    int data;
    struct node* next;
};

void printdata(struct node* head) {
    printf("The data of your linked list is respectively: ");
    struct node* ptr = head;
    while (ptr != NULL) {
        printf("%d ", ptr->data);
        ptr = ptr->next;
    }
    printf("\n");
}

struct node* addatend(struct node* temp, int key) {
    struct node* new_node = (struct node*)malloc(sizeof(struct node));
    temp->next = new_node;
    new_node->data = key;
    new_node->prev = temp;
    new_node->next = NULL;
    return new_node;
}

struct node* createnode(struct node* head, int n) {
    if (n == 0) {
        return head;
    }

    head = (struct node*)malloc(sizeof(struct node));
    head->prev = NULL;
    printf("Enter the data of first node: ");
    scanf("%d", &head->data);
    head->next = NULL;

    if (n > 1) {
        struct node* temp = head;
        for (int i = 2; i <= n; i++) {
            int key;
            printf("Enter the data of node %d: ", i);
            scanf("%d", &key);
            temp = addatend(temp, key);
        }
    }
    printf("Your doubly linked list has been created successfully\n");
    return head;
}

int main() {
    struct node* head = NULL;
    int n;
    printf("Enter the number of nodes: ");
    scanf("%d", &n);

    head = createnode(head, n);

    int k;
    printf("Do you want to print the data? Click 1 for yes and 0 for no: ");
    scanf("%d", &k);
    if (k == 1) {
        printdata(head);
    } else {
        printf("Fine..we will not print your data\n");
    }
    return 0;
}
