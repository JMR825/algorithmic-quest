class Solution {
public:
    bool checkIfExist(vector<int>& arr) {
        int n=arr.size();
        for(int i=0;i<n;i++){
            int j=0;
            while(j<n){
                if(i!=j && arr[i]==2*arr[j])
                return true;
                j++;
            }
        }
        return false;
    }
};
