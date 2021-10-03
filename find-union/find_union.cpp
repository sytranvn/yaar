//
//  find_union.cpp
//  find-union
//
//  Created by Sy Tran on 10/3/21.
//

#include "find_union.hpp"

FindUnion::FindUnion(std::size_t size) {
  _rank.resize(size, 0);
  for (int i = 0; i < size; i++) _parents.push_back(i);
};

void FindUnion::uni(int x, int y) {
  int root_x = find(x);
  int root_y = find(y);

  if (root_x == root_y)
    return;
  if (_rank[root_x] < _rank[root_y]) {
    _parents[root_x] = root_y;
  } else if (_rank[root_y] < _rank[root_x]) {
    _parents[root_y] = root_x;
  } else {
    _parents[root_x] = root_y;
    _rank[root_y]++;
  }
};

bool FindUnion::connected(int x, int y) { return find(x) == find(y); };

int FindUnion::find(int i) {
  if (_parents[i] == i)
    return i;
  return find(_parents[i]);
};
