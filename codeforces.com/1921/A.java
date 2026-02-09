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
		
		int T = Integer.valueOf(br.readLine());
		
		while(T-->0) {
			int maxX=-1000, minX=1000, maxY=-1000, minY=1000;
			for(int i=0;i<4;i++) {
				StringTokenizer st = new StringTokenizer(br.readLine());
				int X = Integer.valueOf(st.nextToken());
				int Y = Integer.valueOf(st.nextToken());
				maxX = Math.max(maxX, X);
				minX = Math.min(minX, X);
				maxY = Math.max(maxY, Y);
				minY = Math.min(minY, Y);
			}
			bw.write((maxX-minX)*(maxY-minY)+"\n");
		}
		
		bw.close();
	} // end of main()
} // end of Main class