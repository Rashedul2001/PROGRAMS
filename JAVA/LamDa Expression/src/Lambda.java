public class Lambda {
    public static void main(String[] args) {
        Cat myCat = new Cat();
//        myCat.print();
//        printThing(myCat);

        // now we don't need to pass any implemented class we can just implement on the go using Lambda
//        printThing(
//                (/*parameters*/)->{
//                    /*implementation*/
//                    System.out.println("Meow");
//                }
//        );

//        printThing(
//                (/*return type*/)->System.out.println("Meow")// if the implementation is of only one line
//        );
        // we can use the implementation as a variable too
        Printable lambdaPrintable = ()-> System.out.println("Meow");
        printThing(lambdaPrintable);


        Printable2 lambda2=s-> "I'm Saying"+s;
        SayHi(lambda2);
        //just F..k.d by Java





    }

    static void printThing(Printable thing) {
        thing.print();
    }
    static void SayHi(Printable2 t){
        t.greet("Hi");
    }
}