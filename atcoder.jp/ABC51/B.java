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
		int K = Integer.valueOf(st.nextToken());
		int S = Integer.valueOf(st.nextToken());
		
		int cnt=0;
		for(int X=0;X<=K;X++) {
			if(X>S) {
				break;
			}
			for(int Y=0;Y<=K;Y++) {
				if(X+Y>S) {
					break;
				}
				if(X+Y+K>=S) {
					cnt++;
				}
			}
		}
		bw.write(Integer.toString(cnt));
		
		bw.close();
	} // end of main()
} // end of Main class