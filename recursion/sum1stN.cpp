class Solution{	
	public:
		int NnumbersSum(int N){
			if (N==1){
                return N;
            }
        return N+NnumbersSum(N-1);
		}
};
