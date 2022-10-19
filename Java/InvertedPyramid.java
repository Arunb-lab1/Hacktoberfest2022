import java.util.Scanner;

public class Pattern {
    public static void main(String[] args){
        Scanner sc=new Scanner(System.in);
        int n=sc.nextInt();

        for(int i=n-1;i>=0;i--){
            for(int j=0;j<=(n-2-i);j++){
                System.out.print(" ");
            }
            for(int j=0;j<=i;j++){
                System.out.print("* ");
            }
            System.out.println();
        }
    }
}
