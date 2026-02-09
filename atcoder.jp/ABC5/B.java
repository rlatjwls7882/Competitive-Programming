import java.io.BufferedReader;
import java.io.BufferedWriter;
import java.io.IOException;
import java.io.InputStreamReader;
import java.io.OutputStreamWriter;

public class Main {
	static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
	static BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));
	
	public static void main(String[] args) throws IOException {
		
		int N = Integer.valueOf(br.readLine());
		
		int T = 100;
		while(N-->0) {
			T = Math.min(T, Integer.valueOf(br.readLine()));
		}
		bw.write(T+"\n");
		
		bw.close();
	} // end of main()
} // end of Main class