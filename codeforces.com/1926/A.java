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
			String string = br.readLine();
			
			int A=0;
			for(int i=0;i<5;i++) {
				if(string.charAt(i)=='A') {
					A++;
				}
			}
			
			if(A>=3) {
				bw.write("A\n");
			} else {
				bw.write("B\n");
			}
		}
		
		bw.close();
	} // end of main()
} // end of Main class