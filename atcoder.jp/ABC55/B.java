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
		
		long res=1;
		for(long i=2;i<=N;i++) {
			res = res*i%1_000_000_007;
		}
		bw.write(Long.toString(res));
		
		bw.close();
	} // end of main()
} // end of Main class