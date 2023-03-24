#include <stdio.h>
#include <string>
#include "Person.h"

using namespace std;

Person::Person()
{
    Name="";
    id="";
    Age="";
}

void Person::set_Name(string &name)
{
    Name=name;
}

string Person::get_Name()
{
    return Name;
}

void Person::set_id(string &n_id)
{
    id=n_id;
}

string Person::get_ID()
{
    return id;
}

void Person::set_Age(string age)
{
    Age=age;
}

string Person::get_age()
{
    return Age;
}

void Person::print_info()
{
    cout<<"Name: "<<Name;
    cout<<"ID: "<<id;
    cout<<"Age: "<<Age;
}
