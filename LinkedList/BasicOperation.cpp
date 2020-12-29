#include <bits/stdc++.h>
using namespace std;


struct Node{
    int data;
    Node* next;
};
 
struct Node* head;


void Insert(int data,int n){
    Node *temp1=new Node();
    temp1->data=data;
    temp1->next=NULL;
    if(n==1){
        temp1->next=head;
        head=temp1;
        return;
    } 
    Node* temp2=head;
    for(int i=0;i<n-2;i++){
        temp2=temp2->next;
    }
    temp1->next=temp2->next;
    temp2->next=temp1;
}

void Delete(int n){
    Node* temp1=head;
    if(n==1){
        head=temp1->next;
        free(temp1);
        return;
    }

    for(int i=0;i<n-2;i++){
        temp1=temp1->next;
    }   
    Node* temp2=temp1->next;
    temp1->next=temp2->next;
    free(temp2);

}

void Print(){
    Node* temp=head;
    while(temp->next!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next; 
    }
    cout<<"\n";
}

int main(){

head=NULL;

Insert(5,1);
Insert(8,2);
Insert(25,1);
Insert(45,3);
Insert(7,4);
Print();
Delete(3);
Delete(1);
Print();

}