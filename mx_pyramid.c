void mx_printchar(char c);

void mx_pyramid(int n) {
    if (n > 1 && n % 2 == 0) {
        int k = n - 1;
        int l = 1;
        int h = 1;
        int ckp = 0;
        int ckl = 0;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < k; j++) {
                mx_printchar(' ');
            }
            k--;
            mx_printchar('/');
            ckl++;
            if (i == 0) {
                mx_printchar('\\');
                ckp++;
            } else if (i > 0) {
                if (ckl != n) {
                    for (int j = 0; j < l; j++) {
                        mx_printchar(' ');
                    } 
                } else {
                    for (int j = 0; j < l; j++) {
                        mx_printchar('_');
                    } 
                }         
                mx_printchar('\\');
                if (ckp != n / 2) {
                    for (int j = 0; j < h; j++) {
                        mx_printchar(' ');
                    }
                    mx_printchar('\\');
                    ckp++;
                    h++;
                } else {
                    h--;                    
                    for (int j = 0; j < h; j++) {
                        mx_printchar(' ');
                    }
                    mx_printchar('|');
                }
                l += 2; 
            }
            mx_printchar('\n');
        }
    }
}
