void deleteAlt(struct Node *head){
    // Code here
    Node*p=head; 
    Node*q=head; 
    Node*r=head; 
    
    while(p!=NULL && p->next!=NULL){
        r=p->next; 
        q=q->next->next;
        
        p->next=q; 
        r->next=NULL; 
        p=p->next; 
        
        
        
    }
}
