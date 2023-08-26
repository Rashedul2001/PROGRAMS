public class ObjectMain {
    // this class should be in its own file
    // because it promotes modularity and code organization.
    public static class Human{
        String name;
        int age;
        double weight;
        Human(String name, int age, double weight) {
            this.name=name;
            this.age= age;
            this.weight = weight;

        }
        //constructor override
        Human(String name,int age){
            this.name=name;
            this.age= age;

        }
        void great(){
            System.out.println("Hello I,m "+ this.name);
        }
        void drink() {
            System.out.println(this.name + " is now drinking");
        }

    }


    public static void main(String[] args)
    {
        // these are from another file that contains a class name Car
        Car mycar=new Car();
        System.out.println(mycar.build);
        System.out.println(mycar.name);
        System.out.printf("This car is worth %.2f Taka\n",mycar.price);
        mycar.drive();
        mycar.brake();
//        System.out.println("this is toString returns normally "+ mycar.toString());
        System.out.println("this is after overriding it "+ mycar.toString());// after overriding toString
        System.out.println(mycar);// implicitly call mycar.toString();

        // end of that class example
        // this object is declared in main class
        Human human1= new Human("Muhammad",30,6.5);
        Human human2= new Human("Zakir",47, 5.4),human3=new Human("Rahim",32);

        human1.drink();
        human2.great();
        System.out.println(human3.weight);








    }
}
