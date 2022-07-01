#include <iostream>
#define Size 5
class Queue
{
private:
    int _Head;
    int _Tail;
    int _Queue[Size];
public :
    Queue (int Head, int Tail);
    bool IsEmpty();
    void Enqueue(int Element);
    int Dequeue();
};