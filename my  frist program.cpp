#include<iostream>
#include<cmath>
#include<string>
using namespace std;
struct employee
{
	int emp_no;
	string emp_name, job;
	float salary, bouns ,total_salary;
	 
};
void aceept_data(employee arr[], int size);
void set_the_bouns(employee arr[], int size);
void print_out_the_data(employee arr[], int size);
int main()
{
	employee arr[5];
	aceept_data(arr, 5);
	print_out_the_data(arr, 5);
	
	return 0;
}
void aceept_data(employee arr[], int size)
{   
	int i = 0;
	for (; i < size;)
	{
		cout <<"Enter The data for the employe number " << i + 1 << "\n";
		cout << "Enter the employa number \n";
		cin >> arr[i].emp_no;
		cout << "Enter the name of employee \n";
		cin >> arr[i].emp_name;
		cout << "Enter the job name for the employee  (Manager or Engineer or Clerck or otherwise)\n";
		cin >> arr[i].job;
        cout << "*******************************\n";
		if ((arr[i].job == "Manager") || (arr[i].job == "manager"))
			arr[i].salary = 5000;
		else if ((arr[i].job == "Engineer") || (arr[i].job == "engineer"))
			arr[i].salary = 3000;
		else if ((arr[i].job == "Clerck") || (arr[i].job == "clerck"))
			arr[i].salary = 2000;
		else
			arr[i].salary = 1000;
	}
	i++;
}
void set_the_bouns(employee arr[], int size)
{

}
void print_out_the_data(employee arr[], int size)
{   cout << "emp_number\temp_name\temp_job\temp_salary" << endl;
	for (int i = 0; i < size; i++)
	{
		cout << "The data for employee number " << i + 1 << "\n";
		
		cout << arr[i].emp_no << "\t" << arr[i].emp_name << "\t" << arr[i].job << "\t" << arr[i].salary <<  endl;
	}
	cout << "\n";
}