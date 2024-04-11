#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
vector<vector<int>> triplet(vector<int> arr, int sum)
{
  //int n=arr.size();
  sort(arr.begin(),arr.end());
  vector<vector<int>> ans;
  for(int i=0;i<=arr.size()-3;i++)
  {
    int p1=i+1;
    int p2=arr.size()-1;
    while(p1<p2){
        int current_sum=arr[i];
        current_sum+=arr[p1];
        current_sum+=arr[p2];
    if(current_sum==sum)
    {
        ans.push_back({arr[i],arr[p1],arr[p2]});
        p1++;
        p2--;
    }
    else if((arr[p1]+arr[p2]+arr[i])>sum)
    {
     p2--;
         
    }
    else
    {
     p1++;
    }}
  }
  return ans;
}
int main()
{
    vector<int> arr={1, 2, 3, 4, 5, 6, 7, 8, 9, 15};
    int sum=18;
    auto ans=triplet(arr,sum);
    for(auto i:ans)
        {
            for(int num:i)
             cout<<num<<",";
            cout<<endl;
        }
    
    return 0;

}