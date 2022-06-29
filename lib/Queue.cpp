#include "../include/Queue.h"
using namespace std;
Queue :: Queue (int Head, int Tail)
{
    _Head = Head;
    _Tail = Tail;
}
bool Queue :: IsEmpty()
{
    if (_Head >= _Tail)
    {
        _Head = -1;
        _Tail = 0;
    }
    if (_Head == -1)
    {
        return true;
    }
    else
    {
        return false;
    }
}
void Queue :: Enqueue(int Element)
{
    _Queue [_Tail] = Element;
    if (_Tail == sizeof(_Queue)/sizeof(_Queue[0]) - 1)
    {
        throw out_of_range (", you cant enqueue any more elements");
    }
    _Tail = _Tail + 1;
    if (_Head == -1)
    {
        _Head = 0;
    }
}
int Queue :: Dequeue()
{
    if (IsEmpty())
    {
        throw out_of_range ("the queue is empty");
    }
    int FirstElement;
    FirstElement = _Queue[_Head];
    _Head = _Head + 1;
    return FirstElement;
}