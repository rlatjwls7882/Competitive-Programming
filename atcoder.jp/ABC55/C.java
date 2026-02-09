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
		long N = Long.valueOf(st.nextToken());
		long M = Long.valueOf(st.nextToken());
		
		long cnt = Math.min(N, M/2);
		N -= cnt;
		M -= cnt*2;
		
		bw.write(Long.toString(cnt+M/4));
		
		bw.close();
	} // end of main()
} // end of Main class