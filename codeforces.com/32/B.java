import java.io.BufferedReader;
import java.io.BufferedWriter;
import java.io.IOException;
import java.io.InputStreamReader;
import java.io.OutputStreamWriter;

public class Main {
	static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
	static BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));

	public static void main(String[] args) throws IOException {
		
		char[] S = br.readLine().toCharArray();
		for(int i=0;i<S.length;) {
			if(S[i]=='.') {
				bw.write('0');
				i++;
			} else if(S[i]=='-'&&S[i+1]=='.') {
				bw.write('1');
				i+=2;
			} else {
				bw.write('2');
				i+=2;
			}
		}
		
		bw.close();
	} // end of main()
} // end of Main class