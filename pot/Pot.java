import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

public class Pot {

	public static void main(String[] args) throws NumberFormatException, IOException {
		BufferedReader stdin = new BufferedReader(new InputStreamReader(System.in, "UTF-8"));
		int n = Integer.parseInt(stdin.readLine());
		int sum = 0;
		for(int i = 0; i < n; ++i)
		{
			String s = stdin.readLine();
			Integer.parseInt(s.substring(0, s.length()-1));
			sum += Math.pow(Integer.parseInt(s.substring(0, s.length()-1)), Integer.parseInt(s.substring(s.length()-1,s.length())));
		}
		System.out.println(sum);
	}
}
