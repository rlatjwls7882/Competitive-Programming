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
		int[] order = new int[N];
		int pos=0;
		for(int i=1;i<=N;i++) {
			int A = Integer.valueOf(st.nextToken());
			if(A==-1) {
				pos=i;
			} else {
				order[A-1]=i;
			}
		}
		
		for(int i=0;i<N;i++) {
			bw.write(pos+" ");
			pos=order[pos-1];
		}
		
		bw.close();
	} // end of main()
} // end of Main class