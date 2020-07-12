package t290;

import java.util.HashMap;
import java.util.List;
import java.util.Map;

public class WordPattern {
    public boolean wordPattern(String pattern, String str) {

        Map<Character,String> pM = new HashMap<Character, String>();
        Map<String,Character> sM = new HashMap<String,Character>();

        //String[] s1 = pattern.split(" ");
        String[] s2 = str.split(" ");
        if(pattern.length()!=s2.length){
            return false;
        }
        for(int i=0;i<pattern.length();i++){
            if(pM.containsKey(pattern.charAt(i))&&!pM.get(pattern.charAt(i)).equals(s2[i])){
                //System.out.println(pM.get(pattern.charAt(i)));
                //System.out.println(s2[i]);
                return false;
            }
            if(sM.containsKey(s2[i])&&sM.get(s2[i])!=pattern.charAt(i)){
                return false;
            }
            pM.put(pattern.charAt(i),s2[i]);
            sM.put(s2[i],pattern.charAt(i));
        }
        return true;
    }

    public static void main(String args[]){
        WordPattern t811 = new WordPattern();
        //String[] strs={"9001 discuss.leetcode.com"};

        Boolean res = t811.wordPattern("abba","dog cat cat dog");
        System.out.println(res);
        /*for(String str:res){
            System.out.println(str);
        }*/
    }

}

