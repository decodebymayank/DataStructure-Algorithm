#include<iostream>
#include<vector>
using namespace std;

bool CheckPrime(int no)
{
    int start = 2 ;
    while(start <= (no-1))
    {
        if(no%start == 0)
        {
            return false;
        }
        start++;
    }

    return true ;
}

int main()
{
    //Prime Number
    int no = 11 ;
    bool value = CheckPrime(no);
    if(value)
    {
        cout << no << " is Prime" << endl;
    }
    else
    {
        cout << no << " is not Prime" << endl;
    }
}