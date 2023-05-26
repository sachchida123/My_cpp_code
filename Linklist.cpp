#include<bits/stdc++.h>
using namespace std;
class node{
    public:
    int data;
    node *next;
    node(int inputdata){
        data=inputdata;
        next=NULL;
    }
};
void InsertAtHead(node* &head,int value){
    node* n=new node(value);
        n->next=head;
        head=n;
    }
    void print(node *head){
        while(head!=NULL){
            cout<<head->data<<" -> ";
            head=head->next;
        }
        cout<<"null"<<endl;
    }

int main(){
    int n;
    cin>>n;
    node* head=NULL;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        InsertAtHead(head,x);
        
    }
    print(head);
}