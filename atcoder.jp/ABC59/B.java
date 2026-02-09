import java.io.BufferedReader;
import java.io.BufferedWriter;
import java.io.IOException;
import java.io.InputStreamReader;
import java.io.OutputStreamWriter;
import java.math.BigInteger;

public class Main {
	static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
	static BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));
	
	public static void main(String[] args) throws IOException {
		
		BigInteger A = new BigInteger(br.readLine());
		BigInteger B = new BigInteger(br.readLine());
		
		if(A.compareTo(B)>0) {
			bw.write("GREATER");
		} else if(A.compareTo(B)<0) {
			bw.write("LESS");
		} else {
			bw.write("EQUAL");
		}
		
		bw.close();
	} // end of main()
} // end of Main class