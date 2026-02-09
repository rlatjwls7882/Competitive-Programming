import java.io.BufferedReader;
import java.io.BufferedWriter;
import java.io.IOException;
import java.io.InputStreamReader;
import java.io.OutputStreamWriter;
import java.util.HashSet;

public class Main {
	static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
	static BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));
	
	public static void main(String[] args) throws IOException {
		
		String string = br.readLine();
		
		HashSet<String> set = new HashSet<>();
		for(int i=0;i<string.length();i++) {
			for(int j=i+1;j<=string.length();j++) {
				set.add(string.substring(i, j));
			}
		}
		bw.write(set.size()+"");
		
		bw.close();
	} // end of main()
} // end of Main class