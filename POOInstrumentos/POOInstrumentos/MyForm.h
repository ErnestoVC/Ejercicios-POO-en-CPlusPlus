#pragma once
namespace POOInstrumentos {
	#include "Instrumento.h";
	#include "ArrInstrumentos.h";
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
			bandera = true;
			InitializeComponent();
			objeto_ArrInstrumento=new ArrInstrumentos();
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
			delete objeto_ArrInstrumento;
		}
	
	private: 
		ArrInstrumentos *objeto_ArrInstrumento;
		Instrumento *objeto_Instrumento;
		bool bandera;
			

	private: System::Windows::Forms::Label^  lblTitulo;
	private: System::Windows::Forms::Label^  lblNombre;
	private: System::Windows::Forms::GroupBox^  GBRegistrar;
	protected: 

	protected: 


	private: System::Windows::Forms::Label^  lblCosto;
	private: System::Windows::Forms::Label^  lblTipo;
	private: System::Windows::Forms::TextBox^  txtCosto;



	private: System::Windows::Forms::TextBox^  txtNombre;
	private: System::Windows::Forms::RadioButton^  RBCuerda;


	private: System::Windows::Forms::RadioButton^  RBPercusion;

	private: System::Windows::Forms::RadioButton^  RBViento;
	private: System::Windows::Forms::GroupBox^  GBInstrumentos;


	private: System::Windows::Forms::ListBox^  lstInstrumentos;

	private: System::Windows::Forms::Button^  btnListar;
	private: System::Windows::Forms::GroupBox^  GBViento;


	private: System::Windows::Forms::Button^  btnFiltrarViento;
	private: System::Windows::Forms::GroupBox^  GBPercusion;


	private: System::Windows::Forms::Button^  btnFitrarPercusion;
	private: System::Windows::Forms::GroupBox^  GBCuerda;


	private: System::Windows::Forms::Button^  btnFiltrarCuerda;

	private: System::Windows::Forms::Button^  btnRegistrar;
	private: System::Windows::Forms::Button^  btnEliminar;
	private: System::Windows::Forms::ListBox^  lstInstrumentosViento;
	private: System::Windows::Forms::ListBox^  lstInstrumentosPercusion;
	private: System::Windows::Forms::ListBox^  lstInstrumentosCuerda;






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
			this->lblTitulo = (gcnew System::Windows::Forms::Label());
			this->lblNombre = (gcnew System::Windows::Forms::Label());
			this->GBRegistrar = (gcnew System::Windows::Forms::GroupBox());
			this->btnRegistrar = (gcnew System::Windows::Forms::Button());
			this->txtCosto = (gcnew System::Windows::Forms::TextBox());
			this->txtNombre = (gcnew System::Windows::Forms::TextBox());
			this->RBCuerda = (gcnew System::Windows::Forms::RadioButton());
			this->RBPercusion = (gcnew System::Windows::Forms::RadioButton());
			this->RBViento = (gcnew System::Windows::Forms::RadioButton());
			this->lblCosto = (gcnew System::Windows::Forms::Label());
			this->lblTipo = (gcnew System::Windows::Forms::Label());
			this->GBInstrumentos = (gcnew System::Windows::Forms::GroupBox());
			this->btnEliminar = (gcnew System::Windows::Forms::Button());
			this->lstInstrumentos = (gcnew System::Windows::Forms::ListBox());
			this->btnListar = (gcnew System::Windows::Forms::Button());
			this->GBViento = (gcnew System::Windows::Forms::GroupBox());
			this->lstInstrumentosViento = (gcnew System::Windows::Forms::ListBox());
			this->btnFiltrarViento = (gcnew System::Windows::Forms::Button());
			this->GBPercusion = (gcnew System::Windows::Forms::GroupBox());
			this->lstInstrumentosPercusion = (gcnew System::Windows::Forms::ListBox());
			this->btnFitrarPercusion = (gcnew System::Windows::Forms::Button());
			this->GBCuerda = (gcnew System::Windows::Forms::GroupBox());
			this->lstInstrumentosCuerda = (gcnew System::Windows::Forms::ListBox());
			this->btnFiltrarCuerda = (gcnew System::Windows::Forms::Button());
			this->GBRegistrar->SuspendLayout();
			this->GBInstrumentos->SuspendLayout();
			this->GBViento->SuspendLayout();
			this->GBPercusion->SuspendLayout();
			this->GBCuerda->SuspendLayout();
			this->SuspendLayout();
			// 
			// lblTitulo
			// 
			this->lblTitulo->AutoSize = true;
			this->lblTitulo->Font = (gcnew System::Drawing::Font(L"Futura Hv", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->lblTitulo->Location = System::Drawing::Point(202, 9);
			this->lblTitulo->Name = L"lblTitulo";
			this->lblTitulo->Size = System::Drawing::Size(254, 31);
			this->lblTitulo->TabIndex = 0;
			this->lblTitulo->Text = L"Instrumentos Musicales";
			// 
			// lblNombre
			// 
			this->lblNombre->AutoSize = true;
			this->lblNombre->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->lblNombre->Location = System::Drawing::Point(4, 23);
			this->lblNombre->Name = L"lblNombre";
			this->lblNombre->Size = System::Drawing::Size(72, 18);
			this->lblNombre->TabIndex = 1;
			this->lblNombre->Text = L"Nombre: ";
			// 
			// GBRegistrar
			// 
			this->GBRegistrar->Controls->Add(this->btnRegistrar);
			this->GBRegistrar->Controls->Add(this->txtCosto);
			this->GBRegistrar->Controls->Add(this->txtNombre);
			this->GBRegistrar->Controls->Add(this->RBCuerda);
			this->GBRegistrar->Controls->Add(this->RBPercusion);
			this->GBRegistrar->Controls->Add(this->RBViento);
			this->GBRegistrar->Controls->Add(this->lblCosto);
			this->GBRegistrar->Controls->Add(this->lblTipo);
			this->GBRegistrar->Controls->Add(this->lblNombre);
			this->GBRegistrar->Location = System::Drawing::Point(24, 54);
			this->GBRegistrar->Name = L"GBRegistrar";
			this->GBRegistrar->Size = System::Drawing::Size(288, 178);
			this->GBRegistrar->TabIndex = 2;
			this->GBRegistrar->TabStop = false;
			// 
			// btnRegistrar
			// 
			this->btnRegistrar->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btnRegistrar->Location = System::Drawing::Point(104, 149);
			this->btnRegistrar->Name = L"btnRegistrar";
			this->btnRegistrar->Size = System::Drawing::Size(75, 23);
			this->btnRegistrar->TabIndex = 2;
			this->btnRegistrar->Text = L"Registrar";
			this->btnRegistrar->UseVisualStyleBackColor = true;
			this->btnRegistrar->Click += gcnew System::EventHandler(this, &MyForm::btnRegistrar_Click);
			// 
			// txtCosto
			// 
			this->txtCosto->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->txtCosto->Location = System::Drawing::Point(82, 48);
			this->txtCosto->Name = L"txtCosto";
			this->txtCosto->Size = System::Drawing::Size(84, 26);
			this->txtCosto->TabIndex = 8;
			this->txtCosto->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::txtCosto_KeyPress);
			// 
			// txtNombre
			// 
			this->txtNombre->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->txtNombre->Location = System::Drawing::Point(82, 19);
			this->txtNombre->Name = L"txtNombre";
			this->txtNombre->Size = System::Drawing::Size(129, 26);
			this->txtNombre->TabIndex = 7;
			this->txtNombre->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::txtNombre_KeyPress);
			// 
			// RBCuerda
			// 
			this->RBCuerda->AutoSize = true;
			this->RBCuerda->Location = System::Drawing::Point(82, 129);
			this->RBCuerda->Name = L"RBCuerda";
			this->RBCuerda->Size = System::Drawing::Size(59, 17);
			this->RBCuerda->TabIndex = 6;
			this->RBCuerda->Text = L"Cuerda";
			this->RBCuerda->UseVisualStyleBackColor = true;
			// 
			// RBPercusion
			// 
			this->RBPercusion->AutoSize = true;
			this->RBPercusion->Location = System::Drawing::Point(82, 106);
			this->RBPercusion->Name = L"RBPercusion";
			this->RBPercusion->Size = System::Drawing::Size(72, 17);
			this->RBPercusion->TabIndex = 5;
			this->RBPercusion->Text = L"Percusión";
			this->RBPercusion->UseVisualStyleBackColor = true;
			// 
			// RBViento
			// 
			this->RBViento->AutoSize = true;
			this->RBViento->Location = System::Drawing::Point(82, 83);
			this->RBViento->Name = L"RBViento";
			this->RBViento->Size = System::Drawing::Size(55, 17);
			this->RBViento->TabIndex = 4;
			this->RBViento->Text = L"Viento";
			this->RBViento->UseVisualStyleBackColor = true;
			// 
			// lblCosto
			// 
			this->lblCosto->AutoSize = true;
			this->lblCosto->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->lblCosto->Location = System::Drawing::Point(4, 52);
			this->lblCosto->Name = L"lblCosto";
			this->lblCosto->Size = System::Drawing::Size(54, 18);
			this->lblCosto->TabIndex = 3;
			this->lblCosto->Text = L"Costo:";
			// 
			// lblTipo
			// 
			this->lblTipo->AutoSize = true;
			this->lblTipo->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->lblTipo->Location = System::Drawing::Point(5, 81);
			this->lblTipo->Name = L"lblTipo";
			this->lblTipo->Size = System::Drawing::Size(42, 18);
			this->lblTipo->TabIndex = 2;
			this->lblTipo->Text = L"Tipo:";
			// 
			// GBInstrumentos
			// 
			this->GBInstrumentos->Controls->Add(this->btnEliminar);
			this->GBInstrumentos->Controls->Add(this->lstInstrumentos);
			this->GBInstrumentos->Controls->Add(this->btnListar);
			this->GBInstrumentos->Location = System::Drawing::Point(24, 238);
			this->GBInstrumentos->Name = L"GBInstrumentos";
			this->GBInstrumentos->Size = System::Drawing::Size(288, 326);
			this->GBInstrumentos->TabIndex = 3;
			this->GBInstrumentos->TabStop = false;
			this->GBInstrumentos->Text = L"Instrumentos";
			// 
			// btnEliminar
			// 
			this->btnEliminar->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btnEliminar->Location = System::Drawing::Point(104, 19);
			this->btnEliminar->Name = L"btnEliminar";
			this->btnEliminar->Size = System::Drawing::Size(75, 23);
			this->btnEliminar->TabIndex = 2;
			this->btnEliminar->Text = L"Eliminar";
			this->btnEliminar->UseVisualStyleBackColor = true;
			this->btnEliminar->Click += gcnew System::EventHandler(this, &MyForm::btnEliminar_Click);
			// 
			// lstInstrumentos
			// 
			this->lstInstrumentos->FormattingEnabled = true;
			this->lstInstrumentos->Location = System::Drawing::Point(18, 48);
			this->lstInstrumentos->Name = L"lstInstrumentos";
			this->lstInstrumentos->Size = System::Drawing::Size(255, 264);
			this->lstInstrumentos->TabIndex = 1;
			this->lstInstrumentos->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::lstInstrumentos_SelectedIndexChanged);
			// 
			// btnListar
			// 
			this->btnListar->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btnListar->Location = System::Drawing::Point(8, 19);
			this->btnListar->Name = L"btnListar";
			this->btnListar->Size = System::Drawing::Size(75, 23);
			this->btnListar->TabIndex = 0;
			this->btnListar->Text = L"Listar";
			this->btnListar->UseVisualStyleBackColor = true;
			this->btnListar->Click += gcnew System::EventHandler(this, &MyForm::btnListar_Click);
			// 
			// GBViento
			// 
			this->GBViento->Controls->Add(this->lstInstrumentosViento);
			this->GBViento->Controls->Add(this->btnFiltrarViento);
			this->GBViento->Location = System::Drawing::Point(349, 54);
			this->GBViento->Name = L"GBViento";
			this->GBViento->Size = System::Drawing::Size(288, 158);
			this->GBViento->TabIndex = 4;
			this->GBViento->TabStop = false;
			this->GBViento->Text = L"Viento";
			// 
			// lstInstrumentosViento
			// 
			this->lstInstrumentosViento->FormattingEnabled = true;
			this->lstInstrumentosViento->Location = System::Drawing::Point(15, 47);
			this->lstInstrumentosViento->Name = L"lstInstrumentosViento";
			this->lstInstrumentosViento->Size = System::Drawing::Size(255, 95);
			this->lstInstrumentosViento->TabIndex = 2;
			// 
			// btnFiltrarViento
			// 
			this->btnFiltrarViento->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btnFiltrarViento->Location = System::Drawing::Point(6, 18);
			this->btnFiltrarViento->Name = L"btnFiltrarViento";
			this->btnFiltrarViento->Size = System::Drawing::Size(75, 23);
			this->btnFiltrarViento->TabIndex = 2;
			this->btnFiltrarViento->Text = L"Filtrar";
			this->btnFiltrarViento->UseVisualStyleBackColor = true;
			this->btnFiltrarViento->Click += gcnew System::EventHandler(this, &MyForm::btnFiltrarViento_Click);
			// 
			// GBPercusion
			// 
			this->GBPercusion->Controls->Add(this->lstInstrumentosPercusion);
			this->GBPercusion->Controls->Add(this->btnFitrarPercusion);
			this->GBPercusion->Location = System::Drawing::Point(349, 228);
			this->GBPercusion->Name = L"GBPercusion";
			this->GBPercusion->Size = System::Drawing::Size(288, 158);
			this->GBPercusion->TabIndex = 5;
			this->GBPercusion->TabStop = false;
			this->GBPercusion->Text = L"Percusión";
			// 
			// lstInstrumentosPercusion
			// 
			this->lstInstrumentosPercusion->FormattingEnabled = true;
			this->lstInstrumentosPercusion->Location = System::Drawing::Point(15, 48);
			this->lstInstrumentosPercusion->Name = L"lstInstrumentosPercusion";
			this->lstInstrumentosPercusion->Size = System::Drawing::Size(255, 95);
			this->lstInstrumentosPercusion->TabIndex = 3;
			// 
			// btnFitrarPercusion
			// 
			this->btnFitrarPercusion->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btnFitrarPercusion->Location = System::Drawing::Point(6, 19);
			this->btnFitrarPercusion->Name = L"btnFitrarPercusion";
			this->btnFitrarPercusion->Size = System::Drawing::Size(75, 23);
			this->btnFitrarPercusion->TabIndex = 3;
			this->btnFitrarPercusion->Text = L"Filtrar";
			this->btnFitrarPercusion->UseVisualStyleBackColor = true;
			this->btnFitrarPercusion->Click += gcnew System::EventHandler(this, &MyForm::btnFitrarPercusion_Click);
			// 
			// GBCuerda
			// 
			this->GBCuerda->Controls->Add(this->lstInstrumentosCuerda);
			this->GBCuerda->Controls->Add(this->btnFiltrarCuerda);
			this->GBCuerda->Location = System::Drawing::Point(349, 406);
			this->GBCuerda->Name = L"GBCuerda";
			this->GBCuerda->Size = System::Drawing::Size(288, 158);
			this->GBCuerda->TabIndex = 6;
			this->GBCuerda->TabStop = false;
			this->GBCuerda->Text = L"Cuerda";
			// 
			// lstInstrumentosCuerda
			// 
			this->lstInstrumentosCuerda->FormattingEnabled = true;
			this->lstInstrumentosCuerda->Location = System::Drawing::Point(15, 48);
			this->lstInstrumentosCuerda->Name = L"lstInstrumentosCuerda";
			this->lstInstrumentosCuerda->Size = System::Drawing::Size(255, 95);
			this->lstInstrumentosCuerda->TabIndex = 4;
			// 
			// btnFiltrarCuerda
			// 
			this->btnFiltrarCuerda->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btnFiltrarCuerda->Location = System::Drawing::Point(6, 19);
			this->btnFiltrarCuerda->Name = L"btnFiltrarCuerda";
			this->btnFiltrarCuerda->Size = System::Drawing::Size(75, 23);
			this->btnFiltrarCuerda->TabIndex = 4;
			this->btnFiltrarCuerda->Text = L"Filtrar";
			this->btnFiltrarCuerda->UseVisualStyleBackColor = true;
			this->btnFiltrarCuerda->Click += gcnew System::EventHandler(this, &MyForm::btnFiltrarCuerda_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(669, 579);
			this->Controls->Add(this->GBCuerda);
			this->Controls->Add(this->GBPercusion);
			this->Controls->Add(this->GBViento);
			this->Controls->Add(this->GBInstrumentos);
			this->Controls->Add(this->GBRegistrar);
			this->Controls->Add(this->lblTitulo);
			this->Name = L"MyForm";
			this->Text = L"\"La música es el idioma Universal\"";
			this->GBRegistrar->ResumeLayout(false);
			this->GBRegistrar->PerformLayout();
			this->GBInstrumentos->ResumeLayout(false);
			this->GBViento->ResumeLayout(false);
			this->GBPercusion->ResumeLayout(false);
			this->GBCuerda->ResumeLayout(false);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

void Insertar_Datos_Instrumento_en_ListBox(){	
	lstInstrumentos->Items->Clear();
	if (objeto_ArrInstrumento->Retornar_N()>0){	
		for (int i=0;i<objeto_ArrInstrumento->Retornar_N();i++){	
			objeto_Instrumento = objeto_ArrInstrumento->Retorna_dato_en_arreglo(i);
			//Convertimos de char* a String^
		    System::String ^texto="Nombre : " + gcnew System::String(objeto_Instrumento->Retornar_Nombre()) 
				+" Costo : " + objeto_Instrumento->Retornar_Costo().ToString() 
				+" Tipo : " + gcnew System::String(objeto_Instrumento->Retornar_Tipo());
			lstInstrumentos->Items->Add(texto);
		}
	}
}


char* TipoEscogido(){
	char*tipoEscogido;
	tipoEscogido=new char[100];
	
	if(RBViento->Checked!=false){
		sprintf(tipoEscogido,"%s",RBViento->Text);
	}
	if(RBPercusion->Checked!=false){
		sprintf(tipoEscogido,"%s",RBPercusion->Text);
	}
	if(RBCuerda->Checked!=false){
		sprintf(tipoEscogido,"%s",RBCuerda->Text);
	}

	return tipoEscogido;
}

bool Seleccionar_RadioButton(){
	if(RBViento->Checked==true||
	   RBPercusion->Checked==true||
	   RBCuerda->Checked==true)
		return true;
	else
		return false;
}

bool Dato_Existe(){
	char*nombre;
	nombre=new char[100];
	
	sprintf(nombre,"%s",txtNombre->Text);
	for(int i=0;i<objeto_ArrInstrumento->Retornar_N();i++){
		objeto_Instrumento=objeto_ArrInstrumento->Retorna_dato_en_arreglo(i);
		if(strcmp(objeto_Instrumento->Retornar_Nombre(),nombre)==0)
			return true;
	}
	return false;
}

private: System::Void btnRegistrar_Click(System::Object^  sender, System::EventArgs^  e) {
	if (txtNombre->Text->Length>0 && 
		txtCosto->Text->Length>0 &&
		Dato_Existe() == false &&
		Seleccionar_RadioButton() == true){

		objeto_Instrumento = new Instrumento();
		//Atributo Nombre
		char *minombre;
		minombre=new char[100];
		sprintf(minombre,"%s",txtNombre->Text);//Convierte de String^ a char*
		objeto_Instrumento->Cambiar_Nombre(minombre);

		//Atributo Costo
		float micosto=Convert::ToSingle(txtCosto->Text); 
		objeto_Instrumento->Cambiar_Costo(micosto);
		
		//Atributo Tipo
		objeto_Instrumento->Cambiar_Tipo(TipoEscogido());
		
		objeto_ArrInstrumento->Agregar(objeto_Instrumento);
		
		txtNombre->Clear();
		txtCosto->Clear();
		
		RBPercusion->Checked=false;
		RBViento->Checked=false;
		RBCuerda->Checked=false;
	}
	
	else
		 objeto_Instrumento= NULL;
	
}

private: System::Void btnListar_Click(System::Object^  sender, System::EventArgs^  e) {
			 Insertar_Datos_Instrumento_en_ListBox();
		 }
private: System::Void btnFiltrarViento_Click(System::Object^  sender, System::EventArgs^  e) {
	int *cantidad;
	cantidad=new int;
	*cantidad=0;
	
	Instrumento** arr_Tipo_Viento=objeto_ArrInstrumento->Retorna_Arreglo_Instrumento_Viento(cantidad);
	lstInstrumentosViento->Items->Clear();
	if (arr_Tipo_Viento!=NULL){
		for (int i=0;i<*cantidad;i++){
			System::String ^instrumento_viento= "Nombre: "+gcnew System::String(arr_Tipo_Viento[i]->Retornar_Nombre())
				+" Costo: "+arr_Tipo_Viento[i]->Retornar_Costo().ToString();
			lstInstrumentosViento->Items->Add(instrumento_viento);
		}
	}

}
private: System::Void btnFitrarPercusion_Click(System::Object^  sender, System::EventArgs^  e) {
	int *cantidad;
	cantidad=new int;
	*cantidad=0;
	
	Instrumento** arr_Tipo_Percusion=objeto_ArrInstrumento->Retorna_Arreglo_Instrumento_Percusion(cantidad);
	lstInstrumentosPercusion->Items->Clear();
	if (arr_Tipo_Percusion!=NULL){
		for (int i=0;i<*cantidad;i++){
			System::String ^instrumento_percusion= "Nombre: "+gcnew System::String(arr_Tipo_Percusion[i]->Retornar_Nombre())
				+" Costo: "+arr_Tipo_Percusion[i]->Retornar_Costo().ToString();
			lstInstrumentosPercusion->Items->Add(instrumento_percusion);
		}
	}
}
private: System::Void btnFiltrarCuerda_Click(System::Object^  sender, System::EventArgs^  e) {
	int *cantidad;
	cantidad=new int;
	*cantidad=0;
	
	Instrumento** arr_Tipo_Cuerda=objeto_ArrInstrumento->Retorna_Arreglo_Instrumento_Cuerda(cantidad);
	lstInstrumentosCuerda->Items->Clear();
	if (arr_Tipo_Cuerda!=NULL){
		for (int i=0;i<*cantidad;i++){
			System::String ^instrumento_cuerda= "Nombre: "+gcnew System::String(arr_Tipo_Cuerda[i]->Retornar_Nombre())
				+" Costo: "+arr_Tipo_Cuerda[i]->Retornar_Costo().ToString();
			lstInstrumentosCuerda->Items->Add(instrumento_cuerda);
		}
	}
}
private: System::Void btnEliminar_Click(System::Object^  sender, System::EventArgs^  e) {
	if(lstInstrumentos->SelectedIndex!=-1){
		objeto_ArrInstrumento->Eliminar(lstInstrumentos->SelectedIndex);
		lstInstrumentos->SelectedIndex=-1;

		Insertar_Datos_Instrumento_en_ListBox();
		txtNombre->Clear();
		txtCosto->Clear();
		
		RBPercusion->Checked=false;
		RBViento->Checked=false;
		RBCuerda->Checked=false;
	}
}


private: System::Void lstInstrumentos_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
	if (lstInstrumentos->SelectedIndex!=-1){
		objeto_Instrumento=objeto_ArrInstrumento->Retorna_dato_en_arreglo(lstInstrumentos->SelectedIndex);
		txtNombre->Text= gcnew System::String(objeto_Instrumento->Retornar_Nombre());
		txtCosto->Text= objeto_Instrumento->Retornar_Costo().ToString();

		char*mitipo;
		mitipo=new char[100];
		mitipo=objeto_Instrumento->Retornar_Tipo();

		if(strcmp(mitipo,"Cuerda")==0){
			RBCuerda->Checked=true;
		}
		else if(strcmp(mitipo,"Percusión")==0){
			RBPercusion->Checked=true;
		}
		else if((strcmp(mitipo,"Viento")==0)){
			RBViento->Checked=true;
		}

	}
}
private: System::Void txtNombre_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e) {

}


private: System::Void txtCosto_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e) {
	if(!Char::IsDigit(e->KeyChar) && e->KeyChar!= 0x08 && e->KeyChar!='.' && e->KeyChar != '\b')
		e->Handled = true;
	else if (e->KeyChar=='.'){
		if(bandera)
			bandera = false;   //ya no acepta otro punto
		else
			e->Handled = true;
	}
}
};
}
