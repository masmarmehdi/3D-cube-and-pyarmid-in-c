void mx_printchar(char c);

void mx_cube(int n) {
    if (n > 1) {//the program should not accept a value less than 1 because it's not gonna give any cube with that value. 
        int m = n / 2;
        int k = 0;
        int vp = 0;
        //This is the first row of our program.         
        for (int i = 0; i < m + 1 ; i++) {// the last element should be n/2 for spaces
            mx_printchar(' ');
        }
        mx_printchar('+');
        for (int i = 0; i < n * 2; i++) {// as we have in task "-" should be double of the input value so i should not pass 2*n (0 based).
            mx_printchar('-');
        }
        mx_printchar('+');
        mx_printchar('\n');//The end of the first row.
        //The up of our cube.
        for (int i = 0; i < n / 2; i++) {
            for (int j = m; j != 0; j--) {
                mx_printchar(' ');  
            }      
            m--;// decreasing by (n/2)-1 so we can align our cube as we wanted it to be.
            mx_printchar('/');
            for (int j = 0; j < n * 2; j++) {
                mx_printchar(' ');
            }
            mx_printchar('/');
            for (int j = 0; j < k; j++) {
                mx_printchar(' ');  
            } 
            k++;//placing "|"on the place that it should be.
            mx_printchar('|');
            vp++;//placing the other elements below "|"
            mx_printchar('\n');
        }
        //the second row after the up of our cube
        mx_printchar('+');
        for (int i = 0; i < n * 2; i++) {
            mx_printchar('-');
        }
        mx_printchar('+');
        //the end of the second row.
        //The mid of our cube.
        for (int i = 0; i < k; i++) { 
                mx_printchar(' ');  
            } 
        mx_printchar('|');
        vp++;
        mx_printchar('\n');
        for (int i = 0; i < n; i++) {
            mx_printchar('|');
            for (int j = 0; j < n * 2; j++) {
                mx_printchar(' ');
            }
            mx_printchar('|');
            if (vp < n) {
                for (int j = 0; j < k; j++) {
                  mx_printchar(' ');  
                } 
                mx_printchar('|');
                vp++;
            } else if (vp == n) {
                for (int j = 0; j < k; j++) {
                    mx_printchar(' ');  
                } 
                mx_printchar('+');
                vp++;
            } else {
                k--;
                for (int j = 0; j < k; j++) {
                    mx_printchar(' ');   
                }           
                mx_printchar('/');
            }
            mx_printchar('\n');
        }
        //the end of the mid of the cube.
        //The last row of our cube.
        mx_printchar('+');
        for (int i = 0; i < n * 2; i++) {
            mx_printchar('-');
        }
        mx_printchar('+');
        //the end of the last row.
    }
    mx_printchar('\n');
}
