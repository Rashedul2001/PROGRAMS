package packageExample.package2;

import packageExample.package1.*;

public class aSub extends A {
    public static void main(String[] args){
        C c= new C();
        System.out.println(c.defaultMessage);// now it is accessible


    }

}
