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
		
		StringTokenizer st = new StringTokenizer(br.readLine());
		int N = Integer.valueOf(st.nextToken());
		int M = Integer.valueOf(st.nextToken());
		
		int[][] time = new int[N][N];
		for(int i=0;i<N;i++) {
			Arrays.fill(time[i], 1_000_000_000);
			time[i][i]=0;
		}

		while(M-->0) {
			st = new StringTokenizer(br.readLine());
			int a = Integer.valueOf(st.nextToken())-1;
			int b = Integer.valueOf(st.nextToken())-1;
			int t = Integer.valueOf(st.nextToken());
			time[a][b]=t;
			time[b][a]=t;
		}
		
		for(int mid=0;mid<N;mid++) {
			for(int start=0;start<N;start++) {
				for(int end=0;end<N;end++) {
					time[start][end]=Math.min(time[start][end], time[start][mid]+time[mid][end]);
				}
			}
		}
		
		int min=Integer.MAX_VALUE;
		for(int i=0;i<N;i++) {
			int max=0;
			for(int j=0;j<N;j++) {
				max = Math.max(max, time[i][j]);
			}
			min = Math.min(min, max);
		}
		bw.write(Integer.toString(min));
		
		bw.close();
	} // end of main()
} // end of Main class