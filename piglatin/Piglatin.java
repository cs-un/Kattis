import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
public class Piglatin {
	public static void main(String[] args) throws IOException {
		BufferedReader stdin = new BufferedReader(new InputStreamReader(System.in, "UTF-8"));
		String s;
		StringBuilder sb = new StringBuilder();
		String vowels = "[aeiouy].*";
 		while((s = stdin.readLine())!=null)
		{
			String[] ss = s.split(" ");
			for(String z : ss)
			{
				String temp = "";
				for(int i = 0; i < z.length(); ++i)
				{
					if(z.substring(i).matches(vowels)){
						if(i == 0)
							temp = z + "yay";
						else
							temp = z.substring(i) + temp + "ay";
						break;
					}
					else
					{
						temp+=z.charAt(i);
					}
				}
				sb.append(temp);
				sb.append(" ");
			}
			sb.append('\n');
		}
		System.out.println(sb);
	}
}
