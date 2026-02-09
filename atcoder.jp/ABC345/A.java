import java.io.BufferedReader;
import java.io.BufferedWriter;
import java.io.IOException;
import java.io.InputStreamReader;
import java.io.OutputStreamWriter;

public class Main {
	static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
	static BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));

	public static void main(String[] args) throws IOException {
		
		String S = br.readLine();
		
		boolean chk=true;
		if(S.charAt(0)!='<'||S.charAt(S.length()-1)!='>') {
			chk=false;
		}
		
		for(int i=1;i<S.length()-1;i++) {
			if(S.charAt(i)!='=') {
				chk=false;
				break;
			}
		}
		
		bw.write(chk?"Yes":"No");
		
		bw.close();
	} // end of main()
} // end of Main class