import java.io.BufferedReader;
import java.io.BufferedWriter;
import java.io.IOException;
import java.io.InputStreamReader;
import java.io.OutputStreamWriter;

public class Main {
	static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
	static BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));
	
	public static void main(String[] args) throws IOException {
		
		String O = br.readLine();
		String E = br.readLine();
		
		for(int i=0;;i++) {
			if(i%2==0) {
				if(O.length()==i/2) {
					break;
				}
				bw.write(O.charAt(i/2));
			} else {
				if(E.length()==i/2) {
					break;
				}
				bw.write(E.charAt(i/2));
			}
		}
		
		bw.close();
	} // end of main()
} // end of Main class