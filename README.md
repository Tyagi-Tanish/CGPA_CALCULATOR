CGPA & Percentage Calculator in C
This is a simple C program that calculates the Cumulative Grade Point Average (CGPA) and percentage based on student marks and credit points. It follows a weighted grading system and provides a user-friendly command-line interface with colored output for better readability.

Features
Calculates CGPA using a weighted grading system
Converts CGPA to percentage using a standard conversion (×9.5)
Accepts marks and credit points as input for each subject
Uses colored terminal output for better readability
Provides performance-based feedback
How It Works
Enter the number of subjects
Enter marks (out of 100) and credit points for each subject
The program converts marks into grade points on a 10-point scale
Calculates CGPA using the formula:
𝐶
𝐺
𝑃
𝐴
=
∑
(
𝐺
𝑟
𝑎
𝑑
𝑒
𝑃
𝑜
𝑖
𝑛
𝑡
×
𝐶
𝑟
𝑒
𝑑
𝑖
𝑡
)
∑
𝐶
𝑟
𝑒
𝑑
𝑖
𝑡
𝑠
CGPA= 
∑Credits
∑(GradePoint×Credit)
​
 
Converts CGPA into Percentage using:
𝑃
𝑒
𝑟
𝑐
𝑒
𝑛
𝑡
𝑎
𝑔
𝑒
=
𝐶
𝐺
𝑃
𝐴
×
9.5
Percentage=CGPA×9.5
Displays CGPA, total credits, and percentage, along with a performance-based remark
Installation & Usage
Clone the Repository
sh
Copy
Edit
git clone https://github.com/TYAGI-TANISH/CGPA-Calculator.git
cd CGPA-Calculator
Compile the Program
sh
Copy
Edit
gcc cgpa_calculator.c -o cgpa
Run the Program
sh
Copy
Edit
./cgpa    # Linux/Mac  
cgpa      # Windows  
Example Output
mathematica
Copy
Edit
--------------------------------------
      CGPA & Percentage Calculator    
--------------------------------------
Enter the number of subjects: 3

Enter marks for Subject 1 (out of 100): 85
Enter credits for Subject 1: 4

Enter marks for Subject 2 (out of 100): 78
Enter credits for Subject 2: 3

Enter marks for Subject 3 (out of 100): 92
Enter credits for Subject 3: 2

--------------------------------------
Total Credits: 9.00
Your CGPA: 8.89
Equivalent Percentage: 84.45% (Excellent!)
--------------------------------------
License
This project is open-source and available under the MIT License.

