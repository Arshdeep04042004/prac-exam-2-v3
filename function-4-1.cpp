#include <iostream>
#include "function-4-1.h"

ModCounter::ModCounter(int init, int bound)
{
    boundary=bound;
    if(0<= init <=bound)
    {
        current_val=init;
    }
    else
    {
        current_val=0;
    }
}

void ModCounter:: increment()
{
    if(current_val==boundary)
    {
        current_val=0;
    }
    else
    {
        current_val++;
    }

}

void ModCounter:: decrement()
{
    if(current_val==0)
    {
        current_val=boundary;
    }
    else
    {
        current_val--;
    }

}

int ModCounter:: get_val()
{
    return current_val;
}