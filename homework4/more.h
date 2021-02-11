//
//  more.hpp
//  homework4
//
//  Created by Chloe Tu on 2/18/20.
//  Copyright © 2020 Chloe Tu. All rights reserved.
//

#ifndef more_h
#define more_h

#include <stdio.h>

//making a template class T, creating a new method of comparison, compares if one value is bigger than the other.
template<typename T>
class more
{
    public:

    bool operator()(const T& x, const T& y) const;
};

template<typename T>
bool more<T>::operator()(const T& x, const T& y) const
{
    return x > y;
}

#endif /* more_hpp */
