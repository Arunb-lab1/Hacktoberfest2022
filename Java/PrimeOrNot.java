import java.util.Scanner;
import static java.lang.Math.sqrt;

public class PrimeChecker {
    public static void main(String[] args){
        Scanner sc=new Scanner(System.in);
        int n=sc.nextInt();
        boolean isPrime=true;

        for(int i=2;i<sqrt(n);i++){
            if(n%i==0){
                isPrime=false;
                break;
            }
        }

        if(isPrime){
            // code to execute if the number is prime
            System.out.println("the number is prime");
        }else{
            // code to execute if the number is not prime
            System.out.println("the number is NOT prime");
        }
    }
}
