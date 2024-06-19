//832. Flipping an Image

class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<std::vector<int>>& image) {
        vector<vector<int>> flip_image(image.size(), vector<int>(image[0].size()));

        for(int i = 0; i < image.size(); i++) 
        {
            for(int j = 0; j < image[i].size(); j++) 
            {
                flip_image[i][j] = abs(image[i][image[i].size() - 1 - j] - 1);
            }
        }

        return flip_image;
    }
};