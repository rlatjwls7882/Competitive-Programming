import java.io.BufferedReader;
import java.io.BufferedWriter;
import java.io.IOException;
import java.io.InputStreamReader;
import java.io.OutputStreamWriter;

public class Main {
	static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
	static BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));
	static long totalSum=0;
	
	public static void main(String[] args) throws IOException {
		
		String string = br.readLine();
		calcSum(string, 0);
		
		bw.write(Long.toString(totalSum));
		
		bw.close();
	} // end of main()
	
	static void calcSum(String string, long sum) {
		int length = string.length();
		
		if(length==1) {
			totalSum += Long.valueOf(string);
			totalSum += sum;
			return;
		}
		
		for(int i=length;i>0;i--) {
			long tmp = Long.valueOf(string.substring(0, i));
			
			if(i==length) {
				totalSum += sum+tmp;
			} else {
				calcSum(string.substring(i), sum+tmp);
			}
		}
		
	} // end of calcSum()
} // end of Main class