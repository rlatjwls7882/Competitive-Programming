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
		
		int n = Integer.valueOf(br.readLine());
		
		StringTokenizer st = new StringTokenizer(br.readLine());
		int max=0;
		int[] arr = new int[n];
		for(int i=0;i<n;i++) {
			arr[i] = Integer.valueOf(st.nextToken());
			max = Math.max(max, arr[i]);
		}
		
		int sum=0;
		for(int i=0;i<n;i++) {
			sum += max-arr[i];
		}
		bw.write(sum+"");
		
		bw.close();
	} // end of main()
} // end of Main class