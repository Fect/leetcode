import t816.AmbiguousCoordinates;

import java.util.ArrayList;
import java.util.HashMap;
import java.util.List;
import java.util.Map;

public class t811SubdomainVisitCount {
    public List<String> subdomainVisits(String[] cpdomains) {
        Map<String,Integer> m = new HashMap<String,Integer>();
        for(String str:cpdomains){
            String[] s1 =  str.split(" ");
            String doms = s1[1];
            String[] s2 = doms.split("\\.");
            String tmp = s2[s2.length-1];
            m.put(tmp,m.getOrDefault(tmp,0)+Integer.valueOf(s1[0]));
            for(int i=s2.length-2;i>=0;i--){
                tmp = s2[i]+"."+tmp;
                m.put(tmp,m.getOrDefault(tmp,0)+Integer.valueOf(s1[0]));
            }
        }

        List<String> list = new ArrayList<String>();
        for(String key:m.keySet()){
            list.add(m.get(key)+" "+key);
        }
        return list;
    }
    public static void main(String args[]){
        t811SubdomainVisitCount t811 = new t811SubdomainVisitCount();
        String[] strs={"9001 discuss.leetcode.com"};

        List<String> res = t811.subdomainVisits(strs);
        for(String str:res){
            System.out.println(str);
        }
    }
}
