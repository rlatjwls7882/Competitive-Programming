import java.io.BufferedReader;
import java.io.BufferedWriter;
import java.io.IOException;
import java.io.InputStreamReader;
import java.io.OutputStreamWriter;

public class Main {
	static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
	static BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));

	public static void main(String[] args) throws IOException {
		
		int t = Integer.valueOf(br.readLine());
		
		while(t-->0) {
			int n = Integer.valueOf(br.readLine());
			
			String[] map = new String[n];
			int[] firstPos = {-1, -1};
			for(int i=0;i<n;i++) {
				map[i] = br.readLine();
				if(firstPos[1]==-1) {
					firstPos[0]=i;
					firstPos[1]=map[i].indexOf('1');
				}
			}
			
			if(firstPos[1]-1>=0&&map[firstPos[0]+1].charAt(firstPos[1]-1)=='1'||map[firstPos[0]+1].charAt(firstPos[1])=='0') {
				bw.write("TRIANGLE\n");
			} else {
				bw.write("SQUARE\n");
			}
		}
		
		bw.close();
	} // end of main()
} // end of Main class