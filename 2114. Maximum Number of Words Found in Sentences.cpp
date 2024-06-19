//2114. Maximum Number of Words Found in Sentences

class Solution {
public:
    int mostWordsFound(std::vector<std::string>& sentences) {
        int maxWords = 0;
        for (const std::string& sentence : sentences) {
            int wordCount = countWords(sentence);
            maxWords = std::max(maxWords, wordCount);
        }
        return maxWords;
    }

private:
    int countWords(const std::string& sentence) {
        std::istringstream iss(sentence);
        int count = 0;
        std::string word;
        while (iss >> word) {
            count++;
        }
        return count;
    }
};