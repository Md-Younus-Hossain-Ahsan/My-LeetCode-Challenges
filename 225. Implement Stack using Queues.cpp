//225. Implement Stack using Queues

class MyStack {
public:
    queue<int> p, q;

    MyStack() {}

    void push(int x) {
        
        p.push(x);
    }
    
    int pop() {
        
        while (p.size() > 1) 
        {
            q.push(p.front());
            p.pop();
        }
        
        int topElement = p.front();
        p.pop();
        swap(p, q);
        return topElement;
    }
    
    int top() {
        
        while (p.size() > 1) 
        {
            q.push(p.front());
            p.pop();
        }
        
        int topElement = p.front();
        q.push(p.front());
        p.pop();
        swap(p, q);
        return topElement;
    }
    
    bool empty() {
        
        return p.empty() && q.empty();
    }
};