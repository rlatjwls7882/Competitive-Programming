import java.io.BufferedReader;
import java.io.BufferedWriter;
import java.io.IOException;
import java.io.InputStreamReader;
import java.io.OutputStreamWriter;
import java.util.StringTokenizer;

public class Main {
	static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
	static BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));
	static int[] moveX = {-1, 0, 1, 0};
	static int[] moveY = {0, 1, 0, -1};

	public static void main(String[] args) throws IOException {
		
		StringTokenizer st = new StringTokenizer(br.readLine());
		int H = Integer.valueOf(st.nextToken());
		int W = Integer.valueOf(st.nextToken());
		int N = Integer.valueOf(st.nextToken());
		
		boolean[][] cells = new boolean[H][W];
		
		int x=0, y=0, dir=0;
		while(N-->0) {
			if(cells[x][y]) {
				dir = (dir+3)%4;
			} else {
				dir = (dir+1)%4;
			}
			cells[x][y] = !cells[x][y];
			x = (x+moveX[dir]+H)%H;
			y = (y+moveY[dir]+W)%W;
		}
		
		for(int i=0;i<H;i++) {
			for(int j=0;j<W;j++) {
				if(cells[i][j]) {
					bw.write('#');
				} else {
					bw.write('.');
				}
			}
			bw.newLine();
		}
		
		bw.close();
	} // end of main()
} // end of Main class