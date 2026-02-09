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
		
		boolean[] chars = new boolean[26];
		boolean chk=true;
		for(int i=0;i<string.length();i++) {
			if(chars[string.charAt(i)-'a']) {
				chk=false;
				break;
			}
			chars[string.charAt(i)-'a']=true;
		}
		bw.write(chk?"yes":"no");
		
		bw.close();
	} // end of main()
} // end of Main class