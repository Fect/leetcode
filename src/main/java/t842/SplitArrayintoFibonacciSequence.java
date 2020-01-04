package t842;

import java.util.ArrayList;
import java.util.List;

public class SplitArrayintoFibonacciSequence {
    public List<Integer> splitIntoFibonacci(String S) {
        List<Integer> ans = new ArrayList<Integer>();

        dfs(S, 0, ans);
        return ans;
    }

    public boolean dfs(String s, int index, List<Integer> ans) {

        if (index == s.length() && ans.size() >= 3) return true;

        for (int i = index; i < s.length(); i++) {
            if (s.charAt(index) == '0' && i > index) break;

            long number = Long.parseLong(s.substring(index, i + 1));
            if (number > Integer.MAX_VALUE) break;

            int size = ans.size();
            if (ans.size() >= 2 && number > ans.get(size - 2) + ans.get(size - 1)) break;

            if (ans.size() <= 1 || number == ans.get(size - 2) + ans.get(size - 1)) {
                ans.add((int)number);

                if (dfs(s, i + 1, ans))
                    return true;

                ans.remove(ans.size() - 1);
            }
        }
        return false;
    }
}
