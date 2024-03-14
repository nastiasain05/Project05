#pragma once
#include <cstdlib> 
#include <ctime>  
const int n = 3, m = 3;
int a[n][m], i, j, k, l;

namespace Project05 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TabControl^ tabControl1;
	protected:
	private: System::Windows::Forms::TabPage^ tabPage1;
	private: System::Windows::Forms::DataGridView^ dataGridView2;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::TabPage^ tabPage2;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::DataGridView^ dataGridView3;
	private: System::Windows::Forms::DataGridView^ dataGridView4;
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ зToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ закритиToolStripMenuItem;


	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->dataGridView2 = (gcnew System::Windows::Forms::DataGridView());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->dataGridView3 = (gcnew System::Windows::Forms::DataGridView());
			this->dataGridView4 = (gcnew System::Windows::Forms::DataGridView());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->зToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->закритиToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->tabControl1->SuspendLayout();
			this->tabPage1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->tabPage2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView4))->BeginInit();
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->tabPage1);
			this->tabControl1->Controls->Add(this->tabPage2);
			this->tabControl1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->tabControl1->Location = System::Drawing::Point(0, 28);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(854, 394);
			this->tabControl1->TabIndex = 0;
			// 
			// tabPage1
			// 
			this->tabPage1->BackColor = System::Drawing::Color::Khaki;
			this->tabPage1->Controls->Add(this->label2);
			this->tabPage1->Controls->Add(this->label1);
			this->tabPage1->Controls->Add(this->button1);
			this->tabPage1->Controls->Add(this->dataGridView2);
			this->tabPage1->Controls->Add(this->dataGridView1);
			this->tabPage1->Location = System::Drawing::Point(4, 25);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			this->tabPage1->Size = System::Drawing::Size(846, 365);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"Динамічний масив";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.8F));
			this->label2->Location = System::Drawing::Point(585, 263);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(0, 29);
			this->label2->TabIndex = 4;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.8F));
			this->label1->Location = System::Drawing::Point(482, 205);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(328, 29);
			this->label1->TabIndex = 3;
			this->label1->Text = L"Сума квадратів елементів:";
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Orange;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F));
			this->button1->Location = System::Drawing::Point(547, 75);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(171, 45);
			this->button1->TabIndex = 2;
			this->button1->Text = L"Знайти";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// dataGridView2
			// 
			this->dataGridView2->AllowUserToAddRows = false;
			this->dataGridView2->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView2->ColumnHeadersVisible = false;
			this->dataGridView2->Location = System::Drawing::Point(36, 193);
			this->dataGridView2->Name = L"dataGridView2";
			this->dataGridView2->RowHeadersVisible = false;
			this->dataGridView2->RowHeadersWidth = 51;
			this->dataGridView2->RowTemplate->Height = 24;
			this->dataGridView2->Size = System::Drawing::Size(405, 114);
			this->dataGridView2->TabIndex = 1;
			// 
			// dataGridView1
			// 
			this->dataGridView1->AllowUserToAddRows = false;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->ColumnHeadersVisible = false;
			this->dataGridView1->Location = System::Drawing::Point(36, 34);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersVisible = false;
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->RowTemplate->Height = 24;
			this->dataGridView1->Size = System::Drawing::Size(405, 114);
			this->dataGridView1->TabIndex = 0;
			// 
			// tabPage2
			// 
			this->tabPage2->BackColor = System::Drawing::Color::RosyBrown;
			this->tabPage2->Controls->Add(this->button4);
			this->tabPage2->Controls->Add(this->textBox1);
			this->tabPage2->Controls->Add(this->button3);
			this->tabPage2->Controls->Add(this->button2);
			this->tabPage2->Controls->Add(this->dataGridView3);
			this->tabPage2->Controls->Add(this->dataGridView4);
			this->tabPage2->Location = System::Drawing::Point(4, 25);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			this->tabPage2->Size = System::Drawing::Size(846, 365);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"Статичний масив ";
			this->tabPage2->Click += gcnew System::EventHandler(this, &MyForm::tabPage2_Click);
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->button4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.8F));
			this->button4->Location = System::Drawing::Point(22, 219);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(148, 38);
			this->button4->TabIndex = 7;
			this->button4->Text = L"Сума";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// textBox1
			// 
			this->textBox1->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->textBox1->Location = System::Drawing::Point(213, 219);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(148, 38);
			this->textBox1->TabIndex = 6;
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.8F));
			this->button3->Location = System::Drawing::Point(81, 291);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(205, 42);
			this->button3->TabIndex = 5;
			this->button3->Text = L"Очистити";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.8F));
			this->button2->Location = System::Drawing::Point(68, 74);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(218, 46);
			this->button2->TabIndex = 4;
			this->button2->Text = L"Вивести";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// dataGridView3
			// 
			this->dataGridView3->AllowUserToAddRows = false;
			this->dataGridView3->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView3->ColumnHeadersVisible = false;
			this->dataGridView3->Location = System::Drawing::Point(386, 41);
			this->dataGridView3->Name = L"dataGridView3";
			this->dataGridView3->RowHeadersVisible = false;
			this->dataGridView3->RowHeadersWidth = 51;
			this->dataGridView3->RowTemplate->Height = 24;
			this->dataGridView3->Size = System::Drawing::Size(405, 101);
			this->dataGridView3->TabIndex = 3;
			// 
			// dataGridView4
			// 
			this->dataGridView4->AllowUserToAddRows = false;
			this->dataGridView4->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView4->ColumnHeadersVisible = false;
			this->dataGridView4->Location = System::Drawing::Point(386, 219);
			this->dataGridView4->Name = L"dataGridView4";
			this->dataGridView4->RowHeadersVisible = false;
			this->dataGridView4->RowHeadersWidth = 51;
			this->dataGridView4->RowTemplate->Height = 24;
			this->dataGridView4->Size = System::Drawing::Size(405, 96);
			this->dataGridView4->TabIndex = 2;
			// 
			// menuStrip1
			// 
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->зToolStripMenuItem,
					this->закритиToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(854, 28);
			this->menuStrip1->TabIndex = 1;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// зToolStripMenuItem
			// 
			this->зToolStripMenuItem->Name = L"зToolStripMenuItem";
			this->зToolStripMenuItem->Size = System::Drawing::Size(89, 24);
			this->зToolStripMenuItem->Text = L"Завдання";
			this->зToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::зToolStripMenuItem_Click);
			// 
			// закритиToolStripMenuItem
			// 
			this->закритиToolStripMenuItem->Name = L"закритиToolStripMenuItem";
			this->закритиToolStripMenuItem->Size = System::Drawing::Size(79, 24);
			this->закритиToolStripMenuItem->Text = L"Закрити";
			this->закритиToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::закритиToolStripMenuItem_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(854, 422);
			this->Controls->Add(this->tabControl1);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Лабораторна робота 6";
			this->tabControl1->ResumeLayout(false);
			this->tabPage1->ResumeLayout(false);
			this->tabPage1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->tabPage2->ResumeLayout(false);
			this->tabPage2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView4))->EndInit();
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		

	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		int rows = 3;
		int cols = 3;
		int** arr = new int* [rows];
		for (int i = 0; i < rows; i++) {
			arr[i] = new int[cols];
			for (int j = 0; j < cols; j++) {
				arr[i][j] = rand() % 21 - 10;
			}
		}

		dataGridView1->RowCount = rows;
		dataGridView1->ColumnCount = cols;
		for (int i = 0; i < rows; i++) {
			for (int j = 0; j < cols; j++) {
				dataGridView1->Rows[i]->Cells[j]->Value = arr[i][j];
			}
		}

		int sum = 0;
		for (int i = 0; i < rows; i++) {
			for (int j = 0; j < cols; j++) {
				sum += arr[i][j] * arr[i][j];
			}
		}



		dataGridView2->RowCount = rows;
		dataGridView2->ColumnCount = cols;
		for (int i = 0; i < rows; i++) {
			for (int j = 0; j < cols; j++) {
				int square = arr[i][j] * arr[i][j];
				dataGridView2->Rows[i]->Cells[j]->Value = square;
			}
		}


		label2->Text = Convert::ToString(sum); 		

		for (int i = 0; i < rows; i++) {
			delete[] arr[i];
		}
		delete[] arr;

	}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	Random^ rnd = gcnew Random();

	// Переконайтеся, що розмір dataGridView3 встановлено правильно
	dataGridView3->RowCount = n; // Встановлюємо кількість рядків
	dataGridView3->ColumnCount = m; // Встановлюємо кількість стовпців

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			dataGridView3->Rows[i]->Cells[j]->Value = Convert::ToString(rnd->Next(50));
		}
	}
}
private: System::Void tabPage2_Click(System::Object^ sender, System::EventArgs^ e) {
	dataGridView3->ColumnCount=5;
	dataGridView3->Rows->Add(5);
	dataGridView4->ColumnCount = 5;
	dataGridView4->Rows->Add(5);
	
}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	int sum = 0; // Ініціалізуємо суму перед використанням

	// Переносимо обчислення суми квадратів у відповідне місце
	// Видаліть зайвий рядок sum = a[0][0], оскільки це встановлює початкове значення суми

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			a[i][j] = Convert::ToInt32(dataGridView3[j, i]->Value);
			sum += a[i][j] * a[i][j]; // Додаємо квадрат елементу до суми
		}
	}

	// Налаштування dataGridView4
	dataGridView4->RowCount = n;
	dataGridView4->ColumnCount = m;

	// Заповнення dataGridView4
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			int square = a[i][j] * a[i][j];
			dataGridView4->Rows[i]->Cells[j]->Value = square;
		}
	}

	// Встановлення значення textBox1
	textBox1->Text = sum.ToString();
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	dataGridView3->Rows->Clear();
	dataGridView4->Rows->Clear();
	textBox1->Text = "";

}
private: System::Void зToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	MessageBox::Show(" Знайти суму квадратів елементів двовимірного (динамічний та статичний) масиву.  ", "Лабораторна робота 6.  Що потрібно зробити?", MessageBoxButtons::OK, MessageBoxIcon::Information);

}
private: System::Void закритиToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	Application::Exit();
}
};
}
