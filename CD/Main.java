import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.io.UnsupportedEncodingException;
import java.util.HashMap;

public class Main {

	private static HashMap<Integer, Boolean> ownedCDs;
	private static int Jack, Jill;

	public static void main(String[] args) throws UnsupportedEncodingException {
		BufferedReader stdin = new BufferedReader(new InputStreamReader(System.in, "UTF-8"));
		boolean EOF = false;
		while(!EOF){
			if(getTotCDs(stdin) == 0)
			{
				EOF = true;
			}
			else{
				ownedCDs = new HashMap<Integer, Boolean>(Jack+Jill, 1); // set max size and make sure hashmap is not refreshed by setting load factor to 1
				System.out.println(readList(stdin));
			}
		}
	}


	private static int readList(BufferedReader stdin) {
		int clashes = 0;
		int curr;
		try{
			for(int i = 0; i < Jack + Jill; ++i){
				curr = Integer.parseInt(stdin.readLine());
				if(ownedCDs.containsKey(curr))
					clashes++;
				else
					ownedCDs.put(curr, true);
			}
		}
		catch(IOException e)
		{

		}
		return clashes;
	}

	/**
	 * @param stdin
	 * @return sum of cds owned by Jack and Jill
	 */
	private static int getTotCDs(BufferedReader stdin) {
		int sum = 0;
		try {
			//problem assignment tells us that there will be exactly 2 numbers on line 0 + n.
			String[] s = stdin.readLine().split(" ");
			Jack = Integer.parseInt(s[0]);
			Jill = Integer.parseInt(s[1]);
			sum = Jack + Jill;
		} catch (IOException e) {
			// TODO Auto-generated catch block
			e.printStackTrace();
		}
		return sum;
	}
}
