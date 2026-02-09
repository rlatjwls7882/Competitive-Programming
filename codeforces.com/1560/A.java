import java.io.BufferedReader;
import java.io.BufferedWriter;
import java.io.IOException;
import java.io.InputStreamReader;
import java.io.OutputStreamWriter;

public class Main {
	static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
	static BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));

	public static void main(String[] args) throws IOException {
		
		int[] arr = new int[1001];		
		arr[1]=1;
		
		int t = Integer.valueOf(br.readLine());
		
		int idx=1;
		while(t-->0) {
			int k = Integer.valueOf(br.readLine());
			if(k>idx) {
				while(idx<k) {
					for(int i=arr[idx]+1;;i++) {
						if(i%3==0||i%10==3) {
							continue;
						}
						arr[++idx]=i;
						break;
					}
				}
			}
			bw.write(arr[k]+"\n");
		}
		
		bw.close();
	} // end of main()
} // end of Main class