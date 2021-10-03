//
//  main.cpp
//  find-union
//
//  Created by Sy Tran on 10/3/21.
//

#include <iostream>
#include "find_union.hpp"

int main () {
    FindUnion wfu = FindUnion(10);
    wfu.uni(1, 3); // 1-3
    wfu.uni(2, 4); // 1-3 2-4
    wfu.uni(5, 6); // 1-3 2-4 5-6
    wfu.uni(2, 7); // 1-3 2-4-7 5-6
    assert(wfu.connected(1, 7) == false);
    assert(wfu.connected(2, 7) == true);
    wfu.uni(3, 7); // 1-3-2-4-7 5-6
    assert(wfu.connected(1, 7) == true);
    wfu.uni(3,6); // 1-3-2-4-7-5-6
    assert(wfu.connected(3, 5) == true);

    printf("Finished ✓\n");
}
