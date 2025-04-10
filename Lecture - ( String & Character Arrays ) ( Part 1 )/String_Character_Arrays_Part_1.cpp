#include<iostream>


using namespace std;


int main()
{
    //Character Array
    
    // Till when we dont end character array with null character ('\0') till that we did not get valid string
    char chr[] = {'a','b','\0'} ;
    cout << chr << endl;
    
    //Every character will store at particular index in whatever manner we are storing
    char ct[] = "hello";

    char newchar[4] ;
    //Taking input
    cin >> newchar ;

    //If we trying to take a input for more than a given length then only till the end of length characters will get printed

    // In cin after spaces all characters are ignored , so instead of it we use cin.getline()
    // cin.getline(newchar , 100 , 'sign where we wanna stop to take input' ) ;
    cin.getline(newchar , 100 ) ;

    //String
    // It's dynamic in nature because its resize during run time
    string st = "Welcome Back";

    //This we can not change dynamically during run time
    char cht[] = "Hello";

    string s1 = "something";
    string s3 = "is back";
    cout << (s1+s3) << endl;

    for(int i = 0 ; i < s1.length() ; i++)
    {
        cout << s1[i] << " " ;
    }
}