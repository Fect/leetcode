package t935;

public class KnightDialer {

    public int knightDialer(int n) {
        int mod = (int)1e9 + 7;
        long l1,l2,l3,l4,l5,l6,l7,l8,l9,l0;
        l1=l2=l3=l4=l5=l6=l7=l8=l9=l0=1;

        long t1,t2,t3,t4,t5,t6,t7,t8,t9,t0;
        for(int i=n-1;i>0;i--){
            t1 = (l6+l8)%mod;
            t2 = (l7+l9)%mod;
            t3 = (l8+l4)%mod;
            t4 = (l3+l9+l0)%mod;
            t5 = 0;
            t6 = (l1+l7+l0)%mod;
            t7 = (l2+l6)%mod;
            t8 = (l1+l3)%mod;
            t9 = (l2+l4)%mod;
            t0 = (l4+l6)%mod;

            l1 = t1;
            l2 = t2;
            l3 = t3;
            l4 = t4;
            l5 = t5;
            l6 = t6;
            l7 = t7;
            l8 = t8;
            l9 = t9;
            l0 = t0;
        }
        int res = 0;
        res = (int)(res+l1)%mod;
        res = (int)(res+l2)%mod;
        res = (int)(res+l3)%mod;
        res = (int)(res+l4)%mod;
        res = (int)(res+l5)%mod;
        res = (int)(res+l6)%mod;
        res = (int)(res+l7)%mod;
        res = (int)(res+l8)%mod;
        res = (int)(res+l9)%mod;
        res = (int)(res+l0)%mod;

        return res;
    }
}
