public class LongestTurbulentSubarray {

    public static int maxTurbulenceSize(int[] A) {
        int n = A.length;
        int[] dp = new int[n];

        if(n<=1){
            return n;
        }
        int res = 0;
        dp[0] = 1;
        if(A[1]==A[0]){
            dp[1] = 1;
            res = Math.max(res,dp[1]);
        }else{
            dp[1] = 2;
            res = Math.max(res,dp[1]);
        }
        for(int i=2;i<n;i++){
            if(A[i]==A[i-1]){
                dp[i] = 1 ;
            }else if(( A[i]>A[i-1]&& A[i-1]< A[i-2])||( A[i]< A[i-1]&& A[i-1]> A[i-2])){
                dp[i] = dp[i-1]+1;
            }else{
                dp[i] = 2;
            }
            res = Math.max(res,dp[i]);
        }
        return res;
    }
    public static void main(String[] args){

        int[] a={0,1,1,0,1,0,1,1,0,0};

        int res = maxTurbulenceSize(a);
    }
}
