package t207;

import java.util.*;

public class CourseSchedule {



    public static boolean canFinish(int numCourses, int[][] prerequisites) {

        int in[] = new int[numCourses];
        Map<Integer,List<Integer>> graph = new HashMap<Integer,List<Integer>>();
        for(int i=0;i<prerequisites.length;i++){
            if(graph.containsKey(prerequisites[i][1])){
                graph.get(prerequisites[i][1]).add(prerequisites[i][0]);
            }else{
                List<Integer> list = new ArrayList<Integer>();
                list.add(prerequisites[i][0]);
                graph.put(prerequisites[i][1],list);
             }
            in[prerequisites[i][0]]++;
        }

        Deque<Integer> q = new ArrayDeque<Integer>();
        for(int i=0;i<in.length;i++){
            if(in[i]==0){
                q.add(i);
            }
        }
        while(!q.isEmpty()){
            Integer a = q.pop();
            if(graph.containsKey(a)){
                for(int i=0;i<graph.get(a).size();i++){
                    in[graph.get(a).get(i)]--;
                    if(in[graph.get(a).get(i)]==0){
                        q.push(graph.get(a).get(i));
                    }
                }

            }
        }
        for(int i=0;i<in.length;i++){
            if(in[i]!=0){
                return false;
            }
        }
        return true;
    }
    public static void main(String args[]){
        int dd[][] = {{1,0}};
        boolean res = canFinish(2,dd);
    }
}
