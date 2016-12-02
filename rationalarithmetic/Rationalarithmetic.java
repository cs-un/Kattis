import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
public class Rationalarithmetic {
	public static void main(String[] args) throws NumberFormatException, IOException {
		BufferedReader stdin = new BufferedReader(new InputStreamReader(System.in, "UTF-8"));
		int n = Integer.parseInt(stdin.readLine());
		StringBuilder sb = new StringBuilder();
		while(n-->0)
		{
			String[] ss = stdin.readLine().split(" ");
			char OP = ss[2].charAt(0);
			long x1,x2,y1,y2;
			x1 = Integer.parseInt(ss[0]); 
			x2 = Integer.parseInt(ss[1]);
			y1 = Integer.parseInt(ss[3]);
			y2 = Integer.parseInt(ss[4]);
			long temp;
			switch(OP)
			{
			case '+':
				x1 *=y2;
				y1 *= x2;
				x2 *= y2;
				x1 = x1 + y1;
				if(x2 < 0){
					x1*=-1;
					x2*=-1;
				}
				temp = GCD(Math.abs(x1),Math.abs(x2));
				if(temp > 1)
				{
					x1 /= temp;
					x2 /= temp;
				}
				sb.append(x1 + " / " + x2);
				break;
			case '-':
				x1 *=y2;
				y1 *= x2;
				x2 *= y2;
				x1 = x1 - y1;
				if(x2 < 0){
					x1*=-1;
					x2*=-1;
				}
				temp = GCD(Math.abs(x1),Math.abs(x2));
				if(temp > 1)
				{
					x1 /= temp;
					x2 /= temp;
				}
				sb.append(x1 + " / " + x2);
				break;
			case '*':
				x1 *=y1;
				x2 *= y2;
				if(x2 < 0){
					x1*=-1;
					x2*=-1;
				}
				temp = GCD(Math.abs(x1),Math.abs(x2));
				if(temp > 1)
				{
					x1 /= temp;
					x2 /= temp;
				}
				sb.append(x1 + " / " + x2);
				break;
			case '/':
				x1 *=y2;
				x2 *=y1;
				if(x2 < 0){
					x1*=-1;
					x2*=-1;
				}
				temp = GCD(Math.abs(x1),Math.abs(x2));
				if(temp > 1)
				{
					x1 /= temp;
					x2 /= temp;
				}
				sb.append(x1 + " / " + x2);
				break;
			}
			sb.append("\n");
		}
		System.out.println(sb);
	}
	public static long GCD(long a, long b) {
		   if (b==0) return a;
		   return GCD(b,a%b);
		}
}
