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
		
		int N = Integer.valueOf(br.readLine());
		
		StringTokenizer st = new StringTokenizer(br.readLine());
		int[] pos = new int[N+1];
		for(int i=1;i<=N;i++) {
			pos[Integer.valueOf(st.nextToken())]=i;
		}
		
		int Q = Integer.valueOf(br.readLine());
		while(Q-->0) {
			st = new StringTokenizer(br.readLine());
			int A = Integer.valueOf(st.nextToken());
			int B = Integer.valueOf(st.nextToken());
			
			if(pos[A]<pos[B]) {
				bw.write(A+"\n");
			} else {
				bw.write(B+"\n");
			}
		}
		
		bw.close();
	} // end of main()
} // end of Main class