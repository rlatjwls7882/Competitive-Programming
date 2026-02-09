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
			int n = Integer.valueOf(br.readLine());
			
			StringTokenizer st = new StringTokenizer(br.readLine());
			int[] arr = new int[n];
			for(int i=0;i<n;i++) {
				arr[i] = Integer.valueOf(st.nextToken());
			}
			Arrays.sort(arr);
			
			if(arr[0]!=arr[1]||chk(arr)) {
				bw.write("YES\n");
			} else {
				bw.write("NO\n");
			}
		}

		bw.close();
	} // end of main()
	
	static boolean chk(int[] arr) {
		int length = arr.length;
		for(int i=1;i<length;i++) {
			if(arr[0]!=arr[i]&&arr[i]%arr[0]!=0) {
				return true;
			}
		}
		return false;
	} // end of chk()
} // end of Main class