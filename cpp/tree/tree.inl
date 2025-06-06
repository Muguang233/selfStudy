//bfs 
template<typename T>
void tree<T>::DEEP(bool (*pf)(tree<T>**, queue<tree<T>*>*), queue<tree<T>*>* que, tree<T>** node) {
  if(pf(node, que)) return;
  queue<tree<T>*> tmp;
  if(*node != nullptr && !que->empty()) tmp.push(*node);
  while (!tmp.empty()) {
    tree<T> *curr = tmp.front();
    tmp.pop();

    if (pf(&curr->left, que)) continue;
    if (curr->left != nullptr) tmp.push(curr->left);

    if (pf(&curr->right, que)) continue;
    if (curr->right != nullptr) tmp.push(curr->right);
  }
}

template<typename T>
void tree<T>::DLR(bool (*pf)(tree<T>**, queue<tree<T>*>*), queue<tree<T>*>* que, tree<T>** node) {
  if (*node == nullptr) {
    return;
  } 
  pf(node, que);
  DLR(pf, que, & (*node)->left);
  DLR(pf, que, & (*node)->right);
}
template<typename T>
void tree<T>::LDR(bool (*pf)(tree<T>**, queue<tree<T>*>*), queue<tree<T>*>* que, tree<T>** node) {
  if (*node == nullptr){
    return;
  }
  LDR(pf, que, &(*node)->left);
  pf(node, que);
  LDR(pf, que, &(*node)->right);
}
template<typename T>
void tree<T>::LRD(bool (*pf)(tree<T>**, queue<tree<T>*>*), queue<tree<T>*>* que, tree<T>** node) {
  if (*node == nullptr){
    return;
  }
  LRD(pf, que, &(*node)->left);
  LRD(pf, que, &(*node)->right);
  pf(node, que);
}