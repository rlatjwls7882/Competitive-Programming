import java.io.BufferedReader;
import java.io.BufferedWriter;
import java.io.IOException;
import java.io.InputStreamReader;
import java.io.OutputStreamWriter;
import java.util.Arrays;
import java.util.StringTokenizer;

public class Main {
	static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
	static BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));

	public static void main(String[] args) throws IOException {
		
		int t = Integer.valueOf(br.readLine());
		while(t-->0) {
			StringTokenizer st = new StringTokenizer(br.readLine());
			int[] arr = new int[3];
			for(int i=0;i<3;i++) {
				arr[i] = Integer.valueOf(st.nextToken());
			}
			Arrays.sort(arr);
			
			if(arr[1]+arr[2]>=10) {
				bw.write("YES\n");
			} else {
				bw.write("NO\n");
			}
		}
		
		bw.close();
	} // end of main()
} // end of Main class