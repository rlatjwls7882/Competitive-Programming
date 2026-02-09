import java.io.BufferedReader;
import java.io.BufferedWriter;
import java.io.IOException;
import java.io.InputStreamReader;
import java.io.OutputStreamWriter;
import java.util.ArrayList;
import java.util.StringTokenizer;

public class Main {
	static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
	static BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));

	public static void main(String[] args) throws IOException {
		
		int T = Integer.valueOf(br.readLine());
		
		while(T-->0) {
			int N = Integer.valueOf(br.readLine());
			
			ArrayList<Integer> except = new ArrayList<>();
			int maxK=1_000_000_000, minK=0;
			while(N-->0) {
				StringTokenizer st = new StringTokenizer(br.readLine());
				int a = Integer.valueOf(st.nextToken());
				int x = Integer.valueOf(st.nextToken());
				
				if(a==1) {
					minK = Math.max(minK, x);
				} else if(a==2) {
					maxK = Math.min(maxK, x);
				} else {
					except.add(x);
				}
			}
			
			int cnt = Math.max(0, maxK-minK+1);
			for(int val:except) {
				if(minK<=val&&val<=maxK) {
					cnt--;
				}
			}
			bw.write(cnt+"\n");
		}

		bw.close();
	} // end of main()
} // end of Main class