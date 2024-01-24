package packageExample.package1;
import packageExample.package2.*;

public class A {
    public static void main(String[] args){
        C c= new C();
//        System.out.println(c.defaultMessage);// not accessible outside the package
        System.out.println(c.publicMessage);

    }
}
