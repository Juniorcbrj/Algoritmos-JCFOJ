#ifndef HEADER_H_INCLUDED
#define HEADER_H_INCLUDED

struct Node
{
    double num;
    struct Node * next;
    struct Node * previous;
};

typedef struct Node node;

class CircularList
{
private:
    struct Node * position;
public:
    void Createheadlist();
    void AddLista();
    double CatchvaluePosition();
    void RemoveNode();
    void PointPositionNext();
    void PointPositionPrevious();
    void test();
};

