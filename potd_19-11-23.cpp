// Given two linked lists sorted in increasing order,
//create a new linked list representing the intersection of the two linked lists. The new linked list should be made with without changing the original lists.

  Node* findIntersection(Node* head1, Node* head2)
    {
        // code goes here.
        if(head1==NULL) return head2;
        if(head2==NULL) return head1;
        Node * head = new Node(-1) ;
        Node * curr= head;
        
        while(head1!=NULL && head2!=NULL){
            if(head1->data < head2->data){
                head1= head1->next;
            }
            else if(head1->data > head2->data){
                head2=head2->next;
            }
            else {
                curr->next = new Node(head1->data);
                head1=head1->next;
                head2=head2->next;
                curr=curr->next;
            }
            
        }
        return head->next;
        
    }
