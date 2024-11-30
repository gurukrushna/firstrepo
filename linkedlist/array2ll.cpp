/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <bits/stdc++.h>
class Node{
    public:
    int data;
    Node * loc;
    Node( int num , Node * ptr){
        data = num;
        loc = ptr;
    }
    Node( int num){
        data = num;
        loc = NULL;
    }
};
using namespace std;

//ll creating

Node* arr2ll(int arr[],int len){
    int i = len -1;
    Node* mover;
    while( i >= 0){
        if (i == len-1){
            Node* temp = new Node( arr[i] ,NULL );
            mover = temp;
        }
        else{
            Node* temp = new Node( arr[i] , mover );
            mover = temp ;
        }
        i--;
    }
    return mover;
}

//another way create ll

Node* arr2ll2(int arr[]){
    int i =1;
    Node * temp = new Node(arr[0]) ;
    Node * mover2= temp ;
    Node * head = temp;
    while (i<5){
        temp = new Node(arr[i]) ;
        mover2->loc = temp;
        mover2 = temp;
        i++;
    }
    return head;
}

//traversing through the ll

void lltraversal(Node* ll){
    Node* temp = ll;
    while(temp){                                            //temp will be null in the end
        cout<< temp->data<<" ";
        temp = temp->loc;
    }
}



int main()
{
    int arr[5] = {0,1,2,3,4};
    cout<<"head of ll converted from arr by 1st method  "<<arr2ll(arr,5)->data<<endl;
    cout<<"head of ll converted from arr by 2st method  "<<arr2ll2(arr)->data<< endl;
    lltraversal(arr2ll2(arr));

    return 0;
}