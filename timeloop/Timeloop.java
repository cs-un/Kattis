import java.io.BufferedReader;
import java.io.InputStreamReader;
public class Timeloop {
	public static void main(String[] args) throws Exception {
		BufferedReader stdin = new BufferedReader(new InputStreamReader(System.in, "UTF-8"));
		int n = Integer.parseInt(stdin.readLine());
		String s = " Abracadabra";
		for(int i = 1; i <= n; ++i)
		{
			System.out.println(i + s);
		}
	}
}
