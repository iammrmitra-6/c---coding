#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> v;
    
    //creating a vector of 5 elements
    for(int i=0;i<5;i++)
    {
        int n;
        cin>>n;
        v.push_back(n);
    }
    //printing 5 element in vector
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl; 

    v.insert(v.begin()+2,6);//inserting 6 at index 2

    for(int ele:v){
        cout<<ele<<" ";

    }
    cout<<endl;

    v.erase(v.end()-2);//deleting 2nd last element 
    
    //printing using while loop
    int idx=0;
    while(idx<v.size())
    {
        cout<<v[idx++]<<" ";
    }

    return 0;
}