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
		
		int[] road = new int[N];
		while(M-->0) {
			st = new StringTokenizer(br.readLine());
			road[Integer.valueOf(st.nextToken())-1]++;
			road[Integer.valueOf(st.nextToken())-1]++;
		}
		
		for(int i=0;i<N;i++) {
			bw.write(road[i]+"\n");
		}

		bw.close();
	} // end of main()
} // end of Main class