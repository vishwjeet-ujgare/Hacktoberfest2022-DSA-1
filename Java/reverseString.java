 import java.lang.*;
import java.io.*;
import java.util.*;
  
public class reverseString {
    public static void main(String[] args)
    {
        String str = "Saksham";
  
        // conversion from String object to StringBuffer
        StringBuffer sbr = new StringBuffer(str);
        // To reverse the string
        sbr.reverse();
        System.out.println(sbr);
    }
}
