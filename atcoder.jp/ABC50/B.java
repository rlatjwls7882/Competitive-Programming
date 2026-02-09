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
		int[] T = new int[N];
		int sum=0;
		
		for(int i=0;i<N;i++) {
			T[i] = Integer.valueOf(st.nextToken());
			sum += T[i];
		}
		
		int M = Integer.valueOf(br.readLine());
		
		for(int i=0;i<M;i++) {
			st = new StringTokenizer(br.readLine());
			int P = Integer.valueOf(st.nextToken())-1;
			int X = Integer.valueOf(st.nextToken());
			
			bw.write((sum-T[P]+X)+"\n");
		}
		
		bw.close();
	} // end of main()
} // end of Main class