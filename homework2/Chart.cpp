//Chloe Tu
//Collaborators: Cara, Eden, TA
//"I pledge that I have neither given nor received unauthorized assistance on this assignment."

#include "Chart.h"
#include <iostream>

void Chart::add(int item)
{
    data.push_back(item);
}
void Chart::draw () const
{std::cout << "cannot draw base chart";}

Chart::Iterator Chart::begin() const
{
    Iterator iter;
    iter.position = 0;
    iter.c = this;
    return iter;
}
Chart::Iterator Chart::end() const
{
    Iterator iter;
    iter.position = static_cast<int>(data.size());
    iter.c = this;
    return iter;
}
Chart::Iterator::Iterator() {
    position = 0;
    c = nullptr;
}
void Chart::Iterator::next()
{
    position++;
}
void Chart::Iterator::previous()
{
    position--;
}

bool Chart::Iterator::equals(Iterator b) const{
    if (this == &b) return true;
    return false;
}
int Chart::Iterator::operator*()
{
    return c->data[position];
}
void Chart::Iterator::operator++()
{
    position++;
}
bool Chart::Iterator::operator!=(const Iterator &b) const
{
    return this->position != b.position;
}
