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
		int T = Integer.valueOf(st.nextToken());
		
		st = new StringTokenizer(br.readLine());
		int lastTime=Integer.MIN_VALUE, total=0;
		while(N-->0) {
			int curTime = Integer.valueOf(st.nextToken());
			if(lastTime+T>=curTime) {
				total -= T-(curTime-lastTime);
			}
			total += T;
			lastTime = curTime;
		}
		
		bw.write(Integer.toString(total));
		
		bw.close();
	} // end of main()
} // end of Main class