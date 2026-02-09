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
			
			int[] a = new int[n];
			StringTokenizer st = new StringTokenizer(br.readLine());
			for(int i=0;i<n;i++) {
				a[i] = Integer.valueOf(st.nextToken());
			}
			
			int first1=0, last1=0;
			for(int i=0;i<n;i++) {
				if(a[i]==1) {
					first1=i;
					break;
				}
			}
			for(int i=n-1;i>=0;i--) {
				if(a[i]==1) {
					last1=i;
					break;
				}
			}
			
			int betweenFreeCells=0;
			for(int i=first1+1;i<last1;i++) {
				if(a[i]==0) {
					betweenFreeCells++;
				}
			}
			bw.write(betweenFreeCells+"\n");
		}
		
		bw.close();
	} // end of main()
} // end of Main class