#pragma once

namespace POO1 {
    #include "ArrPersonas.h"; //Un arreglo de Objetos Persona
	#include "Persona.h"; //UN SOLO OBJETO PERSONA
	#include <stdio.h>;
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
			objeto_ArrPersona=new ArrPersonas();
		}
	protected:
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
			delete objeto_ArrPersona;
		}
	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>

		ArrPersonas *objeto_ArrPersona;

		Persona *objeto_Persona;
	private: System::Windows::Forms::Button^  btnCrear;



	private: System::Windows::Forms::Label^  lblNombre;
	private: System::Windows::Forms::Label^  lblEdad;
	private: System::Windows::Forms::ListBox^  lstPersonas;



	private: System::Windows::Forms::TextBox^  txtNombre;
	private: System::Windows::Forms::TextBox^  txtEdad;
	private: System::Windows::Forms::Label^  lblPersonas;
	private: System::Windows::Forms::GroupBox^  GBMayores25;




	private: System::Windows::Forms::Button^  btnFiltrarMayores25;

	private: System::Windows::Forms::ListBox^  lstMayores25;
	private: System::Windows::Forms::GroupBox^  GBInicianConA;


	private: System::Windows::Forms::Button^  btnFitrarInicianConA;

	private: System::Windows::Forms::ListBox^  lstInicianConA;

	private: System::Windows::Forms::Button^  btnEliminar;


		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->btnCrear = (gcnew System::Windows::Forms::Button());
			this->lblNombre = (gcnew System::Windows::Forms::Label());
			this->lblEdad = (gcnew System::Windows::Forms::Label());
			this->lstPersonas = (gcnew System::Windows::Forms::ListBox());
			this->txtNombre = (gcnew System::Windows::Forms::TextBox());
			this->txtEdad = (gcnew System::Windows::Forms::TextBox());
			this->lblPersonas = (gcnew System::Windows::Forms::Label());
			this->GBMayores25 = (gcnew System::Windows::Forms::GroupBox());
			this->btnFiltrarMayores25 = (gcnew System::Windows::Forms::Button());
			this->lstMayores25 = (gcnew System::Windows::Forms::ListBox());
			this->GBInicianConA = (gcnew System::Windows::Forms::GroupBox());
			this->btnFitrarInicianConA = (gcnew System::Windows::Forms::Button());
			this->lstInicianConA = (gcnew System::Windows::Forms::ListBox());
			this->btnEliminar = (gcnew System::Windows::Forms::Button());
			this->GBMayores25->SuspendLayout();
			this->GBInicianConA->SuspendLayout();
			this->SuspendLayout();
			// 
			// btnCrear
			// 
			this->btnCrear->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btnCrear->Location = System::Drawing::Point(42, 99);
			this->btnCrear->Name = L"btnCrear";
			this->btnCrear->Size = System::Drawing::Size(61, 30);
			this->btnCrear->TabIndex = 0;
			this->btnCrear->Text = L"Crear";
			this->btnCrear->UseVisualStyleBackColor = true;
			this->btnCrear->Click += gcnew System::EventHandler(this, &MyForm::btnCrear_Click);
			// 
			// lblNombre
			// 
			this->lblNombre->AutoSize = true;
			this->lblNombre->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->lblNombre->Location = System::Drawing::Point(5, 15);
			this->lblNombre->Name = L"lblNombre";
			this->lblNombre->Size = System::Drawing::Size(65, 20);
			this->lblNombre->TabIndex = 1;
			this->lblNombre->Text = L"Nombre";
			// 
			// lblEdad
			// 
			this->lblEdad->AutoSize = true;
			this->lblEdad->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->lblEdad->Location = System::Drawing::Point(8, 55);
			this->lblEdad->Name = L"lblEdad";
			this->lblEdad->Size = System::Drawing::Size(47, 20);
			this->lblEdad->TabIndex = 2;
			this->lblEdad->Text = L"Edad";
			// 
			// lstPersonas
			// 
			this->lstPersonas->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->lstPersonas->FormattingEnabled = true;
			this->lstPersonas->ItemHeight = 20;
			this->lstPersonas->Location = System::Drawing::Point(12, 169);
			this->lstPersonas->Name = L"lstPersonas";
			this->lstPersonas->Size = System::Drawing::Size(214, 244);
			this->lstPersonas->TabIndex = 3;
			this->lstPersonas->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::lstPersonas_SelectedIndexChanged);
			// 
			// txtNombre
			// 
			this->txtNombre->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->txtNombre->Location = System::Drawing::Point(78, 14);
			this->txtNombre->MaxLength = 99;
			this->txtNombre->Name = L"txtNombre";
			this->txtNombre->Size = System::Drawing::Size(148, 26);
			this->txtNombre->TabIndex = 4;
			// 
			// txtEdad
			// 
			this->txtEdad->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->txtEdad->Location = System::Drawing::Point(78, 55);
			this->txtEdad->MaxLength = 2;
			this->txtEdad->Name = L"txtEdad";
			this->txtEdad->Size = System::Drawing::Size(44, 26);
			this->txtEdad->TabIndex = 5;
			// 
			// lblPersonas
			// 
			this->lblPersonas->AutoSize = true;
			this->lblPersonas->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->lblPersonas->Location = System::Drawing::Point(8, 146);
			this->lblPersonas->Name = L"lblPersonas";
			this->lblPersonas->Size = System::Drawing::Size(152, 20);
			this->lblPersonas->TabIndex = 6;
			this->lblPersonas->Text = L"Todas las Personas:";
			// 
			// GBMayores25
			// 
			this->GBMayores25->Controls->Add(this->btnFiltrarMayores25);
			this->GBMayores25->Controls->Add(this->lstMayores25);
			this->GBMayores25->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->GBMayores25->Location = System::Drawing::Point(232, 13);
			this->GBMayores25->Name = L"GBMayores25";
			this->GBMayores25->Size = System::Drawing::Size(229, 400);
			this->GBMayores25->TabIndex = 7;
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
			this->btnFiltrarMayores25->Click += gcnew System::EventHandler(this, &MyForm::btnFiltrarMayores25_Click);
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
			// GBInicianConA
			// 
			this->GBInicianConA->Controls->Add(this->btnFitrarInicianConA);
			this->GBInicianConA->Controls->Add(this->lstInicianConA);
			this->GBInicianConA->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->GBInicianConA->Location = System::Drawing::Point(467, 13);
			this->GBInicianConA->Name = L"GBInicianConA";
			this->GBInicianConA->Size = System::Drawing::Size(229, 400);
			this->GBInicianConA->TabIndex = 8;
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
			this->btnFitrarInicianConA->Click += gcnew System::EventHandler(this, &MyForm::btnFitrarInicianConA_Click);
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
			this->btnEliminar->Location = System::Drawing::Point(121, 99);
			this->btnEliminar->Name = L"btnEliminar";
			this->btnEliminar->Size = System::Drawing::Size(75, 30);
			this->btnEliminar->TabIndex = 9;
			this->btnEliminar->Text = L"Eliminar";
			this->btnEliminar->UseVisualStyleBackColor = true;
			this->btnEliminar->Click += gcnew System::EventHandler(this, &MyForm::btnEliminar_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(699, 424);
			this->Controls->Add(this->btnEliminar);
			this->Controls->Add(this->GBInicianConA);
			this->Controls->Add(this->GBMayores25);
			this->Controls->Add(this->lblPersonas);
			this->Controls->Add(this->txtEdad);
			this->Controls->Add(this->txtNombre);
			this->Controls->Add(this->lstPersonas);
			this->Controls->Add(this->lblEdad);
			this->Controls->Add(this->lblNombre);
			this->Controls->Add(this->btnCrear);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->GBMayores25->ResumeLayout(false);
			this->GBInicianConA->ResumeLayout(false);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	void Insertar_Datos_Persona_en_ListBox()
	{	lstPersonas->Items->Clear();
		if (objeto_ArrPersona->Retornar_N()>0)
		{	for (int i=0;i<objeto_ArrPersona->Retornar_N();i++)
			{	objeto_Persona=		objeto_ArrPersona->Retorna_dato_en_arreglo(i);
				//Convertimos de char* a String^
			    System::String ^nombre="Nombre : " +gcnew System::String(objeto_Persona->Retornar_Nombre()) +
					      " Edad : " + objeto_Persona->Retornar_Edad().ToString() ;
				lstPersonas->Items->Add(nombre);
			}
		}
	}
	private: System::Void btnCrear_Click(System::Object^  sender, System::EventArgs^  e) {
				 if (txtNombre->Text->Length>0 && txtEdad->Text->Length>0)
				 {   objeto_Persona= new Persona();
					 int miedad=Convert::ToInt32(txtEdad->Text);				 
					 objeto_Persona->Cambiar_Edad(miedad);
					 
					 char*minombre; 					 
					 minombre=new char[100];
					 
					 sprintf(minombre,"%s",txtNombre->Text);//Convierte de St	ring^ a char*
					 objeto_Persona->Cambiar_Nombre(minombre);
					 objeto_ArrPersona->Agregar(objeto_Persona);
					 txtNombre->Clear();
					 txtEdad->Clear();
				 }
				 else
					 objeto_Persona= NULL;

				 Insertar_Datos_Persona_en_ListBox();
			 }
private: System::Void btnEliminar_Click(System::Object^  sender, System::EventArgs^  e) {

			 if (lstPersonas->SelectedIndex!=-1)
			 {    
				  objeto_ArrPersona->Eliminar(lstPersonas->SelectedIndex);
				  lstPersonas->SelectedIndex=-1;
				  Insertar_Datos_Persona_en_ListBox();
				  txtNombre->Clear();
				  txtEdad->Clear();
				 
			 }
		 }
private: System::Void lstPersonas_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
			 
			 if (lstPersonas->SelectedIndex!=-1)
			 {
				 objeto_Persona=objeto_ArrPersona->Retorna_dato_en_arreglo(lstPersonas->SelectedIndex);
				 txtNombre->Text= gcnew System::String(objeto_Persona->Retornar_Nombre());
				 txtEdad->Text= objeto_Persona->Retornar_Edad().ToString();

			 }

		 }
private: System::Void btnFiltrarMayores25_Click(System::Object^  sender, System::EventArgs^  e) {

			 int *cantidad;
			 cantidad=new int;
	        *cantidad=0;
			 Persona** arr_masde25 = objeto_ArrPersona->Mayores25anios(cantidad);
			 lstMayores25->Items->Clear();
			 if (arr_masde25 !=NULL)
			 {
				 for (int i=0;i<*cantidad;i++)
				 {
					 System::String ^persona= "Nombre: " +gcnew System::String(arr_masde25[i]->Retornar_Nombre());
					 lstMayores25->Items->Add(persona);
				 }
			 }


		 }
private: System::Void btnFitrarInicianConA_Click(System::Object^  sender, System::EventArgs^  e) {
			 int *cantidad;
			 cantidad=new int;
	        *cantidad=0;
			 Persona** arr_comienzanConA = objeto_ArrPersona->ConLetraAenelNombre(cantidad);
			 lstInicianConA->Items->Clear();
			 if (arr_comienzanConA !=NULL)
			 {
				 for (int i=0;i<*cantidad;i++)
				 {
					 System::String ^nombre= "Nombre: " +gcnew System::String(arr_comienzanConA[i]->Retornar_Nombre());
					 lstInicianConA->Items->Add(nombre);
				 }
			 }

		 }

};
}
