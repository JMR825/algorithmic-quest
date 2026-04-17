int maxArea(int* height, int heightSize) 
{
    int left=0;
    int right=heightSize-1;
    int max_Area=0;
    while(left<right)
    {
        int h=(height[left]<height[right]) ? height[left] :height[right];
        int w=right-left;
        int area=h*w;
        // update maxArea
        if(area>max_Area)
        max_Area=area;
        if(height[left]<height[right])
        left++;
        else 
        right--;
    }
    return max_Area;
}
