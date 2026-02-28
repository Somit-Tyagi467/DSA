//general solution using map and bitset takes at max 8 ms time sometimes 1ms but more space complexity
class Solution {
public:
    vector<int> sortByBits(vector<int>& arr) {
        int n= arr.size();
        sort(arr.begin(),arr.end());
        map<int , vector<int>> checker;

        for(int i=0;i<arr.size();i++){

            int sum = bitset<16>(arr[i]).count();
            checker[sum].push_back(arr[i]);

        }
        int i=0;
        for(auto [bit,vector]:checker){
            
            for(int element : vector){
                arr[i]=element;
                i++;
            }
        }
        return arr;
    }
}; 

//optimal solution using sort and lambda function always take 0ms time but has same space complexity 
class Solution {
public:
    vector<int> sortByBits(vector<int>& arr) {
        sort(arr.begin(),arr.end(),[](int a,int b){
            int count_a=bitset<16>(a).count();
            int count_b=bitset<16>(b).count();
            if(count_a==count_b) return a<b;
            return count_a<count_b;
        });
        return arr;
    }
};