class testT <T, E>{
    {
        T t1 ;
    }
    testT (T t){
        this.t = t;
    }
    T t;

    public void test1() {
        System.out.println(this.t);
    }

    public void test2(T t,E e) {
        System.out.println(t);
        System.out.println(e);
    }
    public <T> T test3(T t) {
        System.out.println(t);
        return t;
    }

    public static void main (String args[]) {
        testT <Integer,String > a = new testT<>(1);
        a.test1();
        a.test2(2,"ds");
        a.test3("1234");

    }
}