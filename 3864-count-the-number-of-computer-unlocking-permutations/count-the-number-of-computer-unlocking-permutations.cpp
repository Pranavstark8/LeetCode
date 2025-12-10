class Solution {
public:
    int countPermutations(vector<int>& complexity) {
        int n = complexity.size();
        int mod = 1000000007;
        int first = complexity[0];

        for(int i =1;i<n;i++ ){
            if(complexity[i]<= first){
                return 0;
            }
        }

        long long fact =1;
        for (int i = 2; i < n; i++) {
            fact = (fact * i) % mod;
        }
        return fact;
    }
};