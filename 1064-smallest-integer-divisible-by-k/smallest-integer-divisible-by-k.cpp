class Solution {
public:
    int smallestRepunitDivByK(int k) {
        if(k%2==0||k%5==0) return -1;
        int rem=1%k;
        int len_N=1;
        // unordered_set<int> seen;

        while(rem%k!=0){
            // if(seen.count(rem)) return -1;
            // seen.insert(rem);

            rem=(rem*10+1)%k;
            len_N++;
        }
        return len_N;
    }
};