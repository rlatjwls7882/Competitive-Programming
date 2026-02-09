import java.io.BufferedReader;
import java.io.BufferedWriter;
import java.io.IOException;
import java.io.InputStreamReader;
import java.io.OutputStreamWriter;

public class Main {
	static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
	static BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));

	public static void main(String[] args) throws IOException {
		
		String N = br.readLine();
		
		boolean chk=true;
		for(int i=1;i<4;i++) {
			if(N.charAt(i)!=N.charAt(i-1)) {
				chk=false;
				break;
			}
		}
		bw.write(chk?"SAME\n":"DIFFERENT\n");
		
		bw.close();
	} // end of main()
} // end of Main class