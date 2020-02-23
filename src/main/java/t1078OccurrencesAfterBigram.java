import java.util.ArrayList;
import java.util.List;

public class t1078OccurrencesAfterBigram {

    public String[] findOcurrences(String text, String first, String second) {
        List<String> result = new ArrayList<String>();
        String[] arr = text.split(" ");
        for (int i=0; i<arr.length-2; i++) {
            if (first.equals(arr[i]) && second.equals(arr[i+1])) {
                result.add(arr[i+2]);
            }
        }
        return result.toArray(new String[result.size()]);
    }

}
