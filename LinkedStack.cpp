#include <iostream>
using namespace std ;
// Linked stack
template <class type>
class stack{
    // Private attributes (private by default)
    struct node {
        type item ;
        node *next ;
    };
    node *top ;
    node *current ; // Create a clone variable to display stack
public:
    stack()
    {
        top = NULL ;
    }
    void push(type element)
    {
        // What we should to do to push an element
        node *elementPointer = new node ;
        if (elementPointer == NULL)
            cout << "Stack can not allocate memory .\n" ;
        else {
            elementPointer->item = element;
            elementPointer->next = top;
            top = elementPointer;
        }
    }
    bool isEmpty()
    {
        // If top pointer is null >>> that's mean we have
        // an empty stack && the statement below will achieve that.
        return top == NULL ;
    }
    void pop ()
    {
        // First we have to check if stack is empty or not
        if (isEmpty())
            cout << "Stack is empty\n" ;
        else {
           node *temp = top ;
           top = temp -> next ;
           temp -> next = NULL ;
           delete temp ;
        }
    }
    type getTop ()
    {
        return top -> item ;
    }
    void displayStack()
    {
        // To print stack's elements
        current = top ;
        while (current != NULL)
        {
            cout << current -> item << " " ;
            current = current -> next ;
        }
        cout << "\n" ;
    }



};
int main()
{
// Driver function
    stack <int> s ;
      s.push(1000) ;
      s.pop() ;
      s.push(50) ;
      s.displayStack() ;




return 0 ;
}