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
		int n = Integer.valueOf(st.nextToken());
		int k = Integer.valueOf(st.nextToken());
		int l = Integer.valueOf(st.nextToken());
		int c = Integer.valueOf(st.nextToken());
		int d = Integer.valueOf(st.nextToken());
		int p = Integer.valueOf(st.nextToken());
		int nl = Integer.valueOf(st.nextToken());
		int np = Integer.valueOf(st.nextToken());
		
		bw.write(Integer.toString(Math.min(Math.min(k*l/nl, c*d), p/np)/n));
		
		bw.close();
	} // end of main()
} // end of Main class