#pragma once
#include <vector>
#include "Object.h"
#include "Group.h"

class Comparator;

class GroupingStrategy 
{
protected:
    SortDirection sortDirection;
public:
    GroupingStrategy() : sortDirection(SortDirection::Ascending) {}

    virtual void groupObjects(std::vector<Object> objects, std::vector<Group>& groups) = 0;
    virtual Comparator getComparator() = 0;
    virtual ~GroupingStrategy() {}

    void setSortDirection(SortDirection direction);

    Group* findGroupByName(std::vector<Group>& groups, std::string groupName);
};

