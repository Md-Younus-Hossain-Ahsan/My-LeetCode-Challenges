//28. Find the Index of the First Occurrence in a String

class Solution {
public:
    int strStr(string haystack, string needle) {

        int result = haystack.find(needle);

        if(result == string::npos){
            return -1;
        }

        return result;
    }
};