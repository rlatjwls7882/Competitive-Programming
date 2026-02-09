import java.io.BufferedReader;
import java.io.BufferedWriter;
import java.io.IOException;
import java.io.InputStreamReader;
import java.io.OutputStreamWriter;

public class Main {
	static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
	static BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));

	public static void main(String[] args) throws IOException {
		
		int t = Integer.valueOf(br.readLine());
		while(t-->0) {
			String x = br.readLine();
			
			int sum=(x.charAt(0)-'1')*10+x.length()*(x.length()+1)/2;
			bw.write(sum+"\n");
		}
		
		bw.close();
	} // end of main()
} // end of Main class