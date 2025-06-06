#include "tree.h"
#include <queue>
template <typename T>
bool putin(tree<T>** pos, queue<tree<T>*>* list)
{
    if (list == nullptr || list->empty())
        return true;
    if (*pos == nullptr) {
        *pos = new tree(list->front()->data);
    } else {
        (*pos)->data = list->front()->data;
    }
    delete list->front();
    list->pop();
    
    return false;
}

template <typename T>
bool putout(tree<T>** pos, queue<tree<T>*>* list)
{
    if ((*pos) == nullptr)
        return true;
    list->push(*pos);
    return false;
}

template <typename T>
bool swap(tree<T>** pos, queue<tree<T>*>* list)
{
    if ((*pos) == nullptr)
        return true;
    tree<T>* t;
    t = (*pos)->left;
    (*pos)->left = (*pos)->right;
    (*pos)->right = t;
    return false;
}

template <typename T>
void show(queue<T>* result)
{
    while (!result->empty())
    {
        cout << result->front()->data << ' ';
        result->pop();
    }
    cout << endl;
}

template <typename T>
void getIn(queue<tree<T>*>* result)
{
    int n;
    T x;
    cout << "Number of Node: ";
    cin >> n;
    cout << "Data of Node: ";
    while (n--)
    {
        cin >> x;
        result->emplace(new tree(x));
    }
}

template<typename T>
void demo()
{
    //cout << __PRETTY_FUNCTION__ << endl;
    tree<T>* head = nullptr;
    queue<tree<T>*>* result = new queue<tree<T>*>();
    getIn(result);
    tree<T>::DEEP(putin, result, &head);
    tree<T>::DEEP(putout, result, &head);
    cout << "DEEP: ";
    show(result);
    cout << "DLR: ";
    tree<T>::DLR(putout, result, &head);
    show(result);
    cout << "LDR: ";
    tree<T>::LDR(putout, result, &head);
    show(result);
    cout << "LRD: ";
    tree<T>::LRD(putout, result, &head);
    show(result);
    cout << "#swap#" << endl;
    tree<T>::DEEP(swap, result, &head);
    tree<T>::DEEP(putout, result, &head);
    cout << "DEEP: ";
    show(result);
    cout << "DLR: ";
    tree<T>::DLR(putout, result, &head);
    show(result);
    cout << "LDR: ";
    tree<T>::LDR(putout, result, &head);
    show(result);
    cout << "LRD: ";
    tree<T>::LRD(putout, result, &head);
    show(result);
    delete head;
    delete result;
}

int main(void)
{
    demo<int>();
    demo<int>();
    demo<string>();
    system("pause");
    return 0;
}