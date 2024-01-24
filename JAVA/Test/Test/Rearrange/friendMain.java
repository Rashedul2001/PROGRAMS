package Rearrange;
public class friendMain{
    public static void main(String... args){
        System.out.println(Friend.numberOfFriends);
        Friend friend1 = new Friend("Rahim");
        System.out.println(Friend.numberOfFriends);
        Friend friend2 = new Friend("karim");
        System.out.println(Friend.numberOfFriends);

//        System.out.println(friend1.numberOfFriends);//shouldn't do this
        // static = modifier a single copy of a variable/method is created and shared. the class owns the static member

        System.out.println(Math.sqrt(2.5));


    }

}