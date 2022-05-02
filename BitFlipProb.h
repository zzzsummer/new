#pragma once
#include "Individual.h"
#include "Mutator.h"

class BitFlipProb : public Mutator
{
    private:
    double p;

    public:
    Individual* mutate(Individual* list, int k)
    {
        p = 0.5;
        return list;
    }
};

