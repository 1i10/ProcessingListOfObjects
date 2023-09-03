#pragma once
#include <set>
#include "Object.h"
#include "Comparator.h"

class Subgroup 
{
private:
    std::multiset<Object, Comparator> objects;
    Comparator comparator;
public:
    Subgroup(Comparator comparator) : comparator(comparator), objects(comparator) {}

    void addObject(Object object);
    std::multiset<Object, Comparator> getObjects() { return objects; }
};

