//Chloe Tu
//Collaborators: Cara, Eden, Justin
//I pledge that I have neither given nor received unauthorized assistance on this assignment.

#include <iostream>
#include <vector>
#include <functional>
#include "more.h"

//making a template class T, order is set to sort using the standard less function
template<typename T, typename CMP = std::less<T>>
int binary_search(std::vector<T> v, int from, int to, T value, CMP order = std::less<T>()){
    if (from > to)
        return -1;
    int mid = (from + to) / 2;
    if (order(v[mid], value) == order(value, v[mid]) )
        return mid;
    else if (order(v[mid], value) > order(value, v[mid]))
        return binary_search(v, mid + 1, to, value, order);
    else
        return binary_search(v, from, mid - 1, value, order);
}
int main()
{
    std::vector<int> vi = { 1, 3, 5,10,19 };
    std::vector<double> vd = { 3.14,2.7,2.54, 0.19 };
    more<double> dd;
    std::vector<std::string> vs = { "one", "two","zero" };
    std::string two = "two";
    std::cout << binary_search(vi, 0, vi.size(), 10);
    std::cout << binary_search(vd, 0, vd.size(), 2.7, dd);
    std::cout << binary_search(vs, 0, vs.size(), two);
//this code should output: 311
return 0;}
