// Given n points on a 2D plane where points[i] = [xi, yi], Return the widest vertical area between two points such that no points are inside the area.
// Example 2:
// Input: points = [[3,1],[9,0],[1,0],[1,4],[5,3],[8,8]]
// Output: 3


class Solution {
public:
    int maxWidthOfVerticalArea(vector<vector<int>>& points) {
        sort(points.begin(), points.end());
        // int width=0;
        int maxWidth=0;

        for(int i=1; i<points.size();i++){
             maxWidth=max(maxWidth,points[i][0]-points[i-1][0]);
            // width=points[i][0]-points[i-1][0];
            // if(width>maxWidth) maxWidth=width;
        }
        return maxWidth;

    }
};
