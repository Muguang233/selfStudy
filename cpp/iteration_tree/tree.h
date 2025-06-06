//迭代版
#include <iostream>
#include <queue>
#include <stack>
#include <string>
using namespace std;
template<typename T>
class tree{
public:
  //值
  T data;
  //左子树
  tree<T> *left;
  //右子树
  tree<T> *right;
  //构造函数
  tree(const T & value) : data(value), left(nullptr), right(nullptr) {}
  //析构 递归释放内存
  ~tree() {
    delete left;
    delete right;
  }
  //广度优先遍历/构建
  static void DEEP(bool (*pf)(tree<T>**, queue<tree<T>*>*), queue<tree<T>*>* que, tree<T>** node);
  //preorder遍历
  static void DLR(bool (*pf)(tree<T>**, queue<tree<T>*>*), queue<tree<T>*>* que, tree<T>** node);
  //inorder遍历
  static void LDR(bool (*pf)(tree<T>**, queue<tree<T>*>*), queue<tree<T>*>* que, tree<T>** node);
  //postorder遍历
  static void LRD(bool (*pf)(tree<T>**, queue<tree<T>*>*), queue<tree<T>*>* que, tree<T>** node);
  //迭代释放树
  static void free(tree<T> *node);
};

#include "tree.inl"