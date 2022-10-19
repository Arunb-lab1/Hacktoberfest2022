import java.util.*;

public class fatorial {
      
        public static void main(String args[]){  
            Scanner q =new Scanner(System.in);
            int n=q.nextInt();
         int i,a=1;  
            
         for(i=1;i<=n ;i++){    
             a=a*i;    
         }    
         System.out.println(n+"!="+a);    
        }  
       }  

