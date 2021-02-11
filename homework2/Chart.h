//Chloe Tu
//Collaborators: Cara, Eden, TA
//"I pledge that I have neither given nor received unauthorized assistance on this assignment."

#ifndef Chart_h
#define Chart_h

#include <iostream>
#include <vector>

class Chart
{
    friend class Iterator;
public:
    class Iterator;
/*
Adds an item to the chart.
@param item to add
*/
    void add(int item);
    virtual void draw() const;
//    first item
    Iterator begin() const;
//    last item
    Iterator end() const;
protected:
    std::vector <int> data;
};

class Chart::Iterator {
    friend class Chart;
public:
    Iterator();
    Iterator(Chart other);
    int operator*();
    void operator++();
    bool operator!=(const Iterator& b) const;
    void next();
    void previous();
    bool equals(Iterator b) const;
private:
    int position;
    const Chart* c;
};

#endif
