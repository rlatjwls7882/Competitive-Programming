import java.io.BufferedReader;
import java.io.BufferedWriter;
import java.io.IOException;
import java.io.InputStreamReader;
import java.io.OutputStreamWriter;

public class Main {
	static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
	static BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));
	
	public static void main(String[] args) throws IOException {
		
		String str1 = br.readLine();
		String str2 = br.readLine();
		
		int compare = str1.compareToIgnoreCase(str2);
		if(compare==0) {
			bw.write("0");
		} else if(compare>0) {
			bw.write("1");
		} else {
			bw.write("-1");
		}
		
		bw.close();
	} // end of main()
} // end of Main class