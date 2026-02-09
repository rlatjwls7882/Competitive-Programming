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
		
		boolean chk1=true;
		char cur=' ';
		for(int i=0;i<S.length();i++) {
			if(i>0&&S.charAt(i)==S.charAt(i-1)) {
				continue;
			} else if(S.charAt(i)=='A'&&cur==' ') {
				cur='A';
			} else if(S.charAt(i)=='B'&&(cur==' '||cur=='A')) {
				cur='B';
			} else if(S.charAt(i)=='C'&&(cur==' '||cur=='A'||cur=='B')) {
				cur='C';
			} else {
				chk1=false;
				break;
			}
		}
		bw.write(chk1?"Yes":"No");
		
		bw.close();
	} // end of main()
} // end of Main class