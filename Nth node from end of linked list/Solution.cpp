class Solution{
public:
    int getNthFromLast(Node *head, int n)
{
       Node* i = head;
       Node* j = head;
       for(int x = 0; x < n; x++){
           if(j == NULL) return -1;
           j = j -> next;
       }
       while(j != NULL){
           i= i-> next;
           j = j-> next;
       }
       int ans = i->data;
       return ans;
}
};
