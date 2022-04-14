import java.util.*;
import java.io.*;

public class PositiveProducts {

    static class FastReader {
        BufferedReader br;
        StringTokenizer st;

        public FastReader() {
            br = new BufferedReader(new InputStreamReader(System.in));
        }

        String next() {
            while (st == null || !st.hasMoreTokens()) {
                try {
                    st = new StringTokenizer(br.readLine());
                } catch (IOException e) {
                    e.printStackTrace();
                }
            }
            return st.nextToken();
        }

        int nextInt() {
            return Integer.parseInt(next());
        }

        long nextLong() {
            return Long.parseLong(next());
        }

        double nextDouble() {
            return Double.parseDouble(next());
        }

        String nextLine() {
            String str = "";
            try {
                str = br.readLine().trim();
            } catch (Exception e) {
                e.printStackTrace();
            }
            return str;
        }
    }

    static class FastWriter {
        private final BufferedWriter bw;

        public FastWriter() {
            this.bw = new BufferedWriter(new OutputStreamWriter(System.out));
        }

        public void print(Object object) throws IOException {
            bw.append("" + object);
        }

        public void println(Object object) throws IOException {
            print(object);
            bw.append("\n");
        }

        public void close() throws IOException {
            bw.close();
        }

    }

    public static void main(String[] args) {
        try {
            FastReader in = new FastReader();
            FastWriter out = new FastWriter();

            int tc = 1;
            tc = in.nextInt();
            while (tc-- > 0) {
                // write code here
                int n;
                n = in.nextInt();

                int[] arr = new int[n];
                for (int i = 0; i < n; i++)
                    arr[i] = in.nextInt();

                int noz = 0, non = 0;
                for (int i = 0; i < n; i++) {
                    if (arr[i] == 0) noz++;
                    if (arr[i] < 0) non++;
                }

                long ans1 = 0, ans2 = 0;
                ans1 = sum(n - (noz + non + 1));
                if (non > 1) ans2 = sum(non - 1);

                System.out.println(ans1 + ans2);
            }

            out.close();
        } catch (Exception ignored) {
        }
    }

    public static long sum(int n) {
        long res = 0;
        for (int i = n; i >= 1; i--)
            res += i;

        return res;
    }

}