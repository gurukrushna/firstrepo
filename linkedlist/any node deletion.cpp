

#include <bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node* ptr;
    Node(int Data, Node* loc){
        data = Data;
        ptr = loc;
    }
};
Node* arr2ll(vector<int> arr){
    int i = arr.size()-1;
    Node* temp;
    while(i>=0){
        Node* ptr = new Node(arr[i],NULL);
        if(i!=arr.size()-1)
            {ptr->ptr = temp;}
        temp = ptr;
        i--;
    }
    return temp;
}
void lltraversal(Node* ll){
    Node* temp = ll;
    while(temp){                                            //temp will be null in the end
        cout<< temp->data<<" ";
        temp = temp->ptr;
    }
}
Node* deletion(Node* head,int k){
    Node* temp = head;
    Node* temp2;
    int i=0;
    while(i<k){
        if(i==k-1){
            if(i!=0)
                {temp2->ptr = temp->ptr;
                 delete temp;}
            else{
                head= temp-> ptr;
                delete temp;
            }
        }
        else{
            temp2= temp;
            temp =temp->ptr;
            
        }
        i++;
        
    }
    return head;
}
int main()
{
  vector<int> arr = {1,2,3,4,5};  
    std::cout << arr2ll(arr)->data << std::endl;
    Node* newll = deletion(arr2ll(arr),3);
    lltraversal(newll);
    return 0;
}