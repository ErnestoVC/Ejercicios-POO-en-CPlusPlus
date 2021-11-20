#pragma once

namespace Project1 {

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
	private: System::Windows::Forms::Label^  lbltitulo;
	private: System::Windows::Forms::Label^  lblmsg1;
	private: System::Windows::Forms::Label^  lblmsg2;
	private: System::Windows::Forms::Label^  lblmsg3;
	private: System::Windows::Forms::Label^  lblmsg4;
	private: System::Windows::Forms::Label^  lblapPaterno;
	private: System::Windows::Forms::Label^  lblapMaterno;
	private: System::Windows::Forms::Label^  lblnombre;
	private: System::Windows::Forms::Label^  lblsexo;
	private: System::Windows::Forms::Label^  lblmsg5;
	protected:

	protected:









	private: System::Windows::Forms::Label^  lblfechanacimiento;

	private: System::Windows::Forms::Label^  lbldocumento;
	private: System::Windows::Forms::Label^  lblcelular;
	private: System::Windows::Forms::Label^  lblcorreopersonal;
	private: System::Windows::Forms::Label^  lblmsg6;
	private: System::Windows::Forms::Label^  lblmedio;





	private: System::Windows::Forms::Label^  lblmsg7;
	private: System::Windows::Forms::Label^  lblmsg8;
	private: System::Windows::Forms::Label^  lblcomentario;



	private: System::Windows::Forms::Label^  lblmsg9;

	private: System::Windows::Forms::Label^  label21;
	private: System::Windows::Forms::CheckBox^  chbautorización;

	private: System::Windows::Forms::Label^  lblmsg10;
	private: System::Windows::Forms::TextBox^  txtapMaterno;
	private: System::Windows::Forms::TextBox^  txtnombre;
	private: System::Windows::Forms::TextBox^  txtcelular;
	private: System::Windows::Forms::TextBox^  txtcorreo;






	private: System::Windows::Forms::TextBox^  textBox7;
	private: System::Windows::Forms::RadioButton^  rdbMasculino;
	private: System::Windows::Forms::RadioButton^  rdbFemenino;
	private: System::Windows::Forms::ComboBox^  cmbdocumento;
	private: System::Windows::Forms::ComboBox^  cmbDia;
	private: System::Windows::Forms::ComboBox^  cmbMes;
	private: System::Windows::Forms::ComboBox^  cmbAño;
	private: System::Windows::Forms::TextBox^  txtcatcha;
	private: System::Windows::Forms::Button^  btnEnviar;








	private: System::Windows::Forms::TextBox^  txtMedio;
	private: System::Windows::Forms::TextBox^  txtcomentario;
	private: System::Windows::Forms::TextBox^  txtResultado;



	private: System::Windows::Forms::TextBox^  txtapPaterno;

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
			this->lbltitulo = (gcnew System::Windows::Forms::Label());
			this->lblmsg1 = (gcnew System::Windows::Forms::Label());
			this->lblmsg2 = (gcnew System::Windows::Forms::Label());
			this->lblmsg3 = (gcnew System::Windows::Forms::Label());
			this->lblmsg4 = (gcnew System::Windows::Forms::Label());
			this->lblapPaterno = (gcnew System::Windows::Forms::Label());
			this->lblapMaterno = (gcnew System::Windows::Forms::Label());
			this->lblnombre = (gcnew System::Windows::Forms::Label());
			this->lblsexo = (gcnew System::Windows::Forms::Label());
			this->lblmsg5 = (gcnew System::Windows::Forms::Label());
			this->lblfechanacimiento = (gcnew System::Windows::Forms::Label());
			this->lbldocumento = (gcnew System::Windows::Forms::Label());
			this->lblcelular = (gcnew System::Windows::Forms::Label());
			this->lblcorreopersonal = (gcnew System::Windows::Forms::Label());
			this->lblmsg6 = (gcnew System::Windows::Forms::Label());
			this->lblmedio = (gcnew System::Windows::Forms::Label());
			this->lblmsg7 = (gcnew System::Windows::Forms::Label());
			this->lblmsg8 = (gcnew System::Windows::Forms::Label());
			this->lblcomentario = (gcnew System::Windows::Forms::Label());
			this->lblmsg9 = (gcnew System::Windows::Forms::Label());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->chbautorización = (gcnew System::Windows::Forms::CheckBox());
			this->lblmsg10 = (gcnew System::Windows::Forms::Label());
			this->txtapPaterno = (gcnew System::Windows::Forms::TextBox());
			this->txtapMaterno = (gcnew System::Windows::Forms::TextBox());
			this->txtnombre = (gcnew System::Windows::Forms::TextBox());
			this->txtcelular = (gcnew System::Windows::Forms::TextBox());
			this->txtcorreo = (gcnew System::Windows::Forms::TextBox());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->rdbMasculino = (gcnew System::Windows::Forms::RadioButton());
			this->rdbFemenino = (gcnew System::Windows::Forms::RadioButton());
			this->cmbdocumento = (gcnew System::Windows::Forms::ComboBox());
			this->cmbDia = (gcnew System::Windows::Forms::ComboBox());
			this->cmbMes = (gcnew System::Windows::Forms::ComboBox());
			this->cmbAño = (gcnew System::Windows::Forms::ComboBox());
			this->txtcatcha = (gcnew System::Windows::Forms::TextBox());
			this->btnEnviar = (gcnew System::Windows::Forms::Button());
			this->txtMedio = (gcnew System::Windows::Forms::TextBox());
			this->txtcomentario = (gcnew System::Windows::Forms::TextBox());
			this->txtResultado = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// lbltitulo
			// 
			this->lbltitulo->AutoSize = true;
			this->lbltitulo->BackColor = System::Drawing::SystemColors::ControlText;
			this->lbltitulo->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbltitulo->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->lbltitulo->Location = System::Drawing::Point(234, 9);
			this->lbltitulo->Name = L"lbltitulo";
			this->lbltitulo->Size = System::Drawing::Size(150, 31);
			this->lbltitulo->TabIndex = 0;
			this->lbltitulo->Text = L"Portal UPC";
			// 
			// lblmsg1
			// 
			this->lblmsg1->AutoSize = true;
			this->lblmsg1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblmsg1->Location = System::Drawing::Point(248, 50);
			this->lblmsg1->Name = L"lblmsg1";
			this->lblmsg1->Size = System::Drawing::Size(115, 24);
			this->lblmsg1->TabIndex = 1;
			this->lblmsg1->Text = L"Contáctenos";
			// 
			// lblmsg2
			// 
			this->lblmsg2->AutoSize = true;
			this->lblmsg2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblmsg2->Location = System::Drawing::Point(1, 74);
			this->lblmsg2->Name = L"lblmsg2";
			this->lblmsg2->Size = System::Drawing::Size(597, 18);
			this->lblmsg2->TabIndex = 2;
			this->lblmsg2->Text = L"Complete la siguiente información para ponerse en contacto con la UPC. Muchas gra"
				L"cias";
			// 
			// lblmsg3
			// 
			this->lblmsg3->AutoSize = true;
			this->lblmsg3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblmsg3->Location = System::Drawing::Point(1, 106);
			this->lblmsg3->Name = L"lblmsg3";
			this->lblmsg3->Size = System::Drawing::Size(213, 20);
			this->lblmsg3->TabIndex = 3;
			this->lblmsg3->Text = L"INFORMACIÓN PERSONAL";
			// 
			// lblmsg4
			// 
			this->lblmsg4->AutoSize = true;
			this->lblmsg4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblmsg4->Location = System::Drawing::Point(440, 110);
			this->lblmsg4->Name = L"lblmsg4";
			this->lblmsg4->Size = System::Drawing::Size(143, 16);
			this->lblmsg4->TabIndex = 4;
			this->lblmsg4->Text = L"* Campos Obligatorios";
			// 
			// lblapPaterno
			// 
			this->lblapPaterno->AutoSize = true;
			this->lblapPaterno->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblapPaterno->Location = System::Drawing::Point(2, 143);
			this->lblapPaterno->Name = L"lblapPaterno";
			this->lblapPaterno->Size = System::Drawing::Size(143, 20);
			this->lblapPaterno->TabIndex = 5;
			this->lblapPaterno->Text = L"Apellido Paterno : *";
			// 
			// lblapMaterno
			// 
			this->lblapMaterno->AutoSize = true;
			this->lblapMaterno->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblapMaterno->Location = System::Drawing::Point(2, 179);
			this->lblapMaterno->Name = L"lblapMaterno";
			this->lblapMaterno->Size = System::Drawing::Size(146, 20);
			this->lblapMaterno->TabIndex = 6;
			this->lblapMaterno->Text = L"Apellido Materno : *";
			// 
			// lblnombre
			// 
			this->lblnombre->AutoSize = true;
			this->lblnombre->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblnombre->Location = System::Drawing::Point(2, 233);
			this->lblnombre->Name = L"lblnombre";
			this->lblnombre->Size = System::Drawing::Size(83, 20);
			this->lblnombre->TabIndex = 7;
			this->lblnombre->Text = L"Nombre : *";
			// 
			// lblsexo
			// 
			this->lblsexo->AutoSize = true;
			this->lblsexo->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblsexo->Location = System::Drawing::Point(2, 264);
			this->lblsexo->Name = L"lblsexo";
			this->lblsexo->Size = System::Drawing::Size(63, 20);
			this->lblsexo->TabIndex = 8;
			this->lblsexo->Text = L"Sexo : *";
			// 
			// lblmsg5
			// 
			this->lblmsg5->AutoSize = true;
			this->lblmsg5->ForeColor = System::Drawing::SystemColors::Desktop;
			this->lblmsg5->Location = System::Drawing::Point(3, 209);
			this->lblmsg5->Name = L"lblmsg5";
			this->lblmsg5->Size = System::Drawing::Size(398, 13);
			this->lblmsg5->TabIndex = 9;
			this->lblmsg5->Text = L"Si su nacionalidad es extranjera, escriba \"extranjero\" en el campo Apellido Mater"
				L"no";
			// 
			// lblfechanacimiento
			// 
			this->lblfechanacimiento->AutoSize = true;
			this->lblfechanacimiento->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblfechanacimiento->Location = System::Drawing::Point(2, 325);
			this->lblfechanacimiento->Name = L"lblfechanacimiento";
			this->lblfechanacimiento->Size = System::Drawing::Size(175, 20);
			this->lblfechanacimiento->TabIndex = 10;
			this->lblfechanacimiento->Text = L"Fecha de nacimiento : *";
			// 
			// lbldocumento
			// 
			this->lbldocumento->AutoSize = true;
			this->lbldocumento->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbldocumento->Location = System::Drawing::Point(2, 294);
			this->lbldocumento->Name = L"lbldocumento";
			this->lbldocumento->Size = System::Drawing::Size(203, 20);
			this->lbldocumento->TabIndex = 11;
			this->lbldocumento->Text = L"Documento de Identidad : *";
			// 
			// lblcelular
			// 
			this->lblcelular->AutoSize = true;
			this->lblcelular->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblcelular->Location = System::Drawing::Point(2, 355);
			this->lblcelular->Name = L"lblcelular";
			this->lblcelular->Size = System::Drawing::Size(155, 20);
			this->lblcelular->TabIndex = 12;
			this->lblcelular->Text = L"Teléfono o Celular : *";
			// 
			// lblcorreopersonal
			// 
			this->lblcorreopersonal->AutoSize = true;
			this->lblcorreopersonal->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblcorreopersonal->Location = System::Drawing::Point(-1, 410);
			this->lblcorreopersonal->Name = L"lblcorreopersonal";
			this->lblcorreopersonal->Size = System::Drawing::Size(141, 20);
			this->lblcorreopersonal->TabIndex = 13;
			this->lblcorreopersonal->Text = L"Correo Personal : *";
			this->lblcorreopersonal->Click += gcnew System::EventHandler(this, &MyForm::label14_Click);
			// 
			// lblmsg6
			// 
			this->lblmsg6->AutoSize = true;
			this->lblmsg6->ForeColor = System::Drawing::SystemColors::Desktop;
			this->lblmsg6->Location = System::Drawing::Point(3, 384);
			this->lblmsg6->Name = L"lblmsg6";
			this->lblmsg6->Size = System::Drawing::Size(541, 13);
			this->lblmsg6->TabIndex = 14;
			this->lblmsg6->Text = L"Escriba los teléfonos anteponiendo \"0\" + código postal de provincia. Si escribe u"
				L"n celular, debe empezar con \"9\"";
			// 
			// lblmedio
			// 
			this->lblmedio->AutoSize = true;
			this->lblmedio->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblmedio->Location = System::Drawing::Point(-1, 480);
			this->lblmedio->Name = L"lblmedio";
			this->lblmedio->Size = System::Drawing::Size(70, 20);
			this->lblmedio->TabIndex = 15;
			this->lblmedio->Text = L"Medio : *";
			// 
			// lblmsg7
			// 
			this->lblmsg7->AutoSize = true;
			this->lblmsg7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblmsg7->Location = System::Drawing::Point(0, 443);
			this->lblmsg7->Name = L"lblmsg7";
			this->lblmsg7->Size = System::Drawing::Size(287, 20);
			this->lblmsg7->TabIndex = 16;
			this->lblmsg7->Text = L"¿CÓMO SE ENTERÓ DE NOSOTROS:";
			// 
			// lblmsg8
			// 
			this->lblmsg8->AutoSize = true;
			this->lblmsg8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblmsg8->Location = System::Drawing::Point(1, 517);
			this->lblmsg8->Name = L"lblmsg8";
			this->lblmsg8->Size = System::Drawing::Size(281, 20);
			this->lblmsg8->TabIndex = 17;
			this->lblmsg8->Text = L"COMENTARIOS Y/O SUGERENCIAS";
			// 
			// lblcomentario
			// 
			this->lblcomentario->AutoSize = true;
			this->lblcomentario->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblcomentario->Location = System::Drawing::Point(2, 551);
			this->lblcomentario->Name = L"lblcomentario";
			this->lblcomentario->Size = System::Drawing::Size(103, 20);
			this->lblcomentario->TabIndex = 18;
			this->lblcomentario->Text = L"Comentarios:";
			// 
			// lblmsg9
			// 
			this->lblmsg9->AutoSize = true;
			this->lblmsg9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblmsg9->Location = System::Drawing::Point(-1, 628);
			this->lblmsg9->Name = L"lblmsg9";
			this->lblmsg9->Size = System::Drawing::Size(355, 20);
			this->lblmsg9->TabIndex = 19;
			this->lblmsg9->Text = L"AUTORIZACIÓN DE ENVIO DE INFORMACIÓN";
			// 
			// label21
			// 
			this->label21->AutoSize = true;
			this->label21->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label21->Location = System::Drawing::Point(31, 691);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(0, 18);
			this->label21->TabIndex = 20;
			// 
			// chbautorización
			// 
			this->chbautorización->AutoSize = true;
			this->chbautorización->Location = System::Drawing::Point(3, 651);
			this->chbautorización->Name = L"chbautorización";
			this->chbautorización->Size = System::Drawing::Size(348, 17);
			this->chbautorización->TabIndex = 21;
			this->chbautorización->Text = L"Deseo recibir información acerca de programas, cursos y seminarios.";
			this->chbautorización->UseVisualStyleBackColor = true;
			// 
			// lblmsg10
			// 
			this->lblmsg10->AutoSize = true;
			this->lblmsg10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblmsg10->Location = System::Drawing::Point(3, 693);
			this->lblmsg10->Name = L"lblmsg10";
			this->lblmsg10->Size = System::Drawing::Size(277, 16);
			this->lblmsg10->TabIndex = 22;
			this->lblmsg10->Text = L"Escriba los caracteres que ve en la imagen: *";
			// 
			// txtapPaterno
			// 
			this->txtapPaterno->Location = System::Drawing::Point(219, 142);
			this->txtapPaterno->Name = L"txtapPaterno";
			this->txtapPaterno->Size = System::Drawing::Size(238, 20);
			this->txtapPaterno->TabIndex = 23;
			// 
			// txtapMaterno
			// 
			this->txtapMaterno->Location = System::Drawing::Point(219, 179);
			this->txtapMaterno->Name = L"txtapMaterno";
			this->txtapMaterno->Size = System::Drawing::Size(238, 20);
			this->txtapMaterno->TabIndex = 24;
			// 
			// txtnombre
			// 
			this->txtnombre->Location = System::Drawing::Point(219, 233);
			this->txtnombre->Name = L"txtnombre";
			this->txtnombre->Size = System::Drawing::Size(238, 20);
			this->txtnombre->TabIndex = 25;
			// 
			// txtcelular
			// 
			this->txtcelular->Location = System::Drawing::Point(219, 355);
			this->txtcelular->Name = L"txtcelular";
			this->txtcelular->Size = System::Drawing::Size(238, 20);
			this->txtcelular->TabIndex = 26;
			// 
			// txtcorreo
			// 
			this->txtcorreo->Location = System::Drawing::Point(219, 410);
			this->txtcorreo->Name = L"txtcorreo";
			this->txtcorreo->Size = System::Drawing::Size(238, 20);
			this->txtcorreo->TabIndex = 28;
			// 
			// textBox7
			// 
			this->textBox7->Location = System::Drawing::Point(345, 294);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(112, 20);
			this->textBox7->TabIndex = 29;
			// 
			// rdbMasculino
			// 
			this->rdbMasculino->AutoSize = true;
			this->rdbMasculino->Location = System::Drawing::Point(219, 264);
			this->rdbMasculino->Name = L"rdbMasculino";
			this->rdbMasculino->Size = System::Drawing::Size(73, 17);
			this->rdbMasculino->TabIndex = 30;
			this->rdbMasculino->TabStop = true;
			this->rdbMasculino->Text = L"Masculino";
			this->rdbMasculino->UseVisualStyleBackColor = true;
			// 
			// rdbFemenino
			// 
			this->rdbFemenino->AutoSize = true;
			this->rdbFemenino->Location = System::Drawing::Point(345, 264);
			this->rdbFemenino->Name = L"rdbFemenino";
			this->rdbFemenino->Size = System::Drawing::Size(71, 17);
			this->rdbFemenino->TabIndex = 31;
			this->rdbFemenino->TabStop = true;
			this->rdbFemenino->Text = L"Femenino";
			this->rdbFemenino->UseVisualStyleBackColor = true;
			// 
			// cmbdocumento
			// 
			this->cmbdocumento->FormattingEnabled = true;
			this->cmbdocumento->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"Carnet de Extranjeria", L"DNI", L"Pasaport" });
			this->cmbdocumento->Location = System::Drawing::Point(219, 292);
			this->cmbdocumento->Name = L"cmbdocumento";
			this->cmbdocumento->Size = System::Drawing::Size(121, 21);
			this->cmbdocumento->TabIndex = 32;
			this->cmbdocumento->Text = L"[SELECCIONAR]";
			// 
			// cmbDia
			// 
			this->cmbDia->FormattingEnabled = true;
			this->cmbDia->Items->AddRange(gcnew cli::array< System::Object^  >(31) {
				L"1", L"2", L"3", L"4", L"5", L"6", L"7", L"8", L"9",
					L"10", L"11", L"12", L"13", L"14", L"15", L"16", L"17", L"18", L"19", L"20", L"21", L"22", L"23", L"24", L"25", L"26", L"27",
					L"28", L"29", L"30", L"31"
			});
			this->cmbDia->Location = System::Drawing::Point(219, 325);
			this->cmbDia->Name = L"cmbDia";
			this->cmbDia->Size = System::Drawing::Size(73, 21);
			this->cmbDia->TabIndex = 33;
			this->cmbDia->Text = L"[DÍA]";
			// 
			// cmbMes
			// 
			this->cmbMes->FormattingEnabled = true;
			this->cmbMes->Items->AddRange(gcnew cli::array< System::Object^  >(12) {
				L"Enero", L"Febrero", L"Marzo", L"Abril", L"Mayo",
					L"Junio", L"Julio", L"Agosto", L"Septiembre", L"Octumbre", L"Noviembre", L"Diciembre"
			});
			this->cmbMes->Location = System::Drawing::Point(305, 324);
			this->cmbMes->Name = L"cmbMes";
			this->cmbMes->Size = System::Drawing::Size(73, 21);
			this->cmbMes->TabIndex = 34;
			this->cmbMes->Text = L"[MES]";
			// 
			// cmbAño
			// 
			this->cmbAño->FormattingEnabled = true;
			this->cmbAño->Items->AddRange(gcnew cli::array< System::Object^  >(26) {
				L"2015", L"2014", L"2013", L"2012", L"2011", L"2010",
					L"2009", L"2008", L"2007", L"2006", L"2005", L"2004", L"2003", L"2002", L"2001", L"2000", L"1999", L"1998", L"1997", L"1996",
					L"1995", L"1994", L"1993", L"1992", L"1991", L"1990"
			});
			this->cmbAño->Location = System::Drawing::Point(384, 324);
			this->cmbAño->Name = L"cmbAño";
			this->cmbAño->Size = System::Drawing::Size(73, 21);
			this->cmbAño->TabIndex = 35;
			this->cmbAño->Text = L"[AÑO]";
			// 
			// txtcatcha
			// 
			this->txtcatcha->Location = System::Drawing::Point(12, 712);
			this->txtcatcha->Name = L"txtcatcha";
			this->txtcatcha->Size = System::Drawing::Size(238, 20);
			this->txtcatcha->TabIndex = 36;
			// 
			// btnEnviar
			// 
			this->btnEnviar->Location = System::Drawing::Point(384, 628);
			this->btnEnviar->Name = L"btnEnviar";
			this->btnEnviar->Size = System::Drawing::Size(118, 47);
			this->btnEnviar->TabIndex = 37;
			this->btnEnviar->Text = L"Enviar";
			this->btnEnviar->UseVisualStyleBackColor = true;
			this->btnEnviar->Click += gcnew System::EventHandler(this, &MyForm::btnEnviar_Click);
			// 
			// txtMedio
			// 
			this->txtMedio->Location = System::Drawing::Point(219, 466);
			this->txtMedio->Name = L"txtMedio";
			this->txtMedio->Size = System::Drawing::Size(238, 20);
			this->txtMedio->TabIndex = 38;
			// 
			// txtcomentario
			// 
			this->txtcomentario->Location = System::Drawing::Point(219, 540);
			this->txtcomentario->Multiline = true;
			this->txtcomentario->Name = L"txtcomentario";
			this->txtcomentario->Size = System::Drawing::Size(238, 72);
			this->txtcomentario->TabIndex = 39;
			// 
			// txtResultado
			// 
			this->txtResultado->Location = System::Drawing::Point(502, 143);
			this->txtResultado->Multiline = true;
			this->txtResultado->Name = L"txtResultado";
			this->txtResultado->Size = System::Drawing::Size(238, 134);
			this->txtResultado->TabIndex = 40;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(821, 753);
			this->Controls->Add(this->txtResultado);
			this->Controls->Add(this->txtcomentario);
			this->Controls->Add(this->txtMedio);
			this->Controls->Add(this->btnEnviar);
			this->Controls->Add(this->txtcatcha);
			this->Controls->Add(this->cmbAño);
			this->Controls->Add(this->cmbMes);
			this->Controls->Add(this->cmbDia);
			this->Controls->Add(this->cmbdocumento);
			this->Controls->Add(this->rdbFemenino);
			this->Controls->Add(this->rdbMasculino);
			this->Controls->Add(this->textBox7);
			this->Controls->Add(this->txtcorreo);
			this->Controls->Add(this->txtcelular);
			this->Controls->Add(this->txtnombre);
			this->Controls->Add(this->txtapMaterno);
			this->Controls->Add(this->txtapPaterno);
			this->Controls->Add(this->lblmsg10);
			this->Controls->Add(this->chbautorización);
			this->Controls->Add(this->label21);
			this->Controls->Add(this->lblmsg9);
			this->Controls->Add(this->lblcomentario);
			this->Controls->Add(this->lblmsg8);
			this->Controls->Add(this->lblmsg7);
			this->Controls->Add(this->lblmedio);
			this->Controls->Add(this->lblmsg6);
			this->Controls->Add(this->lblcorreopersonal);
			this->Controls->Add(this->lblcelular);
			this->Controls->Add(this->lbldocumento);
			this->Controls->Add(this->lblfechanacimiento);
			this->Controls->Add(this->lblmsg5);
			this->Controls->Add(this->lblsexo);
			this->Controls->Add(this->lblnombre);
			this->Controls->Add(this->lblapMaterno);
			this->Controls->Add(this->lblapPaterno);
			this->Controls->Add(this->lblmsg4);
			this->Controls->Add(this->lblmsg3);
			this->Controls->Add(this->lblmsg2);
			this->Controls->Add(this->lblmsg1);
			this->Controls->Add(this->lbltitulo);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label14_Click(System::Object^  sender, System::EventArgs^  e) {
	}
private: System::Void btnEnviar_Click(System::Object^  sender, System::EventArgs^  e) {
	txtResultado->Text = txtnombre->Text +" "+ txtapPaterno->Text + " " + txtapMaterno->Text;
} 
};
}
