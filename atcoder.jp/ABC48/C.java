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
		int x = Integer.valueOf(st.nextToken());
		
		st = new StringTokenizer(br.readLine());
		int[] candies = new int[N];
		for(int i=0;i<N;i++) {
			candies[i] = Integer.valueOf(st.nextToken());
		}
		
		long eat=0;
		for(int i=1;i<N;i++) {
			if(candies[i-1]+candies[i]>x) {
				int action = candies[i-1]+candies[i]-x;
				eat += action;
				
				if(candies[i]<action) {
					candies[i-1]=action-candies[i];
					candies[i]=0;
				} else {
					candies[i] -= action;
				}
			}
		}
		bw.write(Long.toString(eat));
			
		bw.close();
	} // end of main()
} // end of Main class