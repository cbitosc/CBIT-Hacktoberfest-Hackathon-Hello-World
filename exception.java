import java.io.*;
import java.util.*;
class exception{
public static void main(String args[])
{
int a = 10;
int b[] = new int[4];
try
{
int c  = a/0;
}
catch(ArithmeticException e)
{
System.out.println("ArthimeticException"+e);
}
try
{
b[5] = 99;
}
catch(ArrayIndexOutOfBoundsException ae)
{
System.out.println("An error ocurred :"+ae);
}
}
}
