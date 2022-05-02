#pragma once
#include "Mutator.h"

class BitFlip : public Mutator
{
    private:
    int listLength;
    int remain;

    public:
    Individual* mutate(Individual* list, int k)
    {   
        listLength = list -> getLength();
        int remain = k % listLength;
        if (remain == 0)
        {
            remain = listLength - 1; //return correct index           
        }
        else 
        {
            remain = remain - 1;
        }
        list ->flipBit(remain);
        return list;
    }
}; 

