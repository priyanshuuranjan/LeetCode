//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    bool checkYear(int N) {
        // code here
        
        if(N % 400 ==0){  // checking is it sis divisible by 400 
            return 1;
        }
        else if(N % 4 ==0 &&  N %100 != 0 ){
            return 1;
        }
        else return 0;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;
        Solution ob;

        if (ob.checkYear(N))
            cout << "true" << endl;
        else
            cout << "false" << endl;

        cout << "~"
             << "\n";
    }
    return 0;
}
// } Driver Code Ends