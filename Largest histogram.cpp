
class Solution {
public:
    int largestRectangleArea(vector<int>& heights) 
    {
        int n=heights.size();
        stack<int>st1;
        stack<int>st2;
        vector<int> pse(n,-1);
        vector<int> nse(n,n);
        st1.push(0);
        for(int i=1;i<n;i++)
        {
            while(!st1.empty() && heights[st1.top()]>=heights[i])
            {
            st1.pop();
            }
            if(!st1.empty())
            {
                pse[i]=st1.top();
            }
            st1.push(i);
        }
        st2.push(n-1);
        for(int i=n-2;i>=0;i--)
        {
            while(!st2.empty() && heights[st2.top()]>=heights[i])
            {
                st2.pop();
            }
            if(!st2.empty())
            {
                nse[i]=st2.top();
            }
            st2.push(i);
        }
        int max_Area=0;
        for(int i=0;i<n;i++)
        {
            int height=heights[i];
            int breath=nse[i]-pse[i]-1;
            int area=height*breath;
            max_Area=max(max_Area,area);

        }
        return max_Area;

        
    }
};
