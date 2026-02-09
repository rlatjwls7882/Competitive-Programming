import java.io.BufferedReader;
import java.io.BufferedWriter;
import java.io.IOException;
import java.io.InputStreamReader;
import java.io.OutputStreamWriter;

public class Main {
	static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
	static BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));

	public static void main(String[] args) throws IOException {
		
		int n = Integer.valueOf(br.readLine());
		
		for(int i=0;i<n-1;i++) {
			if(i%2==0) {
				bw.write("I hate that ");
			} else {
				bw.write("I love that ");
			}
		}
		if(n%2==1) {
			bw.write("I hate it");
		} else {
			bw.write("I love it");
		}
		
		bw.close();
	} // end of main()
} // end of Main class