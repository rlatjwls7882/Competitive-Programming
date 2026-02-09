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
		int N = Integer.valueOf(st.nextToken());
		int M = Integer.valueOf(st.nextToken());
		
		char[][] A = new char[N][N];
		for(int i=0;i<N;i++) {
			A[i] = br.readLine().toCharArray();
		}
		
		char[][] B = new char[M][M];
		for(int i=0;i<M;i++) {
			B[i] = br.readLine().toCharArray();
		}
		
		boolean equal = false;
		for(int i=0;i<=N-M;i++) {
			for(int j=0;j<=N-M;j++) {
				
				int cnt=0;
				for(int k=0;k<M;k++) {
					for(int l=0;l<M;l++) {
						if(A[i+k][j+l]==B[k][l]) {
							cnt++;
						}
					}
				}
				
				if(cnt==M*M) {
					equal=true;
					i=j=N-M+1;
				}
			}
		}
		
		if(equal) {
			bw.write("Yes");
		} else {
			bw.write("No");
		}
		
		bw.close();
	} // end of main()
} // end of Main class