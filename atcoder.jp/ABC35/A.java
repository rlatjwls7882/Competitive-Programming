import java.io.BufferedReader;
import java.io.BufferedWriter;
import java.io.IOException;
import java.io.InputStreamReader;
import java.io.OutputStreamWriter;
import java.util.StringTokenizer;

public class Main {
	static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
	static BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));

	public static void main(String[] args) throws IOException {
		
		StringTokenizer st = new StringTokenizer(br.readLine());
		int W = Integer.valueOf(st.nextToken());
		int H = Integer.valueOf(st.nextToken());
		
		int gcd = gcd(W, H);
		bw.write(String.format("%d:%d\n", W/gcd, H/gcd));
		
		bw.close();
	} // end of main()
	
	static int gcd(int x, int y) {
		while(y!=0) {
			int tmp = x%y;
			x = y;
			y = tmp;
		}
		return x;
	} // end of gcd()
} // end of Main class