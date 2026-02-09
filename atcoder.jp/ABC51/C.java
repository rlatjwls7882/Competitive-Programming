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
		int sx = Integer.valueOf(st.nextToken());
		int sy = Integer.valueOf(st.nextToken());
		int tx = Integer.valueOf(st.nextToken());
		int ty = Integer.valueOf(st.nextToken());
		
		for(int i=0;i<2;i++) {
			if(i==1) {
				bw.write("L");
			}
			for(int j=0;j<ty-sy;j++) {
				bw.write("U");
			}
			if(i==1) {
				bw.write("U");
			}
			for(int j=0;j<tx-sx;j++) {
				bw.write("R");
			}
			if(i==1) {
				bw.write("RDR");
			}
			for(int j=0;j<ty-sy;j++) {
				bw.write("D");
			}
			if(i==1) {
				bw.write("D");
			}
			for(int j=0;j<tx-sx;j++) {
				bw.write("L");
			}
			if(i==1) {
				bw.write("LU");
			}
		}
		
		bw.close();
	} // end of main()
} // end of Main class