#pragma once
#include "Helper.h"

class Entity
{
private:
    /* data */
public:
    string name;
    int id;
    Entity(/* args */)
    {

    }
    Entity(string name)
    {
        this->name=name;
        this->id=GetUniqueId(0);
    }
    string GetName();
    int GetId();
};


