#include<iostream>
using namespace std;

bool checkpalindrome(string s)
{
    int i = 0 ;
    int j = s.length() - 1 ;
    while(i<j)
    {
        if(tolower(s[i])==tolower(s[j]))
        {
            i++;
            j--;
        }
        else
        {
            return false;
        }
    }

    return true ;
}

int main()
{
    string s = "A man, a plan, a canal: Panama" ;

    string finalstring = "" ;
    for(int i = 0 ; i < s.length() ; i++)
    {
        if(isalpha(s[i]))
        {
            finalstring = finalstring + s[i] ;
        }
    }

 
    bool value = checkpalindrome(finalstring) ;
    if(value)
    {
        cout << "Yes It's Palindrome" << endl;
    }
    else
    {   
        cout << "Sorry My Bad" << endl;

    }

}