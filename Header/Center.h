#pragma once
#include "Entity.h"

class Center:public Entity
{
private:
    /* data */
public:
    Center(/* args */):Entity()
    {
        cout<<"Non parameterized constructor"<<endl;
    }
    Center(string name):Entity(name)
    {
        cout<<"Parameteized constructor"<<endl;
    }
};


