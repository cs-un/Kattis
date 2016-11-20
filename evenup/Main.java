import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.LinkedList;
import java.util.ListIterator;

public class Main {

	public static void main(String[] args) throws IOException {
		BufferedReader stdin = new BufferedReader(new InputStreamReader(System.in, "UTF-8"));
		int n;
		String s = stdin.readLine();
		n = Integer.parseInt(s);
		LinkedList<Integer> list = new LinkedList<Integer>();
		s = stdin.readLine();
		String[] a = s.split(" ");
		for(int i = 0; i < n; ++i)
		{
			list.add(Integer.parseInt(a[i]));
		}
		int min = 0;
		for(int reps = 0; reps < 500; reps++){ //run enough times to guarantee list is min
			min = naive(list);
		}
		System.out.println(min);
	}


	private static int naive(LinkedList<Integer> list)
	{
		ListIterator<Integer> it = list.listIterator(); int prev = -1;
		while(it.hasNext())
		{
			int curr = it.next();
			if(prev == -1){
				prev = curr;
				if(it.hasNext())
					curr = it.next();
				else
					break;
			}
			if((prev + curr) % 2 == 0)
			{
				it.remove();
				it.previous();
				it.remove();
				prev = -1;
			}
			else
				prev = curr;
		}
		return list.size();
	}

}
