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
		
		double average=0;
		int[] nums = new int[N];
		StringTokenizer st = new StringTokenizer(br.readLine());
		
		for(int i=0;i<N;i++) {
			nums[i] = Integer.valueOf(st.nextToken());
			average += nums[i];
		}
		average /= N;
		
		int averageToInt = (int)Math.round(average);
		int cost=0;
		for(int i=0;i<N;i++) {
			cost += (averageToInt-nums[i])*(averageToInt-nums[i]);
		}
		
		bw.write(Integer.toString(cost));
		
		bw.close();
	} // end of main()
} // end of Main class