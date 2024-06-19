//1925. Count Square Sum Triples

class Solution {
public:
    int countTriples(int n) {
        
        int count = 0;
        
        for(int a=1; a <= n; a++)
        {
            for(int b=a+1; b <= n; b++)
            {
                int c = sqrt(a * a + b * b);
                
                if(a * a + b * b == c * c && c <= n)
                    count += 2;
            }
        }
        
        return count;        
    }
};