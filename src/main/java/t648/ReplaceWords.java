package t648;

import java.util.HashSet;
import java.util.List;

public class ReplaceWords {

    public String replaceWords(List<String> dict, String sentence) {

        String res="";
        HashSet<String> se = new HashSet<String>();
        for(String s:dict){
            se.add(s);
        }
        String d[] = sentence.split(" ");
        for(String word:d){
            for(int i=1;i<word.length();i++){
                if(se.contains(word.substring(0,i))){
                    word = word.substring(0,i);
                    break;
                }
            }
            res = res+word;
            res = res+" ";
        }
        return res.substring(0,res.length()-1);
    }

}
