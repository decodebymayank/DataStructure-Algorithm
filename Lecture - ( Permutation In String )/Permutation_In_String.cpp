#include<iostream>
using namespace std;

bool check_Permutation(string s1 , string s2)
{
    int freq[26] = {0};
    for(int i = 0 ; i < s1.length() ; i++)
    {
        int index = s1[i] - 'a' ;
        freq[index]++;
    }

    int windowsize = s1.length();
    for(int i = 0 ; i < s2.length() ; i++)
    {
        int windowindex = 0 , currentindex = i  ;
        int winfreq[26] = {0};
        while(windowindex<windowsize && currentindex<s2.length())
        {
            winfreq[s2[currentindex] -'a']++;
            windowindex++;
            currentindex++;
            
        }
    }
}

int main()
{
    string s1 = "ab" , s2 = "adddsnaabdshfk" ;

    bool value = check_Permutation(s1,s2);
}