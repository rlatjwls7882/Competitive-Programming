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
		
		int[] programming = new int[n];
		int[] math = new int[n];
		int[] PE = new int[n];
		int idx1=0, idx2=0, idx3=0;
		StringTokenizer st = new StringTokenizer(br.readLine());
		for(int i=1;i<=n;i++) {
			int next = Integer.valueOf(st.nextToken());
			if(next==1) {
				programming[idx1++]=i;
			} else if(next==2) {
				math[idx2++]=i;
			} else {
				PE[idx3++]=i;
			}
		}
		
		int idx = Math.min(Math.min(idx1, idx2), idx3);
		bw.write(idx+"\n");
		for(int i=0;i<idx;i++) {
			bw.write(programming[i]+" "+math[i]+" "+PE[i]+"\n");
		}
		
		bw.close();
	} // end of main()
} // end of Main class