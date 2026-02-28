class Solution {
public:
    int numSteps(string s) {
        int carry=0;
        int steps=0;
        for(int i = s.size()-1;i>0;--i){
            int bit = s[i]-'0'+carry;
            if(bit==1){
                carry=1;
                steps+=2;
            }
            else{
                steps+=1;
            }
        }
        return steps+carry;
    }
};
// old approach but out of bounds cause string can be of length upto 500
class Solution {
public:
    int numSteps(string s) {
        long long num = stoi(s);
        int sum = 0;
        int steps = 0;
        int e = -1;
        while(num){
            e+=1;
            if(num%10 == 1){
                sum=sum + pow(2,e);
            }
            num/=10;
        }
        while(sum!=1){
            if(sum%2==0){
                sum/=2;
                steps+=1;
            }
            else{
                sum+=1;
                steps+=1;
            }
        }
        return steps;
    }
};