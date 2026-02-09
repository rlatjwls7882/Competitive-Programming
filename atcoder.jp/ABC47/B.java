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
		int W = Integer.valueOf(st.nextToken());
		int H = Integer.valueOf(st.nextToken());
		int N = Integer.valueOf(st.nextToken());

		boolean[][] plane = new boolean[W][H];
		while(N-->0) {
			st = new StringTokenizer(br.readLine());
			int x = Integer.valueOf(st.nextToken());
			int y = Integer.valueOf(st.nextToken());
			int a = Integer.valueOf(st.nextToken());

			if(a==1) {
				for(int i=0;i<x;i++) {
					Arrays.fill(plane[i], true);
				}
			} else if(a==2) {
				for(int i=x;i<W;i++) {
					Arrays.fill(plane[i], true);
				}
			} else if(a==3) {
				for(int i=0;i<W;i++) {
					for(int j=0;j<y;j++) {
						plane[i][j]=true;
					}
				}
			} else {
				for(int i=0;i<W;i++) {
					for(int j=y;j<H;j++) {
						plane[i][j]=true;
					}
				}
			}
		}

		int cnt=0;
		for(int i=0;i<W;i++) {
			for(int j=0;j<H;j++) {
				if(!plane[i][j]) {
					cnt++;
				}
			}
		}
		bw.write(Integer.toString(cnt));
			
		bw.close();
	} // end of main()
} // end of Main class