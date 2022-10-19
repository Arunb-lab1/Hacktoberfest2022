import java.util.Scanner;

public class ReverseString {
    public static void main(String[] args)
     {  
         
        Scanner q = new Scanner(System.in);
        
        System.out.println(reverseString(q.nextLine()));       
        
    }  
        public static String reverseString(String b)
        {  
            char a[]=b.toCharArray();  
            String r="";  
            
            for(int i=a.length-1;i>=0;i--)
            {  
                r+=a[i];  
            }  
            return r;  
        }  
}
  
    
    
