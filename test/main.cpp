#include <iostream>
using namespace std;
struct Queue
{
    int Head;
    int Tail;
    int Queue[5];
    bool IsEmpty()
    {
        if (Head == -1)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    void Enqueue(int Element)
    {
        if ((Head == 0) && (Tail == sizeof(Queue)/sizeof(Queue[0]) - 1))
        {
            throw out_of_range (", you cant enqueue any more elements");
        }
        if (Head == -1)
        {
            Head = 0;
        }
        Tail = Tail + 1;
        Queue [Tail] = Element;
    }
    int Dequeue()
    {
        if (IsEmpty())
        {
            throw out_of_range ("the queue is empty");
        }
        int FirstElement;
        FirstElement = Queue[Head];
        Head = Head + 1;
        return FirstElement;
    }
};
int main()
{
    Queue Q1;
    Q1.Head = -1;
    Q1.Tail = -1;
    Q1.IsEmpty();
    try
    {
        Q1.Enqueue(1);
        Q1.Enqueue(2);
        Q1.Enqueue(3);
        Q1.Enqueue(4);
        Q1.Enqueue(5);
        Q1.Enqueue(6);
    }
    catch(out_of_range &Exception)
    {
        cout << "Error : its out of queue's size " << Exception.what() << endl;
    }
    Q1.IsEmpty();
    cout << "the queue's elements are : " << endl;
    for (int i : Q1.Queue)
    {
        cout << i << ", ";
    }
    cout << endl;
    try
    {
        cout << "the element that gets out is : " << Q1.Dequeue() << endl;
    }
    catch(out_of_range &Exception)
    {
        cout << "\n Error, "<< Exception.what() << endl;
    }
}