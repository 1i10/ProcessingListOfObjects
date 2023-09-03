#include "GroupingStrategy.h"

void GroupingStrategy::setSortDirection(SortDirection direction)
{
    this->sortDirection = direction;
}

Group* GroupingStrategy::findGroupByName(std::vector<Group>& groups, std::string groupName)
{
    for (Group& group : groups)
    {
        if (group.getName() == groupName)
        {
            return &group;
        }
    }

    return nullptr; // Группа не найдена
}

