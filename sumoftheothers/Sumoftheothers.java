package sumoftheothers;

import java.io.BufferedReader;
import java.io.InputStreamReader;
public class Sumoftheothers {
	public static void main(String[] args) throws Exception {
		BufferedReader stdin = new BufferedReader(new InputStreamReader(System.in, "UTF-8"));
		String s;
		while((s = stdin.readLine())!=null)
		{
			String[] ss = s.split(" ");
			int[] numbers = new int[ss.length];
			for(int i = 0; i < ss.length; ++i)
			{
				numbers[i] = Integer.parseInt(ss[i]);
			}
			for(int i = numbers.length-1; i >= 0; --i)
			{
				int sum = 0;
				for(int c = numbers.length-1; c >= 0; --c)
				{
					if(i!=c)
						sum+=numbers[c];
				}
				if(numbers[i] == sum){
					System.out.println(sum);
					break;
				}
			}
		}
	}
}
