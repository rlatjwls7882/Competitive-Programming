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
		int K = Integer.valueOf(br.readLine());
		int X = Integer.valueOf(br.readLine());
		int Y = Integer.valueOf(br.readLine());
		
		int sum=0;
		if(N<K) {
			sum = N*X;
		} else {
			sum = K*X;
			sum += (N-K)*Y;
		}
		bw.write(Integer.toString(sum));
		
		bw.close();
	} // end of main()
} // end of Main class