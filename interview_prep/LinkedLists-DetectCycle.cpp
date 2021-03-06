/*
Detect a cycle in a linked list. Note that the head pointer may be 'NULL' if the list is empty.

A Node is defined as: 
    struct Node {
        int data;
        struct Node* next;
    }
*/

bool has_cycle(Node* head) {
    // Complete this function
    // Do not write the main method
    bool result = false;
    if(head == NULL)
        return result;
    Node* slow = head;
    Node* fast = head->next;
    while(slow != NULL || fast != NULL){
        if(slow == fast){
            result = true;
            break;
        }
        else{
            slow = slow->next;
            if(fast->next != NULL)
                fast = fast->next->next;
            else
                break;
        }
    }
    
    return result;
     
}