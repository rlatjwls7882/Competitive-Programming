import java.io.BufferedReader;
import java.io.BufferedWriter;
import java.io.IOException;
import java.io.InputStreamReader;
import java.io.OutputStreamWriter;

public class Main {
	static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
	static BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));

	public static void main(String[] args) throws IOException {
		
		int size = 1000000;
		boolean[] compositeNum = new boolean[size];
		for(int i=2;i*i<size;i++) {
			if(!compositeNum[i]) {
				for(int j=i*i;j<size;j+=i) {
					compositeNum[j]=true;
				}
			}
		}
		
		int N = Integer.valueOf(br.readLine());
		
		for(int i=4;i<N-1;i++) {
			if(compositeNum[i]&&compositeNum[N-i]) {
				bw.write(i+" "+(N-i));
				break;
			}
		}
		
		bw.close();
	} // end of main()
} // end of Main class