#include <iostream>
#include "linked_list.h"

using namespace std;
int main(int argc, char const *argv[])
{
    // 带头节点的单链表，且头节点的数据域存储链表的长度
    LinkList L;
    CreateList_L(L, 3);
    ListTraverse_L(L);
    cout<< "length: " << L->data << endl;

    ElemType ele;
    GetElem_L(L, 2, ele);
    cout << "element at position 2 is: " << ele << endl;

    ListInsert_L(L, 2, 9);
    cout << "insert element 9 at position 2" << endl;
    cout<< "length: " << L->data << endl;
    ListTraverse_L(L);

    ElemType del;
    ListDelete_L(L, 1, del);
    cout << "delete element at position 1 is: " << del << endl;
    cout<< "length: " << L->data << endl;
    ListTraverse_L(L);

    ClearList_L(L);
    cout << "clear list" << endl;
    cout<< "length: " << L->data << endl;

    return 0;
}
