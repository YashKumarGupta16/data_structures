// suppose we have the access of tail

// struct node* p=tail->next;
// printf("%d ",p->data);
//     p=p->next;
 // while(p != tail->next)
// {
//     printf("%d ",p->data);
//     p=p->next;
// }


//insertion_at_end
// newp->next=tail->next;
// tail->next=newp;
// tail=tail->next;

//insertion in between
// p=tail->next;
// for(i=1;i<pos-1;i++)
// {
//     p=p->next;
// }
// newp->next=p->next;
// p->next=newp;
