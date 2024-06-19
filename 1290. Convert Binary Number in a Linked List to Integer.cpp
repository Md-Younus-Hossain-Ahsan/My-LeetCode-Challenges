//1290. Convert Binary Number in a Linked List to Integer

class Solution {
public:
    int getDecimalValue(ListNode* head) {
        int result = 0;
        while (head != nullptr) {
            result = result << 1;  // Shift result to the left by 1 bit
            result += head->val;   // Add the current bit to result
            head = head->next;     // Move to the next bit
        }
        return result;
    }
};