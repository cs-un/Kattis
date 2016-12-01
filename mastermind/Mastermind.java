import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.BitSet;
public class Mastermind {
	public static void main(String[] args) throws IOException {
		BufferedReader stdin = new BufferedReader(new InputStreamReader(System.in, "UTF-8"));
		String[] ss = stdin.readLine().split(" ");
		int[] arr = new int[26];
		int r = 0;
		int s = 0;
		BitSet exactMatch = new BitSet(ss[1].length());
		for(int i = 0; i < ss[1].length(); ++i)
		{
			if(ss[1].charAt(i) == ss[2].charAt(i))
			{
				r++;
				exactMatch.set(i);
			}
			else
				arr[ss[1].charAt(i)%26]++;
		}
		for(int i = 0; i < ss[1].length();++i)
		{
			if(!exactMatch.get(i))
			{
				if(arr[ss[2].charAt(i)%26] > 0)
				{
					s++;
					arr[ss[2].charAt(i)%26]--;
				}
			}
		}
		System.out.println(r + " " + s);
	}
}
