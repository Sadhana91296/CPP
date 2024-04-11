#include<iostream>
#include<vector>
using namespace std;
int mountain(vector<int> arr)
{
    int h=1,l=1;
    for(int i=0;i<arr.size()-1;i++)
    {
        if(arr[i]>arr[i+1])
        {
         l++;

        }
        else{
         h++;
         l--
        }
    }
}
int main()
{
    vector<int> arr={5,6,1,2,3,4,5,4,3,2,0,1,2,3,-2,-4}
    auto ans=mountain(arr);
    cout<<ans;
    return 0;
}