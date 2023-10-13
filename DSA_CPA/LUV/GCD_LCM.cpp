#include<iostream>
typedef long long int ll;

// long long findGCD(long long a, long long b){
//     if(b%a==0) return a;    
//     return findGCD(b%a, a);


// }

ll findGCD(ll a, ll b){
    if(b==0) return a;

    return findGCD(b, a%b);
}

ll findLCM(ll a, ll b){
    return ((a*b)/findGCD(a,b));
}


int main(){

        std::cout << findGCD(15,27) << " " << findGCD(27, 9) << std::endl;
        std::cout << findLCM(15,27) << " " << findLCM(27, 9) << std::endl;


    return 0;
}




