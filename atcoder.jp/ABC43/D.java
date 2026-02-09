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
		int length = string.length();
		
		StringBuilder sb = new StringBuilder();
		for(int i=0;i<length-1;i++) {
			if(string.charAt(i)==string.charAt(i+1)) {
				sb.append(i+1).append(' ').append(i+2);
				break;
			}
			if(i+2<length&&string.charAt(i)==string.charAt(i+2)) {
				sb.append(i+1).append(' ').append(i+3);
				break;
			}
		}
		
		if(sb.isEmpty()) {
			bw.write("-1 -1");
		} else {
			bw.write(sb.toString());
		}
		
		bw.close();
	} // end of main()
} // end of Main class