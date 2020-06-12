SinglyLinkedListNode* insertNodeAtPosition(SinglyLinkedListNode* head, int data, int position) {

    SinglyLinkedListNode* insert=(struct SinglyLinkedListNode*) malloc(sizeof(struct                                                                       SinglyLinkedListNode));

    insert->data=data;

    if(head==NULL)
        return insert;

    if (position == 0) {
       insert->next = head;
       return insert;
    }

    SinglyLinkedListNode* temp=head;
    for(int i=0;i<position-1;i++)
    {
        temp=temp->next;
    }
    if(temp==NULL)
        return 0;

    insert->next=temp->next;
    temp->next=insert;

    return head;
}