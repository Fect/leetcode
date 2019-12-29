package t816;

import java.util.ArrayList;
import java.util.List;

public class AmbiguousCoordinates {

    List<String> fun(String str){

        List<String> ans = new ArrayList<String>();
        if(!(str.startsWith("0")&&str.length()>1)){
            ans.add(str);
        }
        for(int i=0;i<str.length()-1;i++){
            String str1 = str.substring(0,i+1);
            String str2 = str.substring(i+1,str.length());

            if(str1.startsWith("0")&&str1.length()>1){
                continue;
            }
            if(str2.endsWith("0")){
                continue;
            }
            boolean flag = false;
            for(int j=0;j<str2.length();j++){
                if(str2.charAt(j)!='0'){
                    flag = true;
                    break;
                }
            }
            if(!flag){
                continue;
            }
            String temp = str1+"."+str2;
            ans.add(temp);
        }
        return ans;
    }

    public List<String> ambiguousCoordinates(String S) {

        List<String> ans = new ArrayList<String>();

        for(int i=1;i<S.length()-2;i++){
            String temp = "";
            String str1 = S.substring(1,i+1);
            String str2 = S.substring(i+1,S.length()-1);


            List<String> an1 = fun(str1);
            List<String> an2 = fun(str2);

            for (String s1:an1){
                for(String s2:an2){
                    temp="(";
                    temp+=s1;
                    temp+=", ";
                    temp+=s2;
                    temp+=")";
                    ans.add(temp);
                }
            }
        }

        return ans;
    }

    public static void main(String args[]){
        AmbiguousCoordinates a = new AmbiguousCoordinates();
        List<String> res = a.ambiguousCoordinates("(123)");
        for(String str:res){
            System.out.println(str);
        }
    }

}
