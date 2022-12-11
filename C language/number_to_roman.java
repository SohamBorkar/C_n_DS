import java.util.*;
import java.lang.*;
import java.rmi.StubNotFoundException;
import java.io.*;

class number_to_roman
{
	public static void main (String[] args) throws java.lang.Exception
	{
		int n = 977;
        String S = "";
   
        for(int i = 0; i < 3; i++){
            int temp = n % 10;

            if (i == 0) {
                switch (temp) {
                    case 1:
                        S += "I";
                        break;
    
                    case 2:
                        S += "II";
                        break;
                    
                    case 3:
                        S += "III";
                        break;
    
                    case 4:
                        S += "VI";
                        break;
    
                    case 5:
                        S += "V";
                        break;
    
                    case 6:
                        S += "IV";
                        break;
                
                    case 7:
                        S += "IIV";
                        break;
    
                    case 8:
                        S += "IIIV";
                        break;
    
                    case 9:
                        S += "XI";
                        break;
                    
                    case 0:
                        break;
                
                    default:
                        break;
                }
            }
            
            if (i == 1) {
                switch (temp) {
                    case 1:
                        S += "X";
                        break;
    
                    case 2:
                        S += "XX";
                        break;
                    
                    case 3:
                        S += "XXX";
                        break;
    
                    case 4:
                        S += "LX";
                        break;
    
                    case 5:
                        S += "L";
                        break;
    
                    case 6:
                        S += "XL";
                        break;
                
                    case 7:
                        S += "XXL";
                        break;
    
                    case 8:
                        S += "XXXL";
                        break;
    
                    case 9:
                        S += "XC";
                        break;
                    
                    case 0:
                        break;
                
                    default:
                        break;
                }
            }

            if (i == 2) {
                switch (temp) {
                    case 1:
                        S += "C";
                        break;
    
                    case 2:
                        S += "CC";
                        break;
                    
                    case 3:
                        S += "CCC";
                        break;
    
                    case 4:
                        S += "DC";
                        break;
    
                    case 5:
                        S += "D";
                        break;
    
                    case 6:
                        S += "ID";
                        break;
                
                    case 7:
                        S += "IID";
                        break;
    
                    case 8:
                        S += "IIID";
                        break;
    
                    case 9:
                        S += "MC";
                        break;
                    
                    case 0:
                        break;
                
                    default:
                        break;
                }
            }

            n = n / 10;
        }
        
        
    //   String new = S.reverse();
    //   char ch;
       
    //   for (int i=0; i<S.length(); i++)
    //   {
    //     ch= S.charAt(i); //extracts each character
    //     new = ch + new; //adds each character in front of the existing string
    //   }
      
    //   System.out.println(new); 
    
    int len = S.length();
    
    while (len > 0){
        System.out.print(S.charAt(len - 1));
        len--;
    }
	}
}






















// int n = 257;
        
   
//         for(int i = 0; i < 3; i++){
//             int temp = n % 10;

//             if (i == 0) {
//                 switch (temp) {
//                     case 1:
//                         System.out.print("I");
//                         break;
    
//                     case 2:
//                         System.out.print("II");
//                         break;
                    
//                     case 3:
//                         System.out.print("III");
//                         break;
    
//                     case 4:
//                         System.out.print("VI");
//                         break;
    
//                     case 5:
//                         System.out.print("V");
//                         break;
    
//                     case 6:
//                         System.out.print("IV");
//                         break;
                
//                     case 7:
//                         System.out.print("IIV");
//                         break;
    
//                     case 8:
//                         System.out.print("IIIV");
//                         break;
    
//                     case 9:
//                         System.out.print("XI");
//                         break;
                    
//                     case 0:
//                         break;
                
//                     default:
//                         break;
//                 }
//             }
            
//             if (i == 1) {
//                 switch (temp) {
//                     case 1:
//                         System.out.print("X");
//                         break;
    
//                     case 2:
//                         System.out.print("XX");
//                         break;
                    
//                     case 3:
//                         System.out.print("XXX");
//                         break;
    
//                     case 4:
//                         System.out.print("LX");
//                         break;
    
//                     case 5:
//                         System.out.print("L");
//                         break;
    
//                     case 6:
//                         System.out.print("IL");
//                         break;
                
//                     case 7:
//                         System.out.print("IIL");
//                         break;
    
//                     case 8:
//                         System.out.print("IIIL");
//                         break;
    
//                     case 9:
//                         System.out.print("XC");
//                         break;
                    
//                     case 0:
//                         break;
                
//                     default:
//                         break;
//                 }
//             }

//             if (i == 2) {
//                 switch (temp) {
//                     case 1:
//                         System.out.print("C");
//                         break;
    
//                     case 2:
//                         System.out.print("CC");
//                         break;
                    
//                     case 3:
//                         System.out.print("CCC");
//                         break;
    
//                     case 4:
//                         System.out.print("DC");
//                         break;
    
//                     case 5:
//                         System.out.print("D");
//                         break;
    
//                     case 6:
//                         System.out.print("ID");
//                         break;
                
//                     case 7:
//                         System.out.print("IID");
//                         break;
    
//                     case 8:
//                         System.out.print("IIID");
//                         break;
    
//                     case 9:
//                         System.out.print("MC");
//                         break;
                    
//                     case 0:
//                         break;
                
//                     default:
//                         break;
//                 }
//             }

//             n = n / 10;
//         }