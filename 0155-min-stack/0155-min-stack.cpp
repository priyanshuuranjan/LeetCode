 class MinStack {
public:
    vector< pair<int,int> > s;
	
    MinStack() { }
    
    void push(int val) {
        if(s.empty())
            s.push_back({val,val});
        else
            s.push_back({val,min(s.back().second,val)});    
    }
    
    void pop() { s.pop_back(); }
    
    int top() { return s.back().first; }
    
    int getMin() { return s.back().second; }
};

// best solution












//  class MinStack {
//     int *arr;
//     int top1;
//     int top2;
//     int size;
// public:
//     MinStack() {
        
//     }
    
//     void push(int val) {
        
//     }
    
//     void pop() {
//         if( top1 >= 0) {
//             int ans = arr[top1];
//             top1--;
//             return ans;
//         }
//         else
//         {
//             return -1;
//         }
//     }
    
//     int top() {
        
//     }
    
//     int getMin() {
        
//     }
// };

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */
