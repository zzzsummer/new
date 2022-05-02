#include <iostream>
#include "Individual.h"
#include "BitFlip.h"
#include "BitFlipProb.h"
#include "Mutator.h"
#include "Rearrange.h"

using namespace std;

Individual* execute(Individual* indPtr, Mutator* mPtr, int k)
{
    Individual* result = mPtr -> mutate(indPtr,k);
    return result;
}

int main ()
{   
    string binStr1,binStr2;
    int k1,k2;

    cout << "input binary string and posisction" << endl;
    cin >> binStr1;
    cin >> k1;
    cin >> binStr2;
    cin >> k2;

    Individual* individual1 = new Individual(binStr1);
    Mutator* mutator1 = new BitFlip();
    Individual* individual2 = execute(individual1,mutator1,k1);
    Individual* individual3 = new Individual(binStr2);
    Mutator* mutator2 = new Rearrange();
    Individual* individual4 = execute(individual3,mutator2,k2);

    string output = individual2->getString();
    int length1 = individual2->getLength();

    for (int i = 0; i < length1; i++)
    {
        cout << output[i];
    }  
    cout << " ";

    string output2 = individual4 ->getString();
    int max = individual4->getMaxOnes();
    int lengthForRearrange = individual4->getLength();
    for ( int i = 0; i < lengthForRearrange; i++)
    {
       cout << output2[i]; /* code */  
    }
    cout << " ";
    cout << max << endl;

    return 0;

}