class Solution {
public:
    vector<int> countPoints(vector<vector<int>>& points, vector<vector<int>>& queries) {
    vector<int> ans;
    for(int i=0;i<queries.size();i++)
    {
        int centre_x=queries[i][0];
        int centre_y=queries[i][1];
        int radius=queries[i][2];
        int count=0;
        for(int j=0;j<points.size();j++)
        {
            int point_x=points[j][0];
            int point_y=points[j][1];
            int dx=abs(centre_x-point_x);
            int dy=abs(centre_y-point_y);
            int sq_distance=(dx*dx+dy*dy);
            if(sq_distance<=radius*radius)
            {
                count++;
            }
        }
        ans.push_back(count);
    }
        return ans;
    }
};
