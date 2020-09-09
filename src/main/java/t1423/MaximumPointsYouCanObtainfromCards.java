package t1423;

public class MaximumPointsYouCanObtainfromCards {

    public static int maxScore(int[] cardPoints, int k) {

        int lastNum = 0;
        int n = cardPoints.length;
        for(int i=0;i<=n-k-1;i++){
           lastNum+=cardPoints[i];
        }
        int totalNum = lastNum;
        for(int i=n-k;i<n;i++){
            totalNum += cardPoints[i];
        }

        if(n==k){
            return totalNum;
        }
        int l = 0,r = n-k-1;
        int res = totalNum-lastNum;
        while(l<r&&r<n-1){

            lastNum-=cardPoints[l];
            l++;
            r++;
            lastNum+=cardPoints[r];
            res = Math.max(res,totalNum-lastNum);
        }
        return res;
    }
    public static void main(String args[]){
        int[] a = new int[]{1,2,3,4,5,6,1};
        int ab = maxScore(a,3);
    }

}
