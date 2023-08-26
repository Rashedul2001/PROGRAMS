import java.util.*;
public class ArrayList2D{
    public static void main(String[] args){
       ArrayList<String> Bikes=new ArrayList<>();
       Bikes.add("KawaSaki Ninja H2R");
       Bikes.add("KawaSaki Ninja H2");
       Bikes.add("R15");
       Bikes.add("KTM");
       ArrayList<String> Cars = new ArrayList<>();
      Cars.add("Ferrari");
      Cars.add("Bugatti");
      Cars.add("Lamborghini");


       ArrayList<ArrayList<String>> FavouriteThings= new ArrayList<>();
       FavouriteThings.add(Bikes);
       FavouriteThings.add(Cars);
       System.out.println(FavouriteThings.get(0));
       System.out.println(FavouriteThings.get(0).get(0));





    }
}