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
		int n = Integer.valueOf(st.nextToken());
		int h = Integer.valueOf(st.nextToken());
		
		int minWidth=0;
		st = new StringTokenizer(br.readLine());
		while(n-->0) {
			if(Integer.valueOf(st.nextToken())<=h) {
				minWidth++;
			} else {
				minWidth+=2;
			}
		}
		bw.write(Integer.toString(minWidth));
		
		bw.close();
	} // end of main()
} // end of Main class