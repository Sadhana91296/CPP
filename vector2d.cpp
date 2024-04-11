#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<vector<int>> arr=
    {{1,2,3,4,5,6},
    {7,8},
    {9,10,11,12},
    {13,14,15}};
    //cout<<arr.size();-> return number of rows
    for(int i=0;i<arr.size();i++)
    {
        for(int j=0;j<arr[i].size();j++){
         cout<<arr[i][j]<<",";}
         cout<<endl;
        /*or for each loop
        for(int num:arr[i])
        {
            cout<<num<<",";
        } 
        cout<<endl;*/
    }

    return 0;
}