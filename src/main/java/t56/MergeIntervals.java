package t56;

import java.util.ArrayList;
import java.util.Arrays;
import java.util.Collections;
import java.util.List;

import static java.util.Arrays.sort;

public class MergeIntervals {

    public int[][] merge(int[][] intervals) {

        int n = intervals.length;
        int n1[] = new int[n];
        int n2[] = new int[n];
        for(int i=0;i<n;i++){
            n1[i] = intervals[i][0];
            n2[i] = intervals[i][1];
        }

        Arrays.sort(n1);
        Arrays.sort(n2);
        List<List<Integer>> res = new ArrayList<List<Integer>>(0);
        for(int i=0,j=0;i<n;i++){
            if(i==n-1||n1[i+1]>n2[i]){
                List<Integer> tmp = new ArrayList<Integer>();
                tmp.add(n1[j])
                tmp.add(n2[i]);
                j++;
                res.add(tmp);
            }
        }
        int[][] ans = new int[res.size()][2];
        for(int i=0;i<res.size();i++){
            ans[i][0] = res.get(i).get(0);
            ans[i][1] = res.get(i).get(1);
        }
        return ans;
    }
}
