
#include <iostream>
#include <cstdio>
#include <cstring>
#include <cstdlib>

using namespace std;

struct Node
{
  int priority;
  int data;
  struct Node *next;
}*front=NULL, *rear=NULL,*temp;

  void enqueue(int value, int p)
  {
    Node  *q;
    temp = new Node;
    temp->data = value;
    temp->priority = p;
    if (front == NULL || p < front->priority)
    {
      temp->next = front;
      front= temp;
    }
    else
    {
      q = front;
      while (q->next != NULL && q->next->priority <= p)
        q = q->next;
      temp->next = q->next;
      q->next = temp;
    }
  }

  void dequeue()
  {
    if (front == NULL) cout << "Queue is empty\n";

    temp = front;
    cout << "Dequeued item is: " << temp->data << endl;
    front = front->next;
    free(temp);

  }

  void display()
  {
    Node *ptr;
    ptr = front;
    if (front == NULL)cout << "Queue is empty\n";

    while (ptr != NULL)
    {
        cout << "Data (" <<ptr->data<< ") ==> It's Priority (" << ptr->priority <<")"<< endl;
        ptr = ptr->next;
    }
  }

int main()
{

  int data, priority,choice,flag=1;
           cout<<"\t\t\t\tPRIORITY QUEUE 2"<<endl;

     while( flag == 1)
     {
      cout<<"\t\t\t\n1.enqueue \t\t\t\n2.dequeue \t\t\t\n3.displayQueue \t\t\t\n4.exit\n";
      cin>>choice;
      switch (choice)
      {
      case 1: cout<<"Enter Data:\n";
              cin>>data;
              cout<<endl;
              cout<<"Enter Priority:\n";
              cin>>priority;
              enqueue(data,priority);
              break;
      case 2: dequeue();
              break;
      case 3: display();
              break;
      case 4: flag = 0;
              break;
      default: flag=1;
          break;
      }
     }
  return 0;
}
