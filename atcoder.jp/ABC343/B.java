import java.io.BufferedReader;
import java.io.BufferedWriter;
import java.io.IOException;
import java.io.InputStreamReader;
import java.io.OutputStreamWriter;

public class Main {
	static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
	static BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));

	public static void main(String[] args) throws IOException {
		
		int N = Integer.valueOf(br.readLine());
		
		for(int i=0;i<N;i++) {
			String string = br.readLine();
			for(int j=0;j<N*2;j+=2) {
				if(string.charAt(j)=='1') {
					bw.write((j/2+1)+" ");
				}
			}
			bw.newLine();
		}
		
		bw.close();
	} // end of main()
} // end of Main class