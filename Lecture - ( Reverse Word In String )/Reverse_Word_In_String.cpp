#include<iostream>
#include<vector>
using namespace std;

string reverseWords(string s) {
    string temp = "";
    vector<string> v;
    for(int i = 0 ; i < s.length() ; i++)
    {
        if(s[i]!=' ')
        {
            temp = temp + s[i] ;
        }

        else if(s[i]==' ' && temp.length()!=0)
        {
            v.push_back(temp);
            temp = "";
        }
    }

    if(s[s.length()-1]!=' ')
    {
        v.push_back(temp);
    }

    temp ="";
    for(int j = v.size()-1 ; j >=0 ; j--)
    {
        string s = v[j] ;
        for(int start = 0  ; start < s.length() ; start++)
        {
            temp = temp + s[start];
        }

        if(j!=0)
        {
            temp = temp + " " ;
        }
    }

    return temp ;
}

int main()
{
    string s = "the sky is blue" ;
    string res = reverseWords(s) ;
    cout << res << endl;
}