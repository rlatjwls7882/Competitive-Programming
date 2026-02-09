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
		int H = Integer.valueOf(st.nextToken());
		int W = Integer.valueOf(st.nextToken());
		
		for(int i=1;i<=H+2;i++) {
			if(i==1||i==H+2) {
				for(int j=0;j<W+2;j++) {
					bw.write('#');
				}
				bw.newLine();
			} else {
				bw.write("#"+br.readLine()+"#\n");
			}
		}
		
		bw.close();
	} // end of main()
} // end of Main class