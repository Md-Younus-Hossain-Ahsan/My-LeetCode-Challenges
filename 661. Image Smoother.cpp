//661. Image Smoother

class Solution {
public:
    vector<vector<int>> imageSmoother(vector<vector<int>>& img) {
        
        int m = img.size();
        int n = img[0].size();
        
        if (m == 0) return {}; 
        
        if (n == 0) return {}; 
        
        if (m == 1 && n == 1) return img;
        
        if (m == 1) return singleRow(img);
        
        if (n == 1) return singleCol(img);
        
        return MultiDim(img);     
    }
    
    vector<vector<int>> singleRow(vector<vector<int>>& img) {
        
        int n = img[0].size();
        vector<vector<int>> res(1, vector<int>(n, 0));
        
        for(int j=0; j < n; j++)
        {
            if(j == 0)
                res[0][j] = filter(0, 0, 0, 0, img[0][j], img[0][j+1], 0, 0, 0, 2);
            else if(j == n-1)
                res[0][j] = filter(0, 0, 0, img[0][j-1], img[0][j], 0, 0, 0, 0, 2);
            else
                res[0][j] = filter(0, 0, 0, img[0][j-1], img[0][j], img[0][j+1], 0, 0, 0, 3);
        }
        
        return res;        
    }
    
    vector<vector<int>> singleCol(vector<vector<int>>& img) {
        
        int m = img.size();
        vector<vector<int>> res(m, vector<int>(1, 0));
        
        for(int i=0; i < m; i++)
        {
            if(i == 0)
                res[i][0] = filter(0, 0, 0, 0, img[i][0], 0, 0, img[i+1][0], 0, 2);
            else if(i == m-1)
                res[i][0] = filter(0, img[i-1][0], 0, 0, img[i][0], 0, 0, 0, 0, 2);
            else
                res[i][0] = filter(0, img[i-1][0], 0, 0, img[i][0], 0, 0, img[i+1][0], 0, 3);
        }
        
        return res;
    }
    
    vector<vector<int>> MultiDim(vector<vector<int>>& img) {
        
        int m = img.size();
        int n = img[0].size();
        
        vector<vector<int>> res(m, vector<int>(n, 0));
        
        for(int i=0; i < m; i++)
        {
            for(int j=0; j < n; j++)
            {
                if(i == 0 && j == 0)
                    res[i][j] = filter(0, 0, 0, 0, img[i][j], img[i][j+1], 0, img[i+1][j], img[i+1][j+1], 4);
                else if(i == 0 && j == n-1)
                    res[i][j] = filter(0, 0, 0, img[i][j-1], img[i][j], 0, img[i+1][j-1], img[i+1][j], 0, 4);
                else if(i == m-1 && j == 0)
                    res[i][j] = filter(0, img[i-1][j], img[i-1][j+1], 0, img[i][j], img[i][j+1], 0, 0, 0, 4);
                else if(i == m-1 && j == n-1)
                    res[i][j] = filter(img[i-1][j-1], img[i-1][j], 0, img[i][j-1], img[i][j], 0, 0, 0, 0, 4);
                else if(i == 0)
                    res[i][j] = filter(0, 0, 0, img[i][j-1], img[i][j], img[i][j+1], img[i+1][j-1], img[i+1][j], img[i+1][j+1], 6);
                else if(i == m-1)
                    res[i][j] = filter(img[i-1][j-1], img[i-1][j], img[i-1][j+1], img[i][j-1], img[i][j], img[i][j+1], 0, 0, 0, 6);
                else if(j == 0)
                    res[i][j] = filter(0, img[i-1][j], img[i-1][j+1], 0, img[i][j], img[i][j+1], 0, img[i+1][j], img[i+1][j+1], 6);
                else if(j == n-1)
                    res[i][j] = filter(img[i-1][j-1], img[i-1][j], 0, img[i][j-1], img[i][j], 0, img[i+1][j-1], img[i+1][j], 0, 6); 
                else
                    res[i][j] = filter(img[i-1][j-1], img[i-1][j], img[i-1][j+1], img[i][j-1], img[i][j], img[i][j+1], img[i+1][j-1], img[i+1][j], img[i+1][j+1], 9);
            }
        }
        
        return res;
    }
    
    int filter(int a, int b, int c, int d, int e, int f, int g, int h, int i, int non_empty) {
        
        return (int) ((double) (a + b + c + d + e + f + g + h + i) / (double) non_empty);
    }
};