import java.io.*;
import java.net.*;
class UDPclient{

    public static DatagramSocket ClientSocket;
    public static DatagramPacket dp; 
    public static BufferedReader dis; 
    public static InetAddress io; 
    public static byte buf[]=new byte[1024]; 
    public static int cport=789,sport=790; 
    public static void main(String args[]) throws IOException{
        ClientSocket=new DatagramSocket(cport);
        dp=new DatagramPacket(buf,buf.lenght());
        dis=new BufferedReader(new InputStreamReader(System.in));
        io=InetAddress.getlocalhost();
        while(true){
            String str= new String(dis.readline());
            buf=str.getBytes();
            if(str.equals("Stop"))
            {
                System.out.println("terminated ..");
                ClientSocket.send(new DatagramPacket(buf,str.lenght(),io,sport));
                break;
            }
            ClientSocket.send(new DatagramPacket(buf,str.lenght(),io,sport));
            ClientSocket.receive(dp);
            String str2=new String(dp.getdata(),0,dp.lenght());
            System.out.println("server" + str2);
        }

        }
    
}