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
		
		char a=string.charAt(0), b=string.charAt(1);
		if(a!=b) {
			if(string.charAt(2)==a) {
				bw.write("2");
			} else {
				bw.write("1");
			}
		} else {
			for(int i=2;i<string.length();i++) {
				if(string.charAt(i)!=a) {
					bw.write(i+1+"");
				}
			}
		}
		
		bw.close();
	} // end of main()
} // end of Main class