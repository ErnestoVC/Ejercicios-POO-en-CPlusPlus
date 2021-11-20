#pragma once

namespace POOPersona {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén utilizando.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::GroupBox^  GBMayores25;
	protected:
	private: System::Windows::Forms::Button^  btnFiltrarMayores25;
	private: System::Windows::Forms::ListBox^  lstMayores25;
	private: System::Windows::Forms::Label^  lblPersonas;
	private: System::Windows::Forms::TextBox^  txtEdad;
	private: System::Windows::Forms::TextBox^  txtNombre;
	private: System::Windows::Forms::ListBox^  lstPersonas;
	private: System::Windows::Forms::Label^  lblEdad;
	private: System::Windows::Forms::Label^  lblNombre;
	private: System::Windows::Forms::Button^  btnCrear;
	private: System::Windows::Forms::GroupBox^  GBInicianConA;
	private: System::Windows::Forms::Button^  btnFitrarInicianConA;
	private: System::Windows::Forms::ListBox^  lstInicianConA;
	private: System::Windows::Forms::Button^  btnEliminar;

	private:
		/// <summary>
		/// Variable del diseñador requerida.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido del método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			this->GBMayores25 = (gcnew System::Windows::Forms::GroupBox());
			this->btnFiltrarMayores25 = (gcnew System::Windows::Forms::Button());
			this->lstMayores25 = (gcnew System::Windows::Forms::ListBox());
			this->lblPersonas = (gcnew System::Windows::Forms::Label());
			this->txtEdad = (gcnew System::Windows::Forms::TextBox());
			this->txtNombre = (gcnew System::Windows::Forms::TextBox());
			this->lstPersonas = (gcnew System::Windows::Forms::ListBox());
			this->lblEdad = (gcnew System::Windows::Forms::Label());
			this->lblNombre = (gcnew System::Windows::Forms::Label());
			this->btnCrear = (gcnew System::Windows::Forms::Button());
			this->GBInicianConA = (gcnew System::Windows::Forms::GroupBox());
			this->btnFitrarInicianConA = (gcnew System::Windows::Forms::Button());
			this->lstInicianConA = (gcnew System::Windows::Forms::ListBox());
			this->btnEliminar = (gcnew System::Windows::Forms::Button());
			this->GBMayores25->SuspendLayout();
			this->GBInicianConA->SuspendLayout();
			this->SuspendLayout();
			// 
			// GBMayores25
			// 
			this->GBMayores25->Controls->Add(this->btnFiltrarMayores25);
			this->GBMayores25->Controls->Add(this->lstMayores25);
			this->GBMayores25->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->GBMayores25->Location = System::Drawing::Point(252, 26);
			this->GBMayores25->Name = L"GBMayores25";
			this->GBMayores25->Size = System::Drawing::Size(229, 400);
			this->GBMayores25->TabIndex = 17;
			this->GBMayores25->TabStop = false;
			this->GBMayores25->Text = L"Mayores de 25 años";
			// 
			// btnFiltrarMayores25
			// 
			this->btnFiltrarMayores25->Location = System::Drawing::Point(15, 357);
			this->btnFiltrarMayores25->Name = L"btnFiltrarMayores25";
			this->btnFiltrarMayores25->Size = System::Drawing::Size(208, 37);
			this->btnFiltrarMayores25->TabIndex = 1;
			this->btnFiltrarMayores25->Text = L"Filtrar";
			this->btnFiltrarMayores25->UseVisualStyleBackColor = true;
			// 
			// lstMayores25
			// 
			this->lstMayores25->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lstMayores25->FormattingEnabled = true;
			this->lstMayores25->ItemHeight = 20;
			this->lstMayores25->Location = System::Drawing::Point(15, 27);
			this->lstMayores25->Name = L"lstMayores25";
			this->lstMayores25->Size = System::Drawing::Size(208, 324);
			this->lstMayores25->TabIndex = 0;
			// 
			// lblPersonas
			// 
			this->lblPersonas->AutoSize = true;
			this->lblPersonas->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblPersonas->Location = System::Drawing::Point(28, 159);
			this->lblPersonas->Name = L"lblPersonas";
			this->lblPersonas->Size = System::Drawing::Size(152, 20);
			this->lblPersonas->TabIndex = 16;
			this->lblPersonas->Text = L"Todas las Personas:";
			// 
			// txtEdad
			// 
			this->txtEdad->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtEdad->Location = System::Drawing::Point(98, 68);
			this->txtEdad->MaxLength = 2;
			this->txtEdad->Name = L"txtEdad";
			this->txtEdad->Size = System::Drawing::Size(44, 26);
			this->txtEdad->TabIndex = 15;
			// 
			// txtNombre
			// 
			this->txtNombre->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtNombre->Location = System::Drawing::Point(98, 27);
			this->txtNombre->MaxLength = 99;
			this->txtNombre->Name = L"txtNombre";
			this->txtNombre->Size = System::Drawing::Size(148, 26);
			this->txtNombre->TabIndex = 14;
			// 
			// lstPersonas
			// 
			this->lstPersonas->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lstPersonas->FormattingEnabled = true;
			this->lstPersonas->ItemHeight = 20;
			this->lstPersonas->Location = System::Drawing::Point(32, 182);
			this->lstPersonas->Name = L"lstPersonas";
			this->lstPersonas->Size = System::Drawing::Size(214, 244);
			this->lstPersonas->TabIndex = 13;
			// 
			// lblEdad
			// 
			this->lblEdad->AutoSize = true;
			this->lblEdad->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblEdad->Location = System::Drawing::Point(28, 68);
			this->lblEdad->Name = L"lblEdad";
			this->lblEdad->Size = System::Drawing::Size(47, 20);
			this->lblEdad->TabIndex = 12;
			this->lblEdad->Text = L"Edad";
			// 
			// lblNombre
			// 
			this->lblNombre->AutoSize = true;
			this->lblNombre->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblNombre->Location = System::Drawing::Point(25, 28);
			this->lblNombre->Name = L"lblNombre";
			this->lblNombre->Size = System::Drawing::Size(65, 20);
			this->lblNombre->TabIndex = 11;
			this->lblNombre->Text = L"Nombre";
			this->lblNombre->Click += gcnew System::EventHandler(this, &MyForm::lblNombre_Click);
			// 
			// btnCrear
			// 
			this->btnCrear->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnCrear->Location = System::Drawing::Point(62, 112);
			this->btnCrear->Name = L"btnCrear";
			this->btnCrear->Size = System::Drawing::Size(61, 30);
			this->btnCrear->TabIndex = 10;
			this->btnCrear->Text = L"Crear";
			this->btnCrear->UseVisualStyleBackColor = true;
			// 
			// GBInicianConA
			// 
			this->GBInicianConA->Controls->Add(this->btnFitrarInicianConA);
			this->GBInicianConA->Controls->Add(this->lstInicianConA);
			this->GBInicianConA->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->GBInicianConA->Location = System::Drawing::Point(487, 26);
			this->GBInicianConA->Name = L"GBInicianConA";
			this->GBInicianConA->Size = System::Drawing::Size(229, 400);
			this->GBInicianConA->TabIndex = 18;
			this->GBInicianConA->TabStop = false;
			this->GBInicianConA->Text = L"Nombre inicia con letra \"A\"";
			// 
			// btnFitrarInicianConA
			// 
			this->btnFitrarInicianConA->Location = System::Drawing::Point(9, 357);
			this->btnFitrarInicianConA->Name = L"btnFitrarInicianConA";
			this->btnFitrarInicianConA->Size = System::Drawing::Size(214, 37);
			this->btnFitrarInicianConA->TabIndex = 1;
			this->btnFitrarInicianConA->Text = L"Filtrar";
			this->btnFitrarInicianConA->UseVisualStyleBackColor = true;
			// 
			// lstInicianConA
			// 
			this->lstInicianConA->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lstInicianConA->FormattingEnabled = true;
			this->lstInicianConA->ItemHeight = 20;
			this->lstInicianConA->Location = System::Drawing::Point(6, 25);
			this->lstInicianConA->Name = L"lstInicianConA";
			this->lstInicianConA->Size = System::Drawing::Size(217, 324);
			this->lstInicianConA->TabIndex = 0;
			// 
			// btnEliminar
			// 
			this->btnEliminar->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnEliminar->Location = System::Drawing::Point(141, 112);
			this->btnEliminar->Name = L"btnEliminar";
			this->btnEliminar->Size = System::Drawing::Size(75, 30);
			this->btnEliminar->TabIndex = 19;
			this->btnEliminar->Text = L"Eliminar";
			this->btnEliminar->UseVisualStyleBackColor = true;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(741, 452);
			this->Controls->Add(this->GBMayores25);
			this->Controls->Add(this->lblPersonas);
			this->Controls->Add(this->txtEdad);
			this->Controls->Add(this->txtNombre);
			this->Controls->Add(this->lstPersonas);
			this->Controls->Add(this->lblEdad);
			this->Controls->Add(this->lblNombre);
			this->Controls->Add(this->btnCrear);
			this->Controls->Add(this->GBInicianConA);
			this->Controls->Add(this->btnEliminar);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->GBMayores25->ResumeLayout(false);
			this->GBInicianConA->ResumeLayout(false);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void lblNombre_Click(System::Object^  sender, System::EventArgs^  e) {
	}
};
}
