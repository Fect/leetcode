import java.util.*;

public class MostProfitAssigningWorkT826 {

/*    public int maxProfitAssignment(int[] difficulty, int[] profit, int[] worker) {
        TreeMap<Integer,Integer> map = new TreeMap<Integer, Integer>();
        for(int i=0;i<difficulty.length;i++){
            map.put(difficulty[i],Math.max(map.getOrDefault(difficulty[i],0),profit[i]));
        }
        int maxc = 0;
        for(Integer index:map.keySet()){
            maxc = Math.max(maxc,map.get(index));
            map.put(index,maxc);
        }
        int res = 0;
        for(int i=0;i<worker.length;i++){
            Integer key = map.floorKey(worker[i]);
            if(key==null){
                continue;
            }
            res+=map.get(key);
        }

        return res;
    }*/
    public int maxProfitAssignment(int[] difficulty, int[] profit, int[] worker) {
        int res = 0;
        List<int []> list = new ArrayList<int []>();
        for(int i=0;i<difficulty.length;i++){
            list.add(new int[]{difficulty[i],profit[i]});
        }
        Collections.sort(list,(a,b)->{return a[0]-b[0];});
        Arrays.sort(worker);
        for(int i=0;i<worker.length;i++){
            int j=0;
            int curm = 0;
            while(j<list.size()&&list.get(j)[0]<=worker[i]){
                curm = Math.max(curm,list.get(j)[1]);
                j++;
            }
            res+=curm;
        }
        return res;
    }
}
