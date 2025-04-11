#include<iostream>
#include<vector>
using namespace std;

vector<int> stringcompress(char ch , int startingindex , vector<char> chr)
{
    vector<int> res ;
    int count = 0 ;
    int i = startingindex ;
    for(; i < chr.size() ; i++)
    {
        if(ch == chr[i])
        {
            count++;

        }
        else
        {
            break;
        }
    }

    res.push_back(i);
    res.push_back(count);
    return res;
}

int main()
{
    vector<char> ch = {'a','a','b','b','c','d','d'} ;
    vector<char> res ;
    for(int i = 0 ; i < ch.size() ; i++)
    {
        vector<int> result = stringcompress(ch[i] , i , ch) ;
        res.push_back(ch[i]);
        if(result[1]>1)
        {
            string value = to_string(result[1]);
            for(auto val : value)
            {
                res.push_back(val) ;
            }
        }
       

       


        i = result[0] ;
        i--;

    }

    for(auto cp : res)
    {
     cout << cp <<  " ";
    }
    


}