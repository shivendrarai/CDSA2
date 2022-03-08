#include<iostream>

using namespace std;
//naive method
unsigned int countSetBitsnaive(unsigned int n)
{
    int res=0;
    while(n!=0){
        if(n%2!=0){
            res++;
        }
        n=n/2;
    }
    return res;
}

//(Brian and Kerningham Algorithm

unsigned int countSetBitsBrian(unsigned int n){

    int res;
    while(n!=0){
        n=n&(n-1);
        res++;  
    }
    return res;


}

//LookUp table

    int table[256];
	
	// recursive function to count set bits 
	void initialize() { 

      // To initially generate the table algorithmically:
      table[0] = 0;
      for (int i = 0; i < 256; i++)
      {
          table[i] = (i & 1) + table[i / 2];
      }
	} 
	
	int countSetBits(int n)
	{
	    return table[n & 0xff] + 
        table[(n >> 8) & 0xff] + 
        table[(n >> 16) & 0xff] + 
        table[n >> 24]; 
	}

