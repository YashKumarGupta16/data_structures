// suppose we have access of tail

// deleting first node
// struct node* temp=tail->next;
// tail->next=temp->next;
// free(temp);
// temp=null;

//deleting last node;

// p=tail->next;
// while(p->next!=tail)
// {
//     p=p->next;
// }
// p->next=tail->next;
// temp=tail;
// free(temp);
// tail=p;


// deting nth node
// p=tail->next;
// q=tail;
// for(int i=1;i<pos;i++)
// {
//     q=q->next;
//     p=p->next;
// }
// q->next=p->next;
// free(p);



