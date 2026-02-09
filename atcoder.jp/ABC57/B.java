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
		
		StringTokenizer st = new StringTokenizer(br.readLine());
		int N = Integer.valueOf(st.nextToken());
		int M = Integer.valueOf(st.nextToken());
		
		int[][] student = new int[N][2];
		for(int i=0;i<N;i++) {
			st = new StringTokenizer(br.readLine());
			student[i][0] = Integer.valueOf(st.nextToken());
			student[i][1] = Integer.valueOf(st.nextToken());
		}
		
		int[][] checkpoint = new int[M][2];
		for(int i=0;i<M;i++) {
			st = new StringTokenizer(br.readLine());
			checkpoint[i][0] = Integer.valueOf(st.nextToken());
			checkpoint[i][1] = Integer.valueOf(st.nextToken());
		}
		
		for(int i=0;i<N;i++) {
			int minDist=1_000_000_000, idx=1;
			for(int j=0;j<M;j++) {
				if(minDist>Math.abs(checkpoint[j][0]-student[i][0])+Math.abs(checkpoint[j][1]-student[i][1])) {
					minDist = Math.abs(checkpoint[j][0]-student[i][0])+Math.abs(checkpoint[j][1]-student[i][1]);
					idx=j+1;
				}
			}
			bw.write(idx+"\n");
		}
		
		bw.close();
	} // end of main()
} // end of Main class