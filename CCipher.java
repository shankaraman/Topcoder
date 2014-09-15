import java.util.Scanner;
class CCipher
{
    public static void main(String[] args)
    {
        Scanner in = new Scanner(System.in);
        String[] alpha = new String[27];
        String[] alter = new String[27];
        int i=65,lt=90,m=0,key=0;
        String converted,a;
        for (i=0;i<27;i++)
        {
            int j = i+65;
            a = Character.toString((char) j);
            alpha[i] = a;
            System.out.println(alpha[i]);
        }
    }
}
