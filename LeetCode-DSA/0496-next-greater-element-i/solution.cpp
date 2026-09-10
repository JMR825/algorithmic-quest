class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        int n1 =nums1.size();
        int n2 = nums2.size();
        vector<int> next(n1,-1);
        unordered_map<int,int> greaterElement;
        for(int i=0;i<n2;i++)
        { 
            int j=i+1;
            while(j<n2 && nums2[i]>=nums2[j]){
                j++;
            }
            if( j<n2){   
            greaterElement[nums2[i]] = nums2[j];
            }
        }
        for(int i=0;i<n1;i++)
        {
            int x = nums1[i];
            if(greaterElement.find(x)!=greaterElement.end())
            next[i]= greaterElement[x];            
        }
        return next;
    }
};
