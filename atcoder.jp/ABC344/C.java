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
		int[] A = new int[N];
		for(int i=0;i<N;i++) {
			A[i] = Integer.valueOf(st.nextToken());
		}
		
		int M = Integer.valueOf(br.readLine());
		st = new StringTokenizer(br.readLine());
		int[] B = new int[M];
		for(int i=0;i<M;i++) {
			B[i] = Integer.valueOf(st.nextToken());
		}
		
		int L = Integer.valueOf(br.readLine());
		st = new StringTokenizer(br.readLine());
		int[] C = new int[L];
		for(int i=0;i<L;i++) {
			C[i] = Integer.valueOf(st.nextToken());
		}
		
		boolean[] check = new boolean[300_000_001];
		for(int i=0;i<N;i++) {
			for(int j=0;j<M;j++) {
				for(int k=0;k<L;k++) {
					check[A[i]+B[j]+C[k]]=true;
				}
			}
		}
		
		int Q = Integer.valueOf(br.readLine());
		st = new StringTokenizer(br.readLine());
		while(Q-->0) {
			if(check[Integer.valueOf(st.nextToken())]) {
				bw.write("Yes\n");
			} else {
				bw.write("No\n");
			}
		}
		
		bw.close();
	} // end of main()
} // end of Main class