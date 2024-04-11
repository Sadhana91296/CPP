#include<iostream>
#include<vector>
#include<unordered_set>
using namespace std;

vector<int> pairSum(vector<int> arr, int s)
{
    vector<int> ans;
    int n;
    unordered_set<int> test;
    for(int i=0;i<arr.size();i++)
    {
        n=s-arr[i];
        if(test.find(n)!=test.end())
          {
            ans.push_back(arr[i]);
            ans.push_back(n);
            return ans;
          }
       test.insert(arr[i]);
    }
    return ans;
}

int main()
{
vector<int> arr={10, 5, 2, 3,-6, 9, 11};
int s=4;
vector<int> ans=pairSum(arr,s);
if(ans.size()==0)
 cout<<"No such pair"<<endl;
else{
for(int num: ans)
 cout<<num<<",";
}
return 0;
}