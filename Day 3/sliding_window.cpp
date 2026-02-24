#include <iostream>
#include <vector>
#include <climits> // Required for INT_MIN

using namespace std;

class Solution {
  public:
    int maxSubarraySum(vector<int>& arr, int k) {
        // code here
        int n= arr.size();
        int sum=0;
        int temp_sum=0;
        int j=1;
        for(int i=0;i<n-k;i++){
            while(j<=k-1){
                temp_sum+=arr[j];
                j++;
            }
            if(temp_sum+arr[i]>sum){
                sum=temp_sum+arr[i];
            }
            temp_sum=temp_sum-arr[i+1]+arr[j++];
        }
        return sum;
    }
};
