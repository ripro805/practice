#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define nl "\n"


class Node
{
public:
    int val;
    Node *next;
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
    }
};
void insert_at_tail(Node *&head, Node *&tail, int val) // o(1)
{
    Node *newnode = new Node(val);
    // cornercase
    if (head == NULL)
    {
        head = newnode;
        tail = newnode;
        return;
    }
    tail->next = newnode;
    tail = tail->next; // for perfectly track'.......
}
void print_linklist(Node *head)
{
    Node *tmp = head;
    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
}
bool are_equal(Node* &head1, Node* & head2){
    while(head1!=NULL && head2!=NULL){
        if(head1->val!=head2->val){
            return false;
        }
        head1=head1->next;
        head2=head2->next;
    }
    return (head1==NULL && head2==NULL);
}

int main()
{

   Node *head1 = NULL; 
   Node*tail1 = NULL;
    Node *head2 = NULL; 
    Node *tail2 = NULL;
    int val;

    while (true)
    {
        cin >> val;
        if (val == -1)
        {
            break;
        }
        insert_at_tail(head1, tail1, val);
    }

     while (true)
    {
        cin >> val;
        if (val == -1)
        {
            break;
        }
        insert_at_tail(head2, tail2, val);
    }

   if(are_equal(head1,head2)){
    cout<<"YES"<<nl;
   }
   else{
    cout<<"NO"<<nl;
   }

   
    
    return 0;
}