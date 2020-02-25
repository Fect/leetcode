package t884.UncommonWordsfromTwoSentences;

import java.util.ArrayList;
import java.util.HashMap;
import java.util.List;
import java.util.Map;

public class cpp {
    public String[] uncommonFromSentences(String A, String B) {
        List<String> res = new ArrayList<String>();
        Map<String,Integer> map = new HashMap<String,Integer>();
        String[] s1 = A.split(" ");
        String[] s2 = A.split(" ");
        for(int i=0;i<s1.length;i++){
          map.put(s1[i],map.getOrDefault(s1[i],0)+1);
        }
        for(int i=0;i<s2.length;i++){
            map.put(s1[i],map.getOrDefault(s1[i],0)+1);
        }
        for(String key:map.keySet()){
            if(map.get(key)==1){
                res.add(key);
            }
        }
        return res.toArray(new String[res.size()]);
    }
}
