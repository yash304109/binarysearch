import java.net.*;
import java.io.*;
class Client2{
    public static void main(String args[])
        throws Execption{
            Socket s= new Socket("local host",3333);
            DataInputStream din= new DataInputStream(s.getIntputStream());
            DataOutputStream dout=new DataOutputStream(s.getOutputStream());
            BufferedReader br=new BufferedReader(new InputStreamReader(System.in));
            String str="",str2="";
            while(!str.equals("stop")){
                str=br.readline();
                dout.writeUTF(str);
                dout.flush();
                str2=din.readUTF();
                System.out.println("server says:" +str2);
            }  
            dout.close();
            s.close();
             
        
    }
}