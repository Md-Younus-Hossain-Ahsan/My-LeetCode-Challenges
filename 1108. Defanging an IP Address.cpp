//1108. Defanging an IP Address

class Solution {
public:
    string defangIPaddr(string address) {
        
        string output;

        for(int i=0; i < address.size(); i++)
        {
            if(address[i] == '.')
            {
                output.push_back('[');
                output.push_back(address[i]);
                output.push_back(']');
                continue;
            }

            output.push_back(address[i]);
        }

        return output;
    }
};