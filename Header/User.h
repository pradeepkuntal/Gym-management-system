#pragma once

#include "Entity.h"

class User:public Entity
{
private:
    /* data */
public:
    string mobile_num;
    string email_id;
    User(/* args*/):Entity()
    {
        cout<<"No parameter constructor"<<endl;
    }

    User(string name, string mobile_num,string email_id):Entity(name)
    {
        cout<<"Parameterized constructor"<<endl;
        this->mobile_num=mobile_num;
        this->email_id=email_id;
    }
    string GetMobileNum();
    string GetEmailId();
};

