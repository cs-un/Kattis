import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
public class Wertyu {
	public static void main(String[] args) throws IOException {
		BufferedReader stdin = new BufferedReader(new InputStreamReader(System.in, "UTF-8"));
		String s;
		StringBuilder sb;
		char[] arr = new char[128];
		arr[49] = '`';
		for(int i = 50; i < 58; ++i)
		{
			arr[i] = (char)(i-1);
		}
		arr[48] = '9';
		arr['-'] ='0';
		arr['='] = '-';
		arr['W'] = 'Q';
		arr['E'] = 'W';
		arr['R'] = 'E';
		arr['T'] = 'R';
		arr['Y'] = 'T';
		arr['U'] = 'Y';
		arr['I'] = 'U';
		arr['O'] = 'I';
		arr['P'] = 'O';
		arr['['] = 'P';
		arr[']'] = '[';
		arr['\\'] = ']';
		arr['S'] = 'A';
		arr['D'] = 'S';
		arr['F'] = 'D';
		arr['G'] = 'F';
		arr['H'] = 'G';
		arr['J'] = 'H';
		arr['K'] = 'J';
		arr['L'] = 'K';
		arr[';'] = 'L';
		arr['\''] = ';';
		arr['X'] = 'Z';
		arr['C'] = 'X';
		arr['V'] = 'C';
		arr['B'] = 'V';
		arr['N'] = 'B';
		arr['M'] = 'N';
		arr[','] = 'M';
		arr['.'] = ',';
		arr['/'] = '.';
 		while((s = stdin.readLine())!=null)
		{
 			sb = new StringBuilder();
			for(int i = 0; i < s.length(); ++i)
			{
				if(arr[s.charAt(i)] != 0)
					sb.append(s.substring(i,i+1).replace(s.charAt(i),arr[s.charAt(i)]));
				else
					sb.append(s.charAt(i));
			}
			System.out.println(sb);
		}
	}
}