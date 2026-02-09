import java.io.BufferedReader;
import java.io.BufferedWriter;
import java.io.IOException;
import java.io.InputStreamReader;
import java.io.OutputStreamWriter;

public class Main {
	static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
	static BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));

	public static void main(String[] args) throws IOException {
		
		long X = Long.valueOf(br.readLine());
		
		if(X>0) {
			bw.write((X+9)/10+"");
		} else {
			bw.write(X/10+"");
		}
		
		bw.close();
	} // end of main()
} // end of Main class