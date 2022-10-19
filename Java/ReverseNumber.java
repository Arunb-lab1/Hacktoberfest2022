// Program to reverse a number.

import java.util.Scanner;

class ReverseNumber
{
    public static void main(String[] args)
    {
        int number;
        Scanner cin = new Scanner(System.in);

        System.out.println("Enter the number:");
        number = cin.nextInt();
        System.out.println("After reversal, " + number + " becomes " + reverseNumber(number));
    }

    static int reverseNumber(int a)
    {
        int b, c = 0;

        do
        {
            b = a % 10;
            c = c * 10 + b;
            a = a / 10;
        }
        while (a != 0);

        return  c;
    }
}
