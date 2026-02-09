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
		
		int n = Integer.valueOf(br.readLine());
		
		StringTokenizer st = new StringTokenizer(br.readLine());
		boolean hard=false;
		for(int i=0;i<n;i++) {
			if(st.nextToken().equals("1")) {
				hard=true;
				break;
			}
		}
		
		bw.write(hard?"HARD":"EASY");
		
		bw.close();
	} // end of main()
} // end of Main class