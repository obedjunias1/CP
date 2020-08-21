/*https://practice.geeksforgeeks.org/problems/nth-node-from-end-of-linked-list/1
reff: https://geekstocode.com/two-pointer-algorithm/
15-08-2020 14:25:14
*/


int getNthFromLast(Node *head, int n)
{
       // Your code here
       Node *first = head;
       Node *second = head;
       int i = 0;
       while(first!=NULL){
           if(i<n){
                first = first->next;
           }
           else{
               first = first->next;
               second = second->next;
           }
           i++;
       }
       if(first == NULL && n>i){
           return -1;
       }
       return second->data;
      
}

