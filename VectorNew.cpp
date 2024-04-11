#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> arr={9,8,7};
    arr.push_back(5);
    arr.pop_back();
    cout<<arr.capacity()<<endl;
    for(int i=0;i<arr.size();i++)
    {
        cout<<arr[i]<<endl;
    }
    return 0;
}
