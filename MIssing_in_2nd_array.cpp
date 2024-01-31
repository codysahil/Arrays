class Solution{
	
	
	public:
	vector<long long> findMissing(long long A[], long long B[],  
                 int N, int M) 
	{ 
	    // Your code goes here
	    vector<long long> ans;
	    unordered_map<long long, bool> mp;
	    for(int i = 0; i<M; i++){
	        mp[B[i]] = 1;
	    }
	    for(int i = 0; i<N; i++){
	        if(mp.find(A[i]) == mp.end()){
	            ans.push_back(A[i]);
	        }
	    }
	    return ans;
	} 
};
	

