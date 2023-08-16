//linear data type jo ki collection of nodes se bnta hai
//node is type of encapsulation which include data type,function etc
//node contain a data and address of next node
//why linked list--> 10 ke size ke array ko run time ke dauran change nhi kr skte ki isko 100 size ka array bana do
//but in vector(dynamic array) me 5 ke size la array full ho jane ke baad vo apna size double kr deta hai,but it is not optimal
//linked list is dynamic data structure
//it will grow nd shrink array on run time
//apki memory wastage nhi ho rhi
//yaha insertion nd deletion me array ko shift nhi krna hota
//type of linked list single,doubly,circular,circular doubly linked list


// #include<iostream>
// using namespace std;
// class node{
//     public:
//     int data;
//     node* next;
//     node(int data){
//         this->data=data;
//         this->next=NULL;
//     }
// };
// int main(){
//     node* node1= new node(10);
//     cout<<node1->data<<endl;
//     cout<<node1-> next<<endl;
//     return 0;
// } 

//singly linked list
//jaha apne pass sirf ek single pointer hota haizage jane ke liye next pointer hota hai aur ek data stored kr shkte hai iss prakar ke list ko single linked list bolte hai
// #include<iostream>
// using namespace std;
// class node{
//     public:
//     int data;
//     node* next;
//     node(int data){
//         this->data=data;
//         this->next=NULL;
//     }
// };
// int main(){
//     node* node1= new node(10);
//     cout<<node1 -> data<<endl;
//     cout<<node1-> next<<endl;
//     return 0;
// }

//insertion linked list
// #include<iostream>
// using namespace std;
// class node{
//     public:
//     int data;
//     node* next;
//     node(int data){
//         this->data=data;
//         this->next=NULL;
//     }
// };
// void InsertAtHead(node* &head, int d){
//     node* temp = new node(d);
//     temp -> next = head;
//     head =temp;
// }

// void print(node* &head){
//     node* temp = head;
//     while(temp != NULL){
//         cout<< temp -> data<<" ";
//         temp = temp -> next;
//     }
//     cout<<endl;
// }
// int main(){
//     //created new node
//     node* node1= new node(10);
//     // cout<<node1 -> data<<endl;
//     // cout<<node1-> next<<endl;

//     //head pointed to node1
//     node* head = node1;
//     print(head);
//     InsertAtHead(head, 12);
//     print(head);
//     InsertAtHead(head, 15);
//     print(head);
//     return 0;
// }


//26:00 at video
//agar hm input 10 20 30 40 dal rhe hai to output 40 30 20 10 ata hai
//if we want output same as input then 
// #include<iostream>
// using namespace std;
// class node{
//     public:
//     int data;
//     node* next;
//     node(int data){
//         this->data=data;
//         this->next=NULL;
//     }
// };
// void InsertAtTail(node* &tail,int d){
//     node* temp = new node(d);
//     tail -> next = temp;
//     tail = temp;
// }

// void print(node* &head){
//     node* temp = head;
//     while(temp != NULL){
//         cout<< temp -> data<<" ";
//         temp = temp -> next;
//     }
//     cout<<endl;
// }
// int main(){
//     //created new node
//     node* node1= new node(10);
//     // cout<<node1 -> data<<endl;
//     // cout<<node1-> next<<endl;

//     //head pointed to node1
//     node* head = node1;
//     node* tail = node1;
//     print(head);
//     InsertAtTail(tail, 12);
//     print(head);
//     InsertAtTail(tail, 15);
//     print(head);
//     return 0;
// }

//insert link list at specific position
// #include<iostream>
// using namespace std;
// class node{
//     public:
//     int data;
//     node* next;
//     node(int data){
//         this->data=data;
//         this->next=NULL;
//     }
// };
// void InsertAtPosition(node* &head,int pos,int d){
//     // if(pos == 1){
//     //     InsertAtHead(head, d);
//     //     return; 
//     // }
//     node* temp = head;
//     int cnt = 1;
//     while(cnt < pos-1){
//         temp = temp->next;
//         cnt++;
//     }
//     //creating node for d
//     node* NodeToInsert = new node(d);
//     NodeToInsert-> next = temp-> next;
//     temp -> next= NodeToInsert;
// }
// void InsertAtTail(node* &tail,int d){
//     node* temp = new node(d);
//     tail -> next = temp;
//     tail = temp;
// }
// void InsertAtHead(node* &head, int d){
//     node* temp = new node(d);
//     temp -> next = head;
//     head =temp;
// }

// void print(node* &head){
//     node* temp = head;
//     while(temp != NULL){
//         cout<< temp -> data<<" ";
//         temp = temp -> next;
//     }
//     cout<<endl;
// }
// int main(){
//     //created new node
//     node* node1= new node(10);
    

//     //head pointed to node1
//     node* head = node1;
//     node* tail = node1;
//     print(head);
//     InsertAtTail(tail, 12);
//     print(head);
//     InsertAtTail(tail, 15);
//     print(head);
//     InsertAtPosition(head,3,22);
//     print(head);
//     // InsertAtPosition(head,1,55);
//     // print(head);
//     return 0;
// }



//