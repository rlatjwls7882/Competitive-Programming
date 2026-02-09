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
		int S = Integer.valueOf(st.nextToken());
		int T = Integer.valueOf(st.nextToken());
		
		int W = Integer.valueOf(br.readLine());
		
		int day=0;
		while(N-->0) {
			if(S<=W&&W<=T) {
				day++;
			}
			
			if(N==0) {
				break;
			}
			
			W += Integer.valueOf(br.readLine());
		}
		
		bw.write(day+"\n");
		
		bw.close();
	} // end of main()
} // end of Main class