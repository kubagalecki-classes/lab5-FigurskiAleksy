#pragma once

#include "Human.hpp"

#include <list>
#include <vector>

std::vector< char > foo(std::list< Human >& people)
{
    // Twoja implementacja tutaj
        for (Human & i : people) 
        {
        i.birthday();
        }
    std::vector<char> monst;
    for (auto it = people.rbegin(); it != people.rend(); it++) 
    {
        if(it->ismonstter())
            monst.push_back('n');
        else
            monst.push_back('y');
    }

    return monst;
}
