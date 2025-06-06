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
  if(*node == nullptr) {
    return;
  } 
  stack<tree<T>*> s;
  s.push(*node);
  while(!s.empty()) {
    tree<T> *curr = s.top();
    s.pop();

    if (pf(&curr, que)) continue;

    if (curr->right) s.push(curr->right);
    if (curr->left)  s.push(curr->left);
  }
}
template<typename T>
void tree<T>::LDR(bool (*pf)(tree<T>**, queue<tree<T>*>*), queue<tree<T>*>* que, tree<T>** node) {
  if (*node == nullptr){
    return;
  }
  stack<tree<T>*> s;
  tree<T> *curr = *node;
  while (!s.empty() || curr != nullptr) {
    while (curr != nullptr) {
      s.push(curr);
      curr = curr->left;
    }

    curr = s.top();
    s.pop();

    if (pf(&curr, que)) return;

    curr = curr->right;
  }
}
template<typename T>
void tree<T>::LRD(bool (*pf)(tree<T>**, queue<tree<T>*>*), queue<tree<T>*>* que, tree<T>** node) {
  if (*node == nullptr){
    return;
  }
  std::stack<tree<T>*> s;
  tree<T> *curr = *node;
  tree<T> *visited = nullptr;

  while (!s.empty() || curr != nullptr) {
    if (curr != nullptr) {
      s.push(curr);
      curr = curr->left;
    } else {
      tree<T> *tmp = s.top();

      if (tmp->right != nullptr && tmp->right != visited) {
        curr = tmp->right;
      } else {
        if (pf(&tmp, que)) return;
        s.pop();
        visited = tmp;
      }
    }
  }
}

template <typename T>
void tree<T>::free(tree<T> *node) {
  if (node == nullptr) return;

  std::stack<tree<T>*> s;
  tree<T>* curr = node;
  tree<T>* visited = nullptr;

  while (!s.empty() || curr != nullptr) {
    if (curr != nullptr) {
      s.push(curr);
      curr = curr->left;
    } else {
      tree<T>* tmp = s.top();
      if (tmp->right && tmp->right != visited) {
        curr = tmp->right;
      } else {
        s.pop();
        delete tmp;
        visited = tmp;
      }
    }
  }
}