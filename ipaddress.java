import java.net.InetAddress;

class GetMyIPAddress
{
   public static void main(String args[]) throws Exception
   {
       
      InetAddress myIP=InetAddress.getLocalHost();
  
      System.out.println("My IP Address is @ Hacktober CBIT hackathon'5:");
      System.out.println(myIP.getHostAddress());
  }
}