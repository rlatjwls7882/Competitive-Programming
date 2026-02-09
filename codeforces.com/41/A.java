import java.io.BufferedReader;
import java.io.BufferedWriter;
import java.io.IOException;
import java.io.InputStreamReader;
import java.io.OutputStreamWriter;

public class Main {
	static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
	static BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));
	
	public static void main(String[] args) throws IOException {
		
		String s1 = br.readLine();
		String s2 = br.readLine();
		
		boolean chk=true;
		for(int i=0;i<s1.length();i++) {
			if(s1.charAt(i)!=s2.charAt(s2.length()-1-i)) {
				chk=false;
				break;
			}
		}
		
		bw.write(chk?"YES":"NO");
		
		bw.close();
	} // end of main()
} // end of Main class