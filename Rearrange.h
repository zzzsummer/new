#pragma once
#include "Individual.h"
#include "Mutator.h"

class Rearrange : public Mutator
{
    private:
    int lengthList;
    int remain;

    public:
    Individual* mutate(Individual* list, int k)
    {
        lengthList = list ->getLength();
        remain = k % lengthList;
        if ( remain == 0)
        {
            remain = lengthList;
        }
        else
        {
            remain = remain - 1;
        }
        list -> RearrangeBit(remain);
        return list;
    }
};