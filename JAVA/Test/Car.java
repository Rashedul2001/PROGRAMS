public class Car {


    String name= "BlueBeast";
    String build="Ferrari";
    String color="Blue";
    double price=20000000.00;
    void drive(){
        System.out.println("You are now driving this Car");
    }
    void brake(){
        System.out.println("The Car has stopped");
    }
    public String toString(){
        return  name+ " "+build+" "+color+" "+ price;

    }

}
