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
			if(s.length()>=10)
				if(s.substring(0,10).equals("Simon says")){
					sb.append(s.substring(11) + "\n");
		}
		}
		System.out.println(sb);
	}
}

