#pragma once

namespace POOAlimentos {
    #include "ArrAlimentos.h"; //Un arreglo de Objetos Alimento
	#include "Alimento.h"; //UN SOLO OBJETO Alimento
	#include <stdio.h>;
	#include <string.h>;
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
			objeto_ArrAlimento=new ArrAlimentos();
		}
	protected:
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
			delete objeto_ArrAlimento;
		}
	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>

		ArrAlimentos *objeto_ArrAlimento;

		Alimento *objeto_Alimento;
	private: System::Windows::Forms::Button^  btnCrear;



	private: System::Windows::Forms::Label^  lblNombre;
	private: System::Windows::Forms::Label^  lblEdad;




	private: System::Windows::Forms::TextBox^  txtNombre;
	private: System::Windows::Forms::TextBox^  txtCalorias;


	private: System::Windows::Forms::GroupBox^  GBAlimentos;
	private: System::Windows::Forms::GroupBox^  GBAlimentosXTipo;









	private: System::Windows::Forms::Button^  btnFitrarXTipo;



	private: System::Windows::Forms::ListBox^  lstAlimentoXTipo;



	private: System::Windows::Forms::Button^  btnEliminar;
	private: System::Windows::Forms::ListBox^  lstAlimentos;

	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::ComboBox^  cmbTipo;


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
			this->txtNombre = (gcnew System::Windows::Forms::TextBox());
			this->txtCalorias = (gcnew System::Windows::Forms::TextBox());
			this->GBAlimentos = (gcnew System::Windows::Forms::GroupBox());
			this->lstAlimentos = (gcnew System::Windows::Forms::ListBox());
			this->GBAlimentosXTipo = (gcnew System::Windows::Forms::GroupBox());
			this->btnFitrarXTipo = (gcnew System::Windows::Forms::Button());
			this->lstAlimentoXTipo = (gcnew System::Windows::Forms::ListBox());
			this->btnEliminar = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->cmbTipo = (gcnew System::Windows::Forms::ComboBox());
			this->GBAlimentos->SuspendLayout();
			this->GBAlimentosXTipo->SuspendLayout();
			this->SuspendLayout();
			// 
			// btnCrear
			// 
			this->btnCrear->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btnCrear->Location = System::Drawing::Point(78, 172);
			this->btnCrear->Name = L"btnCrear";
			this->btnCrear->Size = System::Drawing::Size(75, 30);
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
			this->lblNombre->Size = System::Drawing::Size(77, 20);
			this->lblNombre->TabIndex = 1;
			this->lblNombre->Text = L"Nombre : ";
			// 
			// lblEdad
			// 
			this->lblEdad->AutoSize = true;
			this->lblEdad->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->lblEdad->Location = System::Drawing::Point(4, 55);
			this->lblEdad->Name = L"lblEdad";
			this->lblEdad->Size = System::Drawing::Size(78, 20);
			this->lblEdad->TabIndex = 2;
			this->lblEdad->Text = L"Calorias : ";
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
			// txtCalorias
			// 
			this->txtCalorias->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->txtCalorias->Location = System::Drawing::Point(78, 52);
			this->txtCalorias->MaxLength = 5;
			this->txtCalorias->Name = L"txtCalorias";
			this->txtCalorias->Size = System::Drawing::Size(56, 26);
			this->txtCalorias->TabIndex = 5;
			// 
			// GBAlimentos
			// 
			this->GBAlimentos->Controls->Add(this->lstAlimentos);
			this->GBAlimentos->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->GBAlimentos->Location = System::Drawing::Point(232, 13);
			this->GBAlimentos->Name = L"GBAlimentos";
			this->GBAlimentos->Size = System::Drawing::Size(338, 400);
			this->GBAlimentos->TabIndex = 7;
			this->GBAlimentos->TabStop = false;
			this->GBAlimentos->Text = L"Todos los Alimentos";
			// 
			// lstAlimentos
			// 
			this->lstAlimentos->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->lstAlimentos->FormattingEnabled = true;
			this->lstAlimentos->ItemHeight = 18;
			this->lstAlimentos->Location = System::Drawing::Point(9, 25);
			this->lstAlimentos->Name = L"lstAlimentos";
			this->lstAlimentos->Size = System::Drawing::Size(323, 364);
			this->lstAlimentos->TabIndex = 3;
			this->lstAlimentos->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::lstAlimentos_SelectedIndexChanged);
			// 
			// GBAlimentosXTipo
			// 
			this->GBAlimentosXTipo->Controls->Add(this->btnFitrarXTipo);
			this->GBAlimentosXTipo->Controls->Add(this->lstAlimentoXTipo);
			this->GBAlimentosXTipo->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->GBAlimentosXTipo->Location = System::Drawing::Point(576, 13);
			this->GBAlimentosXTipo->Name = L"GBAlimentosXTipo";
			this->GBAlimentosXTipo->Size = System::Drawing::Size(364, 400);
			this->GBAlimentosXTipo->TabIndex = 8;
			this->GBAlimentosXTipo->TabStop = false;
			this->GBAlimentosXTipo->Text = L"Alimento X Tipo";
			// 
			// btnFitrarXTipo
			// 
			this->btnFitrarXTipo->Location = System::Drawing::Point(9, 357);
			this->btnFitrarXTipo->Name = L"btnFitrarXTipo";
			this->btnFitrarXTipo->Size = System::Drawing::Size(349, 37);
			this->btnFitrarXTipo->TabIndex = 1;
			this->btnFitrarXTipo->Text = L"Filtrar";
			this->btnFitrarXTipo->UseVisualStyleBackColor = true;
			this->btnFitrarXTipo->Click += gcnew System::EventHandler(this, &MyForm::btnFitrarXTipo_Click);
			// 
			// lstAlimentoXTipo
			// 
			this->lstAlimentoXTipo->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->lstAlimentoXTipo->FormattingEnabled = true;
			this->lstAlimentoXTipo->ItemHeight = 18;
			this->lstAlimentoXTipo->Location = System::Drawing::Point(6, 25);
			this->lstAlimentoXTipo->Name = L"lstAlimentoXTipo";
			this->lstAlimentoXTipo->Size = System::Drawing::Size(352, 256);
			this->lstAlimentoXTipo->TabIndex = 0;
			// 
			// btnEliminar
			// 
			this->btnEliminar->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btnEliminar->Location = System::Drawing::Point(78, 218);
			this->btnEliminar->Name = L"btnEliminar";
			this->btnEliminar->Size = System::Drawing::Size(75, 30);
			this->btnEliminar->TabIndex = 9;
			this->btnEliminar->Text = L"Eliminar";
			this->btnEliminar->UseVisualStyleBackColor = true;
			this->btnEliminar->Click += gcnew System::EventHandler(this, &MyForm::btnEliminar_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(8, 95);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(47, 20);
			this->label1->TabIndex = 10;
			this->label1->Text = L"Tipo :";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(133, 56);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(32, 20);
			this->label2->TabIndex = 12;
			this->label2->Text = L"Cal";
			// 
			// cmbTipo
			// 
			this->cmbTipo->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->cmbTipo->FormattingEnabled = true;
			this->cmbTipo->Items->AddRange(gcnew cli::array< System::Object^  >(3) {L"Fruta", L"Vegetal", L"Carne"});
			this->cmbTipo->Location = System::Drawing::Point(78, 93);
			this->cmbTipo->Name = L"cmbTipo";
			this->cmbTipo->Size = System::Drawing::Size(131, 24);
			this->cmbTipo->TabIndex = 13;
			this->cmbTipo->Text = L"Tipo de Alimento";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(975, 424);
			this->Controls->Add(this->cmbTipo);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->btnEliminar);
			this->Controls->Add(this->GBAlimentosXTipo);
			this->Controls->Add(this->GBAlimentos);
			this->Controls->Add(this->txtCalorias);
			this->Controls->Add(this->txtNombre);
			this->Controls->Add(this->lblEdad);
			this->Controls->Add(this->lblNombre);
			this->Controls->Add(this->btnCrear);
			this->Name = L"MyForm";
			this->Text = L"\"Alimentarse bien\"";
			this->GBAlimentos->ResumeLayout(false);
			this->GBAlimentosXTipo->ResumeLayout(false);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	void Insertar_Datos_Alimento_en_ListBox()
	{	lstAlimentos->Items->Clear();
		if (objeto_ArrAlimento->Retornar_N()>0)
		{	for (int i=0;i<objeto_ArrAlimento->Retornar_N();i++)
			{	objeto_Alimento=		objeto_ArrAlimento->Retorna_dato_en_arreglo(i);
				//Convertimos de char* a String^
			    System::String ^alimento="Nombre : " +gcnew System::String(objeto_Alimento->Retornar_Nombre()) +
					      " Calorias : " + objeto_Alimento->Retornar_Calorias().ToString() +
						  " Tipo : "+ gcnew System::String(objeto_Alimento->Retornar_Tipo());
				lstAlimentos->Items->Add(alimento);
			}
		}
	}
	private: System::Void btnCrear_Click(System::Object^  sender, System::EventArgs^  e) {
				 if (txtNombre->Text->Length>0 && txtCalorias->Text->Length>0)
				 {   objeto_Alimento= new Alimento();
					 int miscalorias=Convert::ToInt32(txtCalorias->Text);				 
					 objeto_Alimento->Cambiar_Calorias(miscalorias);
					 
					 char*minombre; 					 
					 minombre=new char[100];
					 sprintf(minombre,"%s",txtNombre->Text);//Convierte de String^ a char*
					 objeto_Alimento->Cambiar_Nombre(minombre);
					 
					 char*mitipo; 					 
					 mitipo=new char[100];
					 sprintf(mitipo,"%s",cmbTipo->Text);//Convierte de String^ a char*
					 objeto_Alimento->Cambiar_Tipo(mitipo);
					 					 
					 objeto_ArrAlimento->Agregar(objeto_Alimento);
					 txtNombre->Clear();
					 txtCalorias->Clear();
					 cmbTipo->SelectedIndex=-1;
				 }
				 else
					 objeto_Alimento= NULL;

				 Insertar_Datos_Alimento_en_ListBox();
			 }
private: System::Void btnEliminar_Click(System::Object^  sender, System::EventArgs^  e) {

			 if (lstAlimentos->SelectedIndex!=-1)
			 {    
				  objeto_ArrAlimento->Eliminar(lstAlimentos->SelectedIndex);
				  lstAlimentos->SelectedIndex=-1;
				  Insertar_Datos_Alimento_en_ListBox();
				  txtNombre->Clear();
				  txtCalorias->Clear();
				  cmbTipo->SelectedIndex=-1;
			 }
		 }
private: System::Void lstAlimentos_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
			 
			 if (lstAlimentos->SelectedIndex!=-1)
			 {
				 objeto_Alimento=objeto_ArrAlimento->Retorna_dato_en_arreglo(lstAlimentos->SelectedIndex);
				 txtNombre->Text= gcnew System::String(objeto_Alimento->Retornar_Nombre());
				 txtCalorias->Text= objeto_Alimento->Retornar_Calorias().ToString();
				 cmbTipo->Text=gcnew System::String(objeto_Alimento->Retornar_Tipo());

			 }

		 }
private: System::Void btnFitrarXTipo_Click(System::Object^  sender, System::EventArgs^  e) {
			 int *cantidad;
			 cantidad=new int;
	        *cantidad=0;

			char*mitipo; 					 
			mitipo=new char[100];
			sprintf(mitipo,"%s",cmbTipo->Text);//Convierte de St	ring^ a char*

			 Alimento** arr_AlimentosXTipo = objeto_ArrAlimento->Lista_X_Tipo(mitipo, cantidad);
			 lstAlimentoXTipo->Items->Clear();
			 if (arr_AlimentosXTipo !=NULL)
			 {
				 for (int i=0;i<*cantidad;i++)
				 {
					 System::String ^Alimento= "Nombre: " +gcnew System::String(arr_AlimentosXTipo[i]->Retornar_Nombre())+
						 " Calorias : " + objeto_Alimento->Retornar_Calorias().ToString();
					 lstAlimentoXTipo->Items->Add(Alimento);
				 }
			 }
		GBAlimentosXTipo->Text = "Alimentos Tipo: " + cmbTipo->Text;	

}

};
}
