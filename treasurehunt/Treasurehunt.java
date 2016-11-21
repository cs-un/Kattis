import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
public class Treasurehunt {
	public static void main(String[] args) throws IOException {
		int a, b;
		BufferedReader stdin = new BufferedReader(new InputStreamReader(System.in, "UTF-8"));
		String s;
		s = stdin.readLine();
		String[] ss = s.split(" ");
		a = Integer.parseInt(ss[0]); b = Integer.parseInt(ss[1]);
		char[][] arr = new char[a][b];
		int r = 0;
		int col = 0;
		int rows = a;
		while(rows-->0)
		{
			s = stdin.readLine();
			for(int i = 0; i < s.length(); ++i){
				arr[r][col] = s.charAt(i);
				col++;
				if(col == b){
					r++;
					if(r == a)
						break;
					col = 0;
				}
			}
		}
		int currX = 0, currY = 0;
		boolean[][] visited = new boolean[a][b];
		int moves = 0;
		boolean out = false;
		while(true)
		{
			switch(arr[currY][currX])
			{
				case 'E':
				currX++;
				if(currX >= b)
					out = true;
				break;
				case 'W':
				currX--;
				if(currX < 0)
					out = true;
				break;
				case 'S':
				currY++;
				if(currY >= a)
					out = true;
				break;
				case 'N':
				currY--;
				if(currY < 0)
					out = true;
				break;
				case 'T':
				System.out.println(moves);
				return;
			}
			if(out)
			{
				System.out.println("Out");
				break;
			}
			if(visited[currY][currX])
			{
				System.out.println("Lost");
				break;
			}
			visited[currY][currX] = true;
			moves++;
		}
	}
}
