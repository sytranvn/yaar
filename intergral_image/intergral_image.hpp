//
//  intergral_image.hpp
//  intergral_image
//
//  Created by Sy Tran on 10/3/21.
//

#ifndef intergral_image_hpp
#define intergral_image_hpp


#include <iostream>
#include <stdio.h>
#include <cstdlib>
#include <utility>


typedef std::pair<size_t, size_t> Pos;
void print_arr2(int **arr, size_t row, size_t col);

class IntergralImage
{
    size_t m_x, m_y;
    int **m_ii;

public:
    IntergralImage(){};
    IntergralImage(int **img, int x, int y);

    int **ii();

    void print_ii();

    /**
     * get actual sum of <Top, Left>, <Bottom, Right> rectangle
     */
    int sum(Pos tl, Pos br);
    
    void print_arr2(int **arr, size_t row, size_t col);

    ~IntergralImage()
    {
        for (int i = 0; i < m_x; i++)
            free(m_ii[i]);
        free(m_ii);
    }
};

#endif /* intergral_image_hpp */
