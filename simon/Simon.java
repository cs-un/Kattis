import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
public class Simon {
	public static void main(String[] args) throws IOException {
		BufferedReader stdin = new BufferedReader(new InputStreamReader(System.in, "UTF-8"));
		String s;
		StringBuilder sb = new StringBuilder();
		while((s = stdin.readLine())!=null)
		{
			String[] ss = s.split(" ");
			if(ss.length < 2 || !(ss[0].equals("simon") && ss[1].equals("says")))
				sb.append("\n");
			else
			{
				for(int i=2; i <ss.length; ++i)
				{
					sb.append(ss[i] + " ");
				}
			}
		}
		System.out.println(sb);
	}
}

