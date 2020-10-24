package t763;

import java.util.ArrayList;
import java.util.HashMap;
import java.util.List;
import java.util.Map;

public class PartitionLabels {

    public List<Integer> partitionLabels(String S) {
        List<Integer> res = new ArrayList<Integer>();
        Map<Character,Integer> map = new HashMap<Character,Integer>();
        int last = 0;
        int start = 0;
        for(int i=0;i<S.length();i++){
            map.put(S.charAt(i),i);
        }
        for(int i=0;i<S.length();i++){
            last = Math.max(last,map.get(S.charAt(i)));
            if(i==last){
                res.add(i-start+1);
                start = i+1;
            }
        }
        return res;
    }
}
