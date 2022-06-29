#include <iostream>
#include "../include/Queue.h"
using namespace std;
int main()
{
    int Head = -1;
    int Tail = 0;
    Queue Q1(Head, Tail);
    if (Q1.IsEmpty())
        cout << "true" << endl;
    else
        cout << "false" << endl;
    try
    {
        Q1.Enqueue(1);
    }
    catch(out_of_range &Exception)
    {
        cout << "Error : its out of queue's size " << Exception.what() << endl;
    }
    if (Q1.IsEmpty())
        cout << "true" << endl;
    else
        cout << "false" << endl;
    try
    {
        Q1.Enqueue(2);
        Q1.Enqueue(3);
    }
    catch(out_of_range &Exception)
    {
        cout << "Error : its out of queue's size " << Exception.what() << endl;
    }
    try
    {
        cout << "the element that gets out is : " << Q1.Dequeue() << endl;
    }
    catch(out_of_range &Exception)
    {
        cout << "\n Error, "<< Exception.what() << endl;
    }
    if (Q1.IsEmpty())
        cout << "true" << endl;
    else
        cout << "false" << endl;
    try
    {
        cout << "the element that gets out is : " << Q1.Dequeue() << endl;
    }
    catch(out_of_range &Exception)
    {
        cout << "\n Error, "<< Exception.what() << endl;
    }
    try
    {
        cout << "the element that gets out is : " << Q1.Dequeue() << endl;
    }
    catch(out_of_range &Exception)
    {
        cout << "\n Error, "<< Exception.what() << endl;
    }
    if (Q1.IsEmpty())
        cout << "true" << endl;
    else
        cout << "false" << endl;
    try
    {
        Q1.Enqueue(4);
        Q1.Enqueue(5);
    }
    catch(out_of_range &Exception)
    {
        cout << "Error : its out of queue's size " << Exception.what() << endl;
    }
    if (Q1.IsEmpty())
        cout << "true" << endl;
    else
        cout << "false" << endl;
    try
    {
        Q1.Enqueue(6);
    }
    catch(out_of_range &Exception)
    {
        cout << "Error : its out of queue's size " << Exception.what() << endl;
    }
    try
    {
        cout << "the element that gets out is : " << Q1.Dequeue() << endl;
    }
    catch(out_of_range &Exception)
    {
        cout << "\n Error, "<< Exception.what() << endl;
    }
    try
    {
        cout << "the element that gets out is : " << Q1.Dequeue() << endl;
    }
    catch(out_of_range &Exception)
    {
        cout << "\n Error, "<< Exception.what() << endl;
    }
    if (Q1.IsEmpty())
        cout << "true" << endl;
    else
        cout << "false" << endl;
    try
    {
        cout << "the element that gets out is : " << Q1.Dequeue() << endl;
    }
    catch(out_of_range &Exception)
    {
        cout << "\n Error, "<< Exception.what() << endl;
    }
    if (Q1.IsEmpty())
        cout << "true" << endl;
    else
        cout << "false" << endl;
}