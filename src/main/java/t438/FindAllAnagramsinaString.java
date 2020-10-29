package t438;

import java.util.ArrayList;
import java.util.List;

public class FindAllAnagramsinaString {

    boolean compare(int[] a,int[] b){
        for(int i=0;i<a.length;i++){
            if(a[i]!=b[i]){
                return false;
            }
        }
        return true;
    }

    public List<Integer> findAnagrams(String s, String p) {

        int[] m1 = new int[26];
        int[] m2 = new int[26];

        List<Integer> res = new ArrayList<Integer>();
        for(int i=0;i<p.length();i++){
            m1[s.charAt(i)-'a']++;
            m2[p.charAt(i)-'a']++;
        }
        if(compare(m1,m2)){
            res.add(0);
        }
        for(int i=p.length();i<s.length();i++){
            m1[s.charAt(i)]++;
            m1[s.charAt(i-p.length())]--;
            if(compare(m1,m2)){
                res.add(i-p.length()+1);
            }
        }
        return res;
    }

}
