package HelloWorldwithInheritance.src.com.pog;

public class HelloWorld implements HelloInterface{
    private String s;

    public HelloWorld(String s) {
        checkS(s);
        this.s = s;
    }
    public void setS(String newS) {
        this.s = newS;
    }
    public String getS() {
        return this.s;
    }
    public void printHello() {
        System.out.println(s);
    }
    private void checkS(String s) {
        if (s != "Hello, World!") {
            throw new IllegalArgumentException("s has to be Hello, World!");
        }
    }
}
