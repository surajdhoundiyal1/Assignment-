#include <bits/stdc++.h> 
/****************************************************************

    Following is the class structure of the LinkedListNode class:

    template <typename T>
    class LinkedListNode
    {
    public:
        T data;
        LinkedListNode<T> *next;
        LinkedListNode(T data)
        {
            this->data = data;
            this->next = NULL;
        }
    };

*****************************************************************/

bool isPalindrome(LinkedListNode<int> *head) {
    // Write your code here.
    vector<int>arr;
    while(head!=NULL){
        arr.push_back(head->data);
        head=head->next;
    }
    
    for(int i=0,j=arr.size()-1 ;i<arr.size(), j>=0 ;i++,j--){
        
            if(arr[i]!=arr[j]) return false; 
        }
      
    
  return true;

}
