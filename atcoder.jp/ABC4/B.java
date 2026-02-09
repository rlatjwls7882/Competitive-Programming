import java.io.BufferedReader;
import java.io.BufferedWriter;
import java.io.IOException;
import java.io.InputStreamReader;
import java.io.OutputStreamWriter;

public class Main {
	static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
	static BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));
	
	public static void main(String[] args) throws IOException {
		
		String[] matrix = new String[4];
		for(int i=0;i<4;i++) {
			matrix[i] = br.readLine();
		}
		
		for(int i=3;i>=0;i--) {
			for(int j=6;j>=0;j--) {
				bw.write(matrix[i].charAt(j));
			}
			bw.newLine();
		}
		
		bw.close();
	} // end of main()
} // end of Main class