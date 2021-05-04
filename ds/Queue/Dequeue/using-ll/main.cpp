#include <iostream>
using namespace std;


int main(){
    cout<<"let's insert at front: "<<endl;
    insertAtFront(23);
    insertAtFront(94);
    insertAtFront(7);
    insertAtFront(3);
    insertAtFront(13);
    insertAtFront(89);
    display(first);
    cout<<"let's insert at rear: "<<endl;
    insertAtRear(3);
    display(first);
    cout<<"let's delete at rear: "<<endl;
    deleteAtRear();
    display(first);
    cout<<"let's delete at front: "<<endl;
   deleteAtFront();
   display(first);
    return 0;
}