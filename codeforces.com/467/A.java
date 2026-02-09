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
		
		int n = Integer.valueOf(br.readLine());
		
		int cnt=0;
		while(n-->0) {
			StringTokenizer st = new StringTokenizer(br.readLine());
			int p = Integer.valueOf(st.nextToken());
			int q = Integer.valueOf(st.nextToken());
			
			cnt += Math.min(1, (q-p)/2);
		}
		bw.write(Integer.toString(cnt));
		
		bw.close();
	} // end of main()
} // end of Main class