#include<iostream>
#include<iomanip>

using namespace std;

	string name;
	int TIN, dependents;
	char civilStatus;
	double grossIncome;
	double personal_deduction;
	double dependent_deduction;
	double taxableIncome; 
	
// NO DEPENDENT (SINGLE) FUNCTIONS

void PersonalDeduction_NoDependent(){
	double personalDeduction_noDependent = grossIncome - 50000; 									// deducts the personal deduction
}

void TaxDue_NoDependent(){
	
	double taxDue_noDependent, TAXDUE_NODEPENDENT, baseTax_NoDependent, netIncome_NoDependent, excessTaxable_NoDependent, personalDeduction_noDependent;
	
	PersonalDeduction_NoDependent();
	
	if (personalDeduction_noDependent > 250000 && personalDeduction_noDependent <= 400000){	
	
		cout << "Taxable income after personal deductions: \tP" << fixed << personalDeduction_noDependent;
		
		TAXDUE_NODEPENDENT = personalDeduction_noDependent * 0.15;
		
		netIncome_NoDependent = grossIncome - TAXDUE_NODEPENDENT;
		
		cout << "\nThe tax due is: \t\t\t\tP" << fixed << TAXDUE_NODEPENDENT;
		cout << "\nThe net income is: \t\t\t\tP" << fixed << netIncome_NoDependent;
	} 
	
	else if (personalDeduction_noDependent > 400000 && personalDeduction_noDependent <= 800000){
		
		cout << "Taxable income after personal deductions: \tP" << fixed << personalDeduction_noDependent;
		
		baseTax_NoDependent = 22500; // basetax
		
		excessTaxable_NoDependent = personalDeduction_noDependent - 400000; 		        // checks the excess over 400k of the deducted grossIncome
		
		TAXDUE_NODEPENDENT = excessTaxable_NoDependent * 0.20; 								// computes the 20 percent of the excess over 400k;
		
		cout << "\nThe Tax due is: \t\t\t\tP" << fixed << TAXDUE_NODEPENDENT + baseTax_NoDependent; 			// adds the 20 percent of the excess and the base tax (tax due)
		netIncome_NoDependent = grossIncome - (TAXDUE_NODEPENDENT + baseTax_NoDependent);   // subtracts the tax due from the grossIncome
		cout << "\nThe net income is: \t\t\t\tP" << fixed << netIncome_NoDependent;							// displays the net income (income after all deductions)
	}
	
	else if (personalDeduction_noDependent > 800000 && personalDeduction_noDependent <= 2000000){
		
		cout << "Taxable income after personal deductions: \tP" << fixed << personalDeduction_noDependent;
		
		baseTax_NoDependent = 102500; // basetax
		
		excessTaxable_NoDependent = personalDeduction_noDependent - 800000; 		        // checks the excess over 400k of the deducted grossIncome
		
		TAXDUE_NODEPENDENT = excessTaxable_NoDependent * 0.25; 								// computes the 20 percent of the excess over 400k;
		
		cout << "\nThe Tax due is: \t\t\t\tP" << fixed << TAXDUE_NODEPENDENT + baseTax_NoDependent; 			// adds the 20 percent of the excess and the base tax (tax due)
		netIncome_NoDependent = grossIncome - (TAXDUE_NODEPENDENT + baseTax_NoDependent);   // subtracts the tax due from the grossIncome
		cout << "\nThe net income is: \t\t\t\tP" << fixed << netIncome_NoDependent;					
	}
	
	else if (personalDeduction_noDependent > 2000000 && personalDeduction_noDependent <= 5000000){
		
		cout << "Taxable income after personal deductions: \tP" << fixed << personalDeduction_noDependent;
		
		baseTax_NoDependent = 402500; // basetax
		
		excessTaxable_NoDependent = personalDeduction_noDependent - 2000000; 		        // checks the excess over 400k of the deducted grossIncome
		
		TAXDUE_NODEPENDENT = excessTaxable_NoDependent * 0.3; 								// computes the 20 percent of the excess over 400k;
		
		cout << "\nThe Tax due is: \t\t\t\tP" << fixed << TAXDUE_NODEPENDENT + baseTax_NoDependent; 			// adds the 20 percent of the excess and the base tax (tax due)
		netIncome_NoDependent = grossIncome - (TAXDUE_NODEPENDENT + baseTax_NoDependent);   // subtracts the tax due from the grossIncome
		cout << "\nThe net income is: \t\t\t\tP" << fixed << netIncome_NoDependent;					
	}
	
	else if (personalDeduction_noDependent > 5000000) {
		
		cout << "Taxable income after personal deductions: \tP" << fixed << personalDeduction_noDependent;
		
		baseTax_NoDependent = 1302500; // basetax
		
		excessTaxable_NoDependent = personalDeduction_noDependent - 5000000; 		        // checks the excess over 400k of the deducted grossIncome
		
		TAXDUE_NODEPENDENT = excessTaxable_NoDependent * 0.35; 								// computes the 20 percent of the excess over 400k;
		
		cout << "\nThe Tax due is: \t\t\t\tP" << fixed << TAXDUE_NODEPENDENT + baseTax_NoDependent; 			// adds the 20 percent of the excess and the base tax (tax due)
		netIncome_NoDependent = grossIncome - (TAXDUE_NODEPENDENT + baseTax_NoDependent);   // subtracts the tax due from the grossIncome
		cout << "\nThe net income is: \t\t\t\tP" << fixed << netIncome_NoDependent;					
	}
	
	else {
		cout << "You're annual income is not subjected to income tax." << endl;
		cout << "The tax due is: \t\t\t\t P0" << endl;
		cout << "The Net income is: \t\t\t\t P" << grossIncome;
	}
	
}




// WITH DEPENDENTS (MARRIED/HEAD OF THE FAMILY) FUNCTIONS

void PersonalDeduction_Dependent() {
	double personalDeduction_Dependent = grossIncome - 50000;
}

void AdditionalExemption_Dependent() {
	double additionalExemption_Dependent = dependents * 25000;
}

void TaxDue_Dependent() {
	
	double totalDeduction, TaxableIncome_Dependent, additionalExemption_Dependent, personalDeduction_Dependent, netIncome_Dependent_Tentative, netIncome_Dependent, baseTax_Dependent, excessIncome_Dependent;
	
	personalDeduction_Dependent = grossIncome - 50000;
	additionalExemption_Dependent = dependents * 25000;
	
	totalDeduction = additionalExemption_Dependent + 50000;
	TaxableIncome_Dependent = grossIncome - totalDeduction;
	
	if (TaxableIncome_Dependent > 250000 && TaxableIncome_Dependent <= 400000){
		netIncome_Dependent_Tentative = excessIncome_Dependent * 0.15;
		netIncome_Dependent = grossIncome - netIncome_Dependent_Tentative;
		cout << "Total deductions (personal & addtional): P" << totalDeduction;
		cout << "\nTaxable income: P" << TaxableIncome_Dependent;
		cout << "\nNet income: P" << netIncome_Dependent;
	} 
	
	else if (TaxableIncome_Dependent > 400000 && TaxableIncome_Dependent <= 800000) {
		baseTax_Dependent = 22500;
		excessIncome_Dependent = TaxableIncome_Dependent - 400000;
		
		netIncome_Dependent_Tentative = excessIncome_Dependent * 0.2 + 22500;
		netIncome_Dependent = grossIncome - netIncome_Dependent_Tentative;
		cout << "Total deductions (personal & addtional): P" << totalDeduction;
		cout << "\nTaxable income: P" << TaxableIncome_Dependent;
		cout << "\nNet income: P" << netIncome_Dependent;
	}
	
	else if (TaxableIncome_Dependent > 800000 && TaxableIncome_Dependent <= 2000000) {
		baseTax_Dependent = 102500;
		excessIncome_Dependent = TaxableIncome_Dependent - 800000;
		
		netIncome_Dependent_Tentative = excessIncome_Dependent * 0.25 + 102500;
		netIncome_Dependent = grossIncome - netIncome_Dependent_Tentative;
		cout << "Total deductions (personal & addtional): P" << totalDeduction;
		cout << "\nTaxable income: P" << TaxableIncome_Dependent;
		cout << "\nNet income: P" << netIncome_Dependent;
	}
	
	else if (TaxableIncome_Dependent > 2000000 && TaxableIncome_Dependent <= 5000000) {
		baseTax_Dependent = 402500;
		excessIncome_Dependent = TaxableIncome_Dependent - 2000000;
		
		netIncome_Dependent_Tentative = excessIncome_Dependent * 0.3 + 402500;
		netIncome_Dependent = grossIncome - netIncome_Dependent_Tentative;
		cout << "Total deductions (personal & addtional): P" << totalDeduction;
		cout << "\nTaxable income: P" << TaxableIncome_Dependent;
		cout << "\nNet income: P" << netIncome_Dependent;
	}
	
	else if (TaxableIncome_Dependent > 5000000) {
		baseTax_Dependent = 1302500;
		excessIncome_Dependent = TaxableIncome_Dependent - 5000000;
		
		netIncome_Dependent_Tentative = excessIncome_Dependent * 0.35 + 1302500;
		netIncome_Dependent = grossIncome - netIncome_Dependent_Tentative;
		cout << "Total deductions (personal & addtional): P" << fixed << totalDeduction;
		cout << "\nTaxable income: P" << fixed << TaxableIncome_Dependent;
		cout << "\nNet income: P" << fixed << netIncome_Dependent;
	}
	
	else {
		cout << "You're annual income is not subjected to income tax." << endl;
		cout << "The tax due is: \t\t\t\t P0" << endl;
		cout << "The net income is: \t\t\t\t P" << grossIncome;
	}
}

// REPEAT PROGRAM

void promptRepeat() {
}

void repeatProgram(){	
	char answer;
	
	cout << "\n------------------------------------";
	cout << "\n------------------------------------";
	cout << "" << endl << endl;
	
	cout << "Do you want to repeat the program? (y/n): ";
	cin >> answer;
	
	if (answer == 'n' || answer == 'N'){
		cout << "\n------------------------------------";
		cout << "\n------------------------------------";
		cout << "" << endl << endl;
		cout << "Thank you for using the program.";
		exit(1);
	}
	
	if (answer != 'n' && answer != 'N' && answer != 'y' && answer != 'Y'){
		cout << "Enter valid answer.";
		repeatProgram();
	}
	
	do {
		
	cout << "\n------------------------------------";
	cout << "\n------------------------------------";
	cout << "" << endl << endl;
	
	cout << "\n------------------------------------";
	cout << "\n------------------------------------";
	cout << "" << endl << endl;
		
	cout << "Enter Name: \t\t\t";
	cin.ignore();
	getline(cin, name);
	
	cout << "TIN: \t\t\t\t";
	cin >> TIN;
	
	cout << "Gross Income: \t\t\t";
	cin >> grossIncome;
	
	cout << "Civil Status(S/M/H): \t\t";
	cin >> civilStatus;
	
	if(civilStatus == 'S' || civilStatus == 's'){
		cout << "\n------------------------------------";
		cout << "\n------------------------------------";
		cout << "" << endl << endl;
		PersonalDeduction_NoDependent();
		TaxDue_NoDependent();
	} 
	else if (civilStatus == 'M' || civilStatus == 'm' || civilStatus == 'h' || civilStatus == 'H'){
		cout << "No. of dependents(max of 4): \t";
		cin >> dependents;
		
		if (dependents <= 4) {
			cout << "\n------------------------------------";
			cout << "\n------------------------------------";
			cout << "" << endl << endl;
			TaxDue_Dependent();
		} else {
			cout << "\nSorry, the maximum of dependents is 4. Kindly re-enter your information.";
			repeatProgram();
		}
		
	} else {
		cout << "\nEnter valid civil status value.";
		repeatProgram();
	}
	
	cout << "\n------------------------------------";
	cout << "\n------------------------------------";
	cout << "" << endl << endl;
	
	repeatProgram();
	} while (answer == 'y' || answer == 'Y');
}
	
int main(){
	
	cout << "Enter Name: \t\t\t";
	getline(cin, name);
	
	cout << "TIN: \t\t\t\t";
	cin >> TIN;
	
	cout << "Gross Income: \t\t\t";
	cin >> grossIncome;
	
	cout << "Civil Status(S/M/H): \t\t";
	cin >> civilStatus;
	
	if(civilStatus == 'S' || civilStatus == 's'){
		cout << "\n------------------------------------";
		cout << "\n------------------------------------";
		cout << "" << endl << endl;
		PersonalDeduction_NoDependent();
		TaxDue_NoDependent();
	} 
	else if (civilStatus == 'M' || civilStatus == 'm' || civilStatus == 'h' || civilStatus == 'H'){
		cout << "No. of dependents(max of 4): \t";
		cin >> dependents;
		
		if (dependents <= 4) {
			cout << "\n------------------------------------";
			cout << "\n------------------------------------";
			cout << "" << endl << endl;
			TaxDue_Dependent();
		} else {
			cout << "\nSorry, the maximum of dependents is 4. Kindly re-enter your information.";
			repeatProgram();
		}
		
	} else {
		cout << "\nEnter valid civil status value.";
		repeatProgram();
	}
	
	cout << "\n------------------------------------";
	cout << "\n------------------------------------";
	cout << "" << endl << endl;
	
	repeatProgram();
	
	
	
	return 0;
}

