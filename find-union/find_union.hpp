//
//  find_union.hpp
//  find-union
//
//  Created by Sy Tran on 10/3/21.
//

#ifndef find_union_hpp
#define find_union_hpp

#include <stdio.h>
#include <vector>

class FindUnion {
public:
  FindUnion(std::size_t size);

  int find(int i);

  bool connected(int x, int y);

  void uni(int x, int y);

private:
  std::vector<std::size_t> _rank;
  std::vector<int> _parents;
};

#endif /* find_union_hpp */
