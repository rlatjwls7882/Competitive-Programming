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
		
		int cost=700;
		for(int i=0;i<3;i++) {
			if(string.charAt(i)=='o') {
				cost+=100;
			}
		}
		bw.write(cost+"");
		
		bw.close();
	} // end of main()
} // end of Main class