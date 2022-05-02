#pragma once
#include "Individual.h"

class Mutator
{
    public:
    virtual Individual * mutate(Individual* list, int k) = 0;
    
};