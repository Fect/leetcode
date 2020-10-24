package t338;

public class CountingBits {

    public int[] countBits(int num) {
        int[] res = new int[num+1];
        res[0] = 0;
        for(int i=0;i<=num;i++){
            if(i%2==0){
                res[i] = res[i/2];
            }else{
                res[i] = res[i/2]+1;
            }
        }
        return res;
    }
}
