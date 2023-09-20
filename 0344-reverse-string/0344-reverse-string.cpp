class Solution {
public:
    void reverseString(vector<char>& s) {
        int st=0;
        int e = s.size() - 1;
        
        while(st<e){
            swap(s[st] , s[e]);
            st++; e--;
        }
    }
};




/*
class Solution {
public:
    void reverseString(vector<char>& s) {
        int s=0;
        int e = s.size() - 1;
        
        while(start<e){
            swap(s[s++] , s[e--]);
        }
    }
};
*/