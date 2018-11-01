#include <iostream>
#include <stdlib.h>
#include "header.h"

using namespace std;

int main()
{
    CircularList A;
    A.CreateHeadList();
    A.Test();

    return 0;
}

void CircularList::AddList()
{

    node * novo= new node;
    if(novo==NULL)
    {
        cout<<"\nSem espaço de memória suficiente"<<endl;
        exit(1);
    }
    else
    {
        node * after=position->next;
        novo->next=after;
        novo->previous=position;
        after->previous=novo;
        position->next=novo;
        position=novo;
    }
    cout<<"\nDigite o valor do elemento = ";
    cin>>novo->num;

}

double CircularList::CatchvaluePosition()
{

    return position->num;


}
void CircularList::CreateHeadList()
{

    node * head = new node;
    if(head==NULL)
    {
        cout<<"\nSem espaço de memória suficiente"<<endl;
        exit(1);
    }
    else
    {
        head->next=head;
        head->previous=head;
        position=head;
    }
}

void CircularList::RemoveNode()
{
    node * before=position->previous;
    node * after=position->next;

    cout<<"\nO elemento a ser removido é = "<<position->num<<endl;

    before->next=after;
    after->previous=after;
    node * removeelement=position;
    position=after;
    delete removeelement;

}

void CircularList::PointPositionNext()
{
    position=position->next;
}

void CircularList::PointPositionPrevious()
{
    position=position->previous;
}
void CircularList::test()
{
    int amount;
    double values;
    cout<<"\nEntre com o numero de elementos que se deseja adicionar na lista = ";
    cin>>amount;

    while (amount!=0)
    {
        AddLista();
        amount--;

    }
    values=CatchValuePos();
    cout<<"\nO valor do elemento ao qual position aponta = "<<values<<endl;

    PointPositionNext();
    values=CatchvaluePosition();
    cout<<"\nO valor do elemento ao qual position aponta = "<<values<<endl;

    PointPositionPrevious();
    values=CatchvaluePosition();
    cout<<"\nO valor do elemento ao qual position aponta = "<<values<<endl;

    RemoveNode();
    values=CatchvaluePosition();
    cout<<"\nO valor do elemento ao qual position aponta = "<<values<<endl;

    PointPositionPrevious();
    values=CatchvaluePosition();
    cout<<"\nO valor do elemento ao qual position aponta = "<<values<<endl;
}
