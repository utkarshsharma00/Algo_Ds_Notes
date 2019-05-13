#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class LinkedList
{
  private:
    class Node
    {
      public:
        int data;
        Node *next;
    };

    Node *head;
    Node *tail;
    int size;
    
  public:
    void addLast(int data)
    {
        if (size == 0)
        {
            handleAddWhenSizeis0(data);
        }
        else
        {
            Node *nn = new Node();
            nn->data = data;
            nn->next = NULL;
            tail->next = nn;
            tail = nn;
            size++;
        }
    }
};    
