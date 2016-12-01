import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.HashMap;
public class Engineeringenglish {
	public static void main(String[] args) throws IOException {
		BufferedReader stdin = new BufferedReader(new InputStreamReader(System.in, "UTF-8"));
		String s;
		StringBuilder sb = new StringBuilder();
		HashMap<String, Boolean> duplicate = new HashMap<String, Boolean>(20, 1);
 		while((s = stdin.readLine())!=null)
		{
			String[] ss = s.split(" ");
			for(String z : ss)
			{
				if(duplicate.containsKey(z.toLowerCase()))
					sb.append(".");
				else{
					duplicate.put(z.toLowerCase(), true);
					sb.append(z);
				}
				sb.append(" ");
			}
			sb.append('\n');
		}
		System.out.println(sb);
	}
}
