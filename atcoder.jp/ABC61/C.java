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
		long K = Long.valueOf(st.nextToken());
		
		long[] countingSort = new long[100001];
		while(N-->0) {
			st = new StringTokenizer(br.readLine());
			int a = Integer.valueOf(st.nextToken());
			long b = Long.valueOf(st.nextToken());
			countingSort[a]+=b;
		}
		
		for(int i=1;i<=100000;i++) {
			K -= countingSort[i];
			if(K<=0) {
				bw.write(Integer.toString(i));
				break;
			}
		}

		bw.close();
	} // end of main()
} // end of Main class