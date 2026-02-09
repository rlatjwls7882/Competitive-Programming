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
		
		int t = Integer.valueOf(br.readLine());
		while(t-->0) {
			int n = Integer.valueOf(br.readLine());
			
			StringTokenizer st = new StringTokenizer(br.readLine());
			int[] arr = new int[3];
			while(n-->0) {
				arr[Integer.valueOf(st.nextToken())%3]++;
			}
			
			if((arr[1]+arr[2]*2)%3==0) {
				bw.write("0\n");
			} else if((arr[1]+arr[2]*2)%3==2||(arr[1]+Math.max(0, arr[2]-1)*2)%3==0||(Math.max(0, arr[1]-1)+arr[2]*2)%3==0) {
				bw.write("1\n");
			} else {
				bw.write("2\n");
			}
		}
		
		bw.close();
	} // end of main()
} // end of Main class