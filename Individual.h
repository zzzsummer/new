#pragma once

#include <string>
using namespace std;
class Individual 
{
    private:
    string binaryString;
    int length;
    string copyList;
    string  rearrange_binaryString;

    public:
    string getString()
    {
        return binaryString;
    }
    int getBit(int pos)
    {
        if (pos > length)
        {
            return -1;
        }
        if(binaryString[pos] == '1')
        {
            return 1;      
        }
        else
        {
            return 0;
        }
    }

    void flipBit(int pos)
    {
        if (binaryString[pos] == '1')
        {
            binaryString[pos] = '0';
        }
        else
        {
            binaryString[pos] = '1';
        }
    }

    int getMaxOnes()
    {
        int maxOne = 0;
        int sumOnes = 0;
        for (int i = 0; i < length; i++) 
        {
            if (binaryString[i]=='1') 
            {
            sumOnes += 1;
            }
            if (sumOnes>maxOne) {
            maxOne=sumOnes;
            }
            else if (binaryString[i]=='0') 
            {
            sumOnes=0;
            }
        }
        return maxOne;                
    }
    
    int getLength()
    {
        return length;
    }
    Individual(int len)
    {
        length = len;
        for (int i = 0; i < length ; i++)
        {
            binaryString[i] = 0; 
        }
    }
    Individual(string binString)
    {
        length = binString.size();
        binaryString = binString;
        copyList = binString;
    }

    void RearrangeBit(int pos)
    {
        int count = 0;
        for (int i = 0; i < length; i++)
        {
            if (i < length - pos)
            {
                rearrange_binaryString[i] = binaryString[pos + i];
                count ++;
            }
            else
            {
                rearrange_binaryString[i] = binaryString[i-count];
            }
        }
        for (int i = 0; i < length; i++)
        {
            binaryString[i] = rearrange_binaryString[i]; //write in new list
        }
    }

};