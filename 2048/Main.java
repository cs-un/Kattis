import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

public class Main {
	
	static int[][] board = new int[4][4];
	private static boolean[] mod;
	public static void main(String[] args) throws IOException {
		BufferedReader stdin = new BufferedReader(new InputStreamReader(System.in, "UTF-8"));
		for(int i = 0; i < 4; ++i)
		{
			String[] s = stdin.readLine().split(" ");
			for(int c = 0; c < 4; ++c)
				board[i][c] = Integer.parseInt(s[c]);
		}
		int move = Integer.parseInt(stdin.readLine());
		switch(move)
		{
		case 0: // left
			for(int i = 0; i < 4; ++i)
			{
				mod = new boolean[4];
 				for(int c = 1; c < 4; ++c)
				{
 					moveLeft(i, c);
				}
			}
			break;
		case 1: //up
			for(int i = 0; i < 4; ++i)
			{
				mod = new boolean[4];
 				for(int c = 1; c < 4; ++c)
				{
 					moveUp(c,i);
				}
			}
			break;
		case 2: //right
			for(int i = 0; i < 4; ++i)
			{
				mod = new boolean[4];
 				for(int c = 3; c >= 0; --c)
				{
 					moveRight(i, c);
				}
			}
			break;
		case 3: //down
			for(int i = 0; i < 4; ++i)
			{
				mod = new boolean[4];
 				for(int c = 3; c >= 0; --c)
				{
 					moveDown(c, i);
				}
			}
			break;
		}
		for(int i = 0; i < 4; ++i)
		{
			for(int c = 0; c < 4; ++c){
				System.out.print(board[i][c]);
				if(c!= 3)
					System.out.print(" ");
			}
			System.out.println();
		}

	}

	private static void moveLeft(int row, int col)
	{
		//System.out.println(col + " " + board[row][col]);
		if(col == 0 || board[row][col] == 0)
			return;
		if(mod[col] == true)
			return;
		else if(mod[col-1] == true)
			return;
		else if(board[row][col-1] == board[row][col]){
			board[row][col-1] = board[row][col-1]*2;
			mod[col-1] = true;
			board[row][col] = 0;
			mod[col] = false;
		}
		else if(board[row][col-1] == 0){
			board[row][col-1] = board[row][col];
			board[row][col] = 0;
		}
		moveLeft(row, col-1);
	}
	
	private static void moveRight(int row, int col)
	{
		if(col == 3 || board[row][col] == 0)
			return;
		if(mod[col] == true)
			return;
		else if(mod[col+1] == true)
			return;
		else if(board[row][col+1] == board[row][col]){
			board[row][col+1] = board[row][col+1]*2;
			mod[col+1] = true;
			board[row][col] = 0;
			mod[col] = false;
		}
		else if(board[row][col+1] == 0){
			board[row][col+1] = board[row][col];
			board[row][col] = 0;
		}
		moveRight(row, col+1);
	}
	
	private static void moveDown(int row, int col)
	{
		if(row == 3 || board[row][col] == 0)
			return;
		if(mod[row] == true)
			return;
		else if(mod[row+1] == true)
			return;
		else if(board[row+1][col] == board[row][col]){
			board[row+1][col] = board[row+1][col]*2;
			mod[row+1] = true;
			board[row][col] = 0;
			mod[row] = false;
		}
		else if(board[row+1][col] == 0){
			board[row+1][col] = board[row][col];
			board[row][col] = 0;
		}
		moveDown(row+1, col);
	}
	
	private static void moveUp(int row, int col)
	{
		//System.out.println(row + " " + col + " " + board[row][col]);
		if(row == 0 || board[row][col] == 0)
			return;
		if(mod[row] == true)
			return;
		else if(mod[row-1] == true)
			return;
		else if(board[row-1][col] == board[row][col]){
			board[row-1][col] = board[row-1][col]*2;
			mod[row-1] = true;
			board[row][col] = 0;
			mod[row] = false;
		}
		else if(board[row-1][col] == 0){
			board[row-1][col] = board[row][col];
			board[row][col] = 0;
		}
		moveUp(row-1, col);
	}
}
