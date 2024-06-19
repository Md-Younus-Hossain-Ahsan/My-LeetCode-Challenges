//1656. Design an Ordered Stream

class OrderedStream {
private:
    vector<std::string> stream;
    int ptr;
public:
    OrderedStream(int n) : stream(n), ptr(1) {}

    vector<string> insert(int idKey, string value) {
        
        stream[idKey - 1] = value;

        vector<string> result;
        while (ptr <= stream.size() && !stream[ptr - 1].empty()) {
            result.push_back(stream[ptr - 1]);
            ++ptr;
        }
        return result;
    }
};