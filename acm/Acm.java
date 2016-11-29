import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.HashMap;
public class Acm {
	public static void main(String[] args) throws IOException {
		BufferedReader stdin = new BufferedReader(new InputStreamReader(System.in, "UTF-8"));
		String s;
		int score = 0;
		int right = 0;
		HashMap<String, Integer> problems = new HashMap<String,Integer>();
 		while((s = stdin.readLine())!=null)
		{
 			if(s.length() == 2 && Integer.parseInt(s) == -1)
 				break;
 			String[] ss = s.split(" ");
 			if(ss[2].equals("right"))
 			{
 				score+= Integer.parseInt(ss[0]);
 				if(problems.containsKey(ss[1]))
 					score+= problems.get(ss[1]);
 				right++;
 			}
 			else
 			{
 				if(problems.containsKey(ss[1]))
 					problems.put(ss[1], problems.get(ss[1]) + 20);
 				else
 					problems.put(ss[1], 20);
 			}
		}
 		System.out.print(right + " " + score);
	}
}
