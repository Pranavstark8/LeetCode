class Solution {
public:
    int sumFourDivisors(vector<int>& arr) {
        int ans=0;
        int n = (arr.size());
        vector<int> divs;
        for(int i =0;i<n;i++){

                for(int j=1;j<=sqrt(arr[i]);j++){
                    if(arr[i]%j==0){
                        divs.push_back(j);
                        if(arr[i]/j!=j){
                            divs.push_back(arr[i]/j);
                        }
                    }
                }
                if(divs.size()==4){
                    for(int k=0;k<4;k++){
                        ans=ans+divs[k];
                    }
                }
                divs.clear();
        }
        return ans;
    }
};