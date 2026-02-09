import java.io.BufferedReader;
import java.io.BufferedWriter;
import java.io.IOException;
import java.io.InputStreamReader;
import java.io.OutputStreamWriter;

public class Main {
	static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
	static BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));

	public static void main(String[] args) throws IOException {
		
		long n = Long.valueOf(br.readLine());
		
		long res = (n+1)/2*-1;
		if(n%2==0) {
			bw.write(Long.toString(res+n));
		} else {
			bw.write(Long.toString(res));
		}

		bw.close();
	} // end of main()
} // end of Main class