#include<iostream>
#include<vector>
#include<list>
#include<deque>
#include<stack>

using namespace std;

int main()
{
    //Vector
    vector<int> vec = { 2 , 6 , 8 , 1} ;
    cout << "Size Of Vec : " << vec.size() << endl ;
    cout << "Capacity Of Vec : " << vec.capacity() << endl ;
    vec.push_back(101) ;
    vec.pop_back();
    vec.at(0);
    vec.front();

    //Only we know size and we wanna initialize with same value 
    vector<int> v(2,10);

    //for copy one vector elements with another one
    vector<int> v3(v);
    //To Erase value from a vector
    vec.erase(vec.begin()+1) ;
    //Erase change size of function , but capacity still remains same
    vec.insert(vec.begin()+1 ,100);

    vector<int> :: iterator it ;

    
    //List :- push_back() , push_front() , emplace_back() , emplace_front() , pop_back() , pop_front() 
    // Push and pop can be done from both side , that's why internally its implemented as a doubly linkedList
    //Other than that all function are same which are in vector
    // In list we will not get any random value
    list<int> l = {22 , 10 , 2};

    //Double Ended Queue :- all are same which are in list and its implemeneted with the help of dynamic arrays 
    //Random value access is possible in deque

    //Pairs :- It can be like dictionary
    // Both values which are in pair , type can be different both of them
    pair<int,double> p = {23 , 120.18} ;
    cout << p.first << endl;
    cout << p.second << endl;
    pair<int , pair<int,double>> pai = {10,{32,12}};
    cout << pai.second.first << endl;
    
    //Stack
    stack<int> s ;
    s.push(100);
    s.push(100);
    s.push(100);
    s.pop();

    stack<int> s2;
    s2.swap(s) ;

}