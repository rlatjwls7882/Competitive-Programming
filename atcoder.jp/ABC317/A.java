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
		int H = Integer.valueOf(st.nextToken());
		int X = Integer.valueOf(st.nextToken());
		
		int idx=0, min=Integer.MAX_VALUE;
		st = new StringTokenizer(br.readLine());
		for(int i=1;i<=N;i++) {
			int P = Integer.valueOf(st.nextToken());
			if(H+P>=X&&P<min) {
				idx=i;
				min=P;
			}
		}
		bw.write(idx+"");
		
		bw.close();
	} // end of main()
} // end of Main class