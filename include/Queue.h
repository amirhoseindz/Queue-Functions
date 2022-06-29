#include <iostream>
class Queue
{
private:
    int _Head;
    int _Tail;
    int _Queue[5];
public :
    Queue (int Head, int Tail);
    bool IsEmpty();
    void Enqueue(int Element);
    int Dequeue();
};