// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends


class Solution
{
    // this solution only for not connected graph
    public:
    //Function to return Breadth First Traversal of given graph.
	vector<int>bfsOfGraph(int V, vector<int> adj[])
	{
	    vector<int>vistid(V+1,0);
	    vector<int>Ans;
	  //  for(int i=0;i<V;i++)
	    //{
	      //  if(vistid[i]!=1)
	        //{
	            queue<int>A;
	            A.push(0);
	            vistid[0]=1;
	            while(!A.empty())
	            {
	                int Z=A.front();
	                A.pop();
	                Ans.push_back(Z);
	                for(auto s:adj[Z])
	                {
	                    if(vistid[s]!=1)
	                    {
	                        A.push(s);
	                        vistid[s]=1;
	                    }
	                }
	           }
	      //  }
	    //}
	   // cout<<adj.size();
	    return Ans;
	    // Code here
	}
};

// { Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int V, E;
    	cin >> V >> E;

    	vector<int> adj[V];

    	for(int i = 0; i < E; i++)
    	{
    		int u, v;
    		cin >> u >> v;
    		adj[u].push_back(v);
    // 		adj[v].push_back(u);
    	}
        // string s1;
        // cin>>s1;
        Solution obj;
        vector<int>ans=obj.bfsOfGraph(V, adj);
        for(int i=0;i<ans.size();i++){
        	cout<<ans[i]<<" ";
        }
        cout<<endl;
	}
	return 0;
}  // } Driver Code Ends
