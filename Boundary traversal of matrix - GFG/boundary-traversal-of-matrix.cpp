//{ Driver Code Starts
#include <bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends

class Solution
{   
    public:
    //Function to return list of integers that form the boundary 
    //traversal of the matrix in a clockwise manner.
    vector<int> boundaryTraversal(vector<vector<int> > matrix, int n, int m) 
   {
       if(n==1)
        return matrix[0];
       if(m==1){
           vector<int> j;
           int k=0;
           for(int i=0;i<matrix.size();i++){
               j.push_back(matrix[i][k]);
           }
           return j;
       }
       vector<int> v1 = matrix[0];
       vector<int> v2;
       for(int i=0;i<n;i++){
           v2.push_back(matrix[i][matrix[i].size()-1]);
       }
       reverse(v2.begin(),v2.end());
       v2.pop_back();
       reverse(v2.begin(),v2.end());
       v2.pop_back();
       vector<int> v3 = matrix[matrix.size()-1];
       reverse(v3.begin(),v3.end());
       vector<int> v4;
       int k = 0;
       for(int i=0;i<matrix.size();i++){
           v4.push_back(matrix[i][k]);
       }
       v4.pop_back();
       reverse(v4.begin(),v4.end());
       v4.pop_back();
       int sizeAll = v1.size()+v2.size()+v3.size()+v4.size();
       vector<int> vFinal;
       for(int i=0;i<v1.size();i++){
           vFinal.push_back(v1[i]);
       }
       for(int i=0;i<v2.size();i++){
           vFinal.push_back(v2[i]);
       }
       for(int i=0;i<v3.size();i++){
           vFinal.push_back(v3[i]);
       }
       for(int i=0;i<v4.size();i++){
           vFinal.push_back(v4[i]);
       }
       
       return vFinal;
   }
};




//{ Driver Code Starts.
int main() {
    int t;
    cin>>t;
    
    while(t--) 
    {
        int n,m;
        cin>>n>>m;
        vector<vector<int> > matrix(n); 

        for(int i=0; i<n; i++)
        {
            matrix[i].assign(m, 0);
            for( int j=0; j<m; j++)
            {
                cin>>matrix[i][j];
            }
        }

        Solution ob;
        vector<int> result = ob.boundaryTraversal(matrix, n, m);
        for (int i = 0; i < result.size(); ++i)
                cout<<result[i]<<" ";
        cout<<endl;
    }
    return 0;
}
// } Driver Code Ends