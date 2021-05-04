#include <iostream>
#define MAX 5
using namespace std;

int Q[MAX], Pr[MAX];
int rear = -1, front = -1;

void enqueue(int data, int priority)
{
    int i ;
    if ((front == 0) && (rear == MAX - 1)){
         cout << "Queue is full";
    }

    else
    {
        if (front == -1)
        {
            front = rear = 0;
            Q[rear] = data;
            Pr[rear] = priority;
        }
        else
        {
            for (i= rear; i >= front; i--)
            {
                if (priority > Pr[i])
                {
                    Q[i + 1] = Q[i];
                    Pr[i + 1] = Pr[i];
                }
                else
                    break;
            }
            Q[i + 1] = data;
            Pr[i + 1] = priority;
            rear++;
        }
    }
}

void display()
{
    if (front == -1)
    {
        cout << "Queue is Empty";
    }
    else
    {
        for (int i = front; i <= rear; i++)
        {
        cout << "Data (" << Q[i] << ") ==> It's Priority (" << Pr[i] <<")"<< endl;
        }
    }

}

int dequeue()
{
    if (front == -1)
    {
        cout << "Queue is Empty";
    }
    else
    {
        cout << "deleted Element =" << Q[front] << endl;
        cout << "Its Priority = " << Pr[front] << endl;
        if (front == rear)
            front = rear = -1;
        else
            front++;
    }
}

int main()
{
    int data, priority,choice,flag=1;
           cout<<"\t\t\t\tPRIORITY QUEUE 1"<<endl;

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
