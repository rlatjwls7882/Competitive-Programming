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
		
		int cnt=0;
		for(int i=0;i<string.length();i++) {
			if(string.charAt(i)=='4'||string.charAt(i)=='7') {
				cnt++;
			}
		}
		
		boolean lucky=true;
		while(true) {
			if(cnt%10!=4&&cnt%10!=7) {
				lucky=false;
				break;
			}
			cnt/=10;
			if(cnt==0) {
				break;
			}
		}
		bw.write(lucky?"YES":"NO");
		
		bw.close();
	} // end of main()
} // end of Main class