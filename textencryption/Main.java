import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

public class Main {

	public static void main(String[] args) throws NumberFormatException, IOException {
		BufferedReader stdin = new BufferedReader(new InputStreamReader(System.in, "UTF-8"));
		int n = -1;
		while(true){
			n = Integer.parseInt(stdin.readLine());
			if(n==0)
				break;
			String s = stdin.readLine();
			s = s.replace(" ", "");
			s = s.toUpperCase();
			char[] ss = new char[s.length()];
			int i = 0;
			int startChar = 0;
			for(int c = 0; c < s.length(); ++c)
			{
				if(i>=s.length())
					i = i % s.length();
				ss[i] = s.charAt(c);
				i = (i + n);
				if(i>=s.length()){
					startChar++;
					i = startChar;
				}
			}
			System.out.println(ss);
		}
	}

}
