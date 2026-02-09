import java.io.BufferedReader;
import java.io.BufferedWriter;
import java.io.IOException;
import java.io.InputStreamReader;
import java.io.OutputStreamWriter;

public class Main {
	static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
	static BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));

	public static void main(String[] args) throws IOException {
		
		String string = br.readLine();
		
		boolean chk=false;
		for(int i=0;i<string.length();i++) {
			if(string.charAt(i)=='9') {
				chk=true;
				break;
			}
		}
		bw.write(chk?"Yes":"No");
		
		bw.close();
	} // end of main()
} // end of Main class