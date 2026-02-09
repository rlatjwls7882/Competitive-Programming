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
		
		StringTokenizer st = new StringTokenizer(br.readLine(), "/");
		int day = Integer.valueOf(st.nextToken())*10000+Integer.valueOf(st.nextToken())*100+Integer.valueOf(st.nextToken());
		
		if(day<=20190430) {
			bw.write("Heisei");
		} else {
			bw.write("TBD");
		}
		
		bw.close();
	} // end of main()
} // end of Main class