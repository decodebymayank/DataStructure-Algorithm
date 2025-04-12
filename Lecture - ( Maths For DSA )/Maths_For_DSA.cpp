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

int countPrimes(int n) {
    vector<bool> isPrime(n+1,true) ;
    int count = 0 ;
    for(int i = 2 ; i < n ; i++)
    {
        if(isPrime[i])
        {
            count++;
            for(int j = i * 2 ; j < n ; j+=i)
            {
                isPrime[j] = false;
            }
        }
    }

    return count ;
}

int DigitsInNumber(int number)
{
    int sum = 0 ;
    while(number>0)
    {
        int calcsum = number%10;
        number = number / 10 ;
        sum+=calcsum;
    }

    return sum ;
}

int ArmStrongNumber(int number)
{
    int sum = 0 ;
    while(number>0)
    {
        int calcsum = (number%10);
        calcsum = calcsum * calcsum * calcsum ;
        number = number / 10 ;
        sum+=calcsum;
    }
    return sum ;
}

int GreatestCommonDivisor(int num1 , int num2)
{
    int gcd = 1 ;
    for(int i = 1 ; i < min(num1,num2) ; i++)
    {
        if(num1%i==0 && num2%i==0)
        {
            gcd = i ;
        }
    }

    return gcd ;
}

string ReverseNumber(int no)
{
    string s = "";
    while(no>0)
    {
        int divnum = no % 10 ;
        s = s + to_string(divnum) ;
        no = no / 10 ;
    }

    return s ;
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

    //CountPrimes
    int result = countPrimes(50) ;
    cout << result << endl;

    //Digits in a number
    int digitnumber = DigitsInNumber(1346);
    cout << "Sum of digit number : " << digitnumber << endl;

    //Armstrong Number
    int armnumber = ArmStrongNumber(153) ;
    if(armnumber == 153)
    {
        cout << armnumber << " is Armstrong Number " << endl;
    }
    else
    {
        cout << armnumber << " is not Armstrong Number "  << endl;
    }
    
    int gcd  = GreatestCommonDivisor(20,28) ;
    cout << "Greatest Common Dvisor of 20 & 28 is : " << gcd << endl;

    string revnum  = ReverseNumber(4537);
    cout << "Reverse of 4537 : " << revnum << endl;

   
}