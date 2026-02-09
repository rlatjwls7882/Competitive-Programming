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
		
		int t = Integer.valueOf(br.readLine());
		
		while(t-->0) {
			StringTokenizer st = new StringTokenizer(br.readLine());
			int a = Integer.valueOf(st.nextToken());
			int b = Integer.valueOf(st.nextToken());
			
			int case1 = Math.min(Math.max(a, b*2), Math.max(a*2, b));
			int case2 = Math.min(Math.max(a+b, a), Math.max(a+b, b));
			
			bw.write((int)Math.pow(Math.min(case1, case2), 2)+"\n");
		}
		
		bw.close();
	} // end of main()
} // end of Main class