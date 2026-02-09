import java.io.BufferedReader;
import java.io.BufferedWriter;
import java.io.IOException;
import java.io.InputStreamReader;
import java.io.OutputStreamWriter;

public class Main {
	static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
	static BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));

	public static void main(String[] args) throws IOException {
		
		int[] num = new int[200001];
		int t = Integer.valueOf(br.readLine());
		
		int idx=1;
		while(t-->0) {
			int n = Integer.valueOf(br.readLine());

			if(idx<=n) {
				while(idx<=n) {
					num[idx]=num[idx-1];
					int tmp=idx;
					while(tmp!=0) {
						num[idx]+=tmp%10;
						tmp/=10;
					}
					idx++;
				}
			}
			bw.write(num[n]+"\n");
		}
		
		bw.close();
	} // end of main()
} // end of Main class