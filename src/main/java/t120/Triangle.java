package t120;

import java.util.AbstractList;
import java.util.ArrayList;
import java.util.List;

public class Triangle {

    public static void main(String[] args) {
        for (String color : Color.color)
            System.out.print(color + " ");
        Color.color.set(3, "white");
    }
}

class Color
{
    private static String[] _color = { "red", "blue", "yellow", "black" };
    public static List<String> color = new AbstractList<String>()
    {
        @Override
        public String get(int index)
        {
            return _color[index];
        }
        @Override
        public String set(int index, String value)
        {
            throw new RuntimeException("为了代码安全,不能修改数组");
        }
        @Override
        public int size()
        {
            return _color.length;
        }
    };


}
