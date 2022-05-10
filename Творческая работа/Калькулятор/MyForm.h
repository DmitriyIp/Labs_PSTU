#pragma once

namespace Калькулятор 
{
	

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			this->Text = "Калькулятор уравнений с тремя неизвестными переменными";
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::TextBox^ textBox7;
	private: System::Windows::Forms::TextBox^ textBox8;
	private: System::Windows::Forms::TextBox^ textBox9;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::TextBox^ textBox13;
	private: System::Windows::Forms::TextBox^ textBox14;
	private: System::Windows::Forms::TextBox^ textBox15;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::Label^ label14;












	private: System::Windows::Forms::ToolTip^ toolTip1;

	private: System::Windows::Forms::Label^ label15;
	private: System::Windows::Forms::Label^ label17;
	private: System::Windows::Forms::Label^ label18;
	private: System::Windows::Forms::Label^ label19;
	private: System::Windows::Forms::Label^ label20;
	private: System::Windows::Forms::Label^ label21;
	private: System::Windows::Forms::Label^ label22;
	private: System::Windows::Forms::Label^ label23;
	private: System::Windows::Forms::Label^ label24;
	private: System::Windows::Forms::Label^ label25;
	private: System::Windows::Forms::Label^ label26;
	private: System::Windows::Forms::Label^ label27;
	private: System::Windows::Forms::Label^ label28;
	private: System::Windows::Forms::Label^ label16;
	private: System::Windows::Forms::Label^ label29;
	private: System::Windows::Forms::Label^ label30;
	private: System::Windows::Forms::Label^ label31;
	private: System::Windows::Forms::Label^ label32;
	private: System::Windows::Forms::Label^ label33;
	private: System::Windows::Forms::Label^ label34;
	private: System::Windows::Forms::Label^ label35;
	private: System::Windows::Forms::Label^ label36;
	private: System::Windows::Forms::Label^ label37;
	private: System::Windows::Forms::Label^ label38;
	private: System::Windows::Forms::Label^ label39;
	private: System::Windows::Forms::Label^ label40;
	private: System::Windows::Forms::Label^ label41;
	private: System::Windows::Forms::Label^ label42;
	private: System::Windows::Forms::Label^ label43;
	private: System::Windows::Forms::Label^ label44;
	private: System::Windows::Forms::Label^ label45;
	private: System::Windows::Forms::Label^ label46;
	private: System::Windows::Forms::Label^ label47;
	private: System::Windows::Forms::Label^ label48;
	private: System::Windows::Forms::Label^ label49;
	private: System::Windows::Forms::Label^ label50;
	private: System::Windows::Forms::Label^ label51;
	private: System::Windows::Forms::Label^ label52;
	private: System::Windows::Forms::Label^ label53;
	private: System::Windows::Forms::Label^ label54;
	private: System::Windows::Forms::Label^ label55;
	private: System::Windows::Forms::Label^ label56;
	private: System::Windows::Forms::Label^ label57;
	private: System::Windows::Forms::Label^ label58;
	private: System::Windows::Forms::Label^ label59;
	private: System::Windows::Forms::Label^ label60;
	private: System::Windows::Forms::Label^ label61;
	private: System::Windows::Forms::Label^ label62;
	private: System::Windows::Forms::Label^ label63;
	private: System::Windows::Forms::Label^ label64;
private: System::Windows::Forms::Label^ label65;
private: System::Windows::Forms::Label^ label66;
private: System::Windows::Forms::Label^ label67;
private: System::Windows::Forms::Label^ label68;
private: System::Windows::Forms::Label^ label69;
private: System::Windows::Forms::Label^ label70;
private: System::Windows::Forms::Label^ label71;
private: System::Windows::Forms::Label^ label72;
private: System::Windows::Forms::Label^ label73;
private: System::Windows::Forms::Label^ label74;
private: System::Windows::Forms::Label^ label75;
private: System::Windows::Forms::Label^ label76;
private: System::Windows::Forms::Label^ label77;
private: System::Windows::Forms::Label^ label78;
private: System::Windows::Forms::Label^ label79;
private: System::Windows::Forms::Label^ label80;
private: System::Windows::Forms::Label^ label81;
private: System::Windows::Forms::Label^ label82;
private: System::Windows::Forms::Label^ label83;
private: System::Windows::Forms::Label^ label84;
private: System::Windows::Forms::Label^ label85;
private: System::Windows::Forms::Label^ label86;
private: System::Windows::Forms::Label^ label87;
private: System::Windows::Forms::Label^ label88;
private: System::Windows::Forms::Label^ label89;
private: System::Windows::Forms::Label^ label90;
private: System::Windows::Forms::Label^ label91;
private: System::Windows::Forms::Label^ label92;
private: System::Windows::Forms::Label^ label93;
private: System::Windows::Forms::Label^ label94;
private: System::Windows::Forms::Label^ label95;
private: System::Windows::Forms::Label^ label96;
private: System::Windows::Forms::Label^ label97;
private: System::Windows::Forms::Label^ label98;
private: System::Windows::Forms::Label^ label99;
private: System::Windows::Forms::Label^ label100;
private: System::Windows::Forms::Label^ label101;
private: System::Windows::Forms::Label^ label102;
private: System::Windows::Forms::Label^ label103;
private: System::Windows::Forms::Label^ label104;
private: System::Windows::Forms::Label^ label105;
private: System::Windows::Forms::Label^ label106;
private: System::Windows::Forms::Label^ label107;
private: System::Windows::Forms::Label^ label108;
private: System::Windows::Forms::Label^ label109;
private: System::Windows::Forms::Label^ label110;
private: System::Windows::Forms::Label^ label111;
private: System::Windows::Forms::Label^ label112;
private: System::Windows::Forms::Label^ label113;
private: System::Windows::Forms::Label^ label115;
private: System::Windows::Forms::Label^ label116;
private: System::Windows::Forms::Label^ label117;
private: System::Windows::Forms::Label^ label118;
private: System::Windows::Forms::Label^ label119;
private: System::Windows::Forms::Label^ label120;
private: System::Windows::Forms::Label^ label121;
private: System::Windows::Forms::Label^ label122;
private: System::Windows::Forms::Label^ label123;
private: System::Windows::Forms::Label^ label124;
private: System::Windows::Forms::Label^ label125;
private: System::Windows::Forms::Label^ label126;
private: System::Windows::Forms::Label^ label127;
private: System::Windows::Forms::Label^ label128;
private: System::Windows::Forms::Label^ label129;
private: System::Windows::Forms::Label^ label130;
private: System::Windows::Forms::Label^ label131;
private: System::Windows::Forms::Label^ label132;
private: System::Windows::Forms::Label^ label133;
private: System::Windows::Forms::Label^ label134;
private: System::Windows::Forms::Label^ label135;
private: System::Windows::Forms::Label^ label136;
private: System::Windows::Forms::Label^ label138;
private: System::Windows::Forms::Label^ label139;
private: System::Windows::Forms::Label^ label140;
private: System::Windows::Forms::Label^ label141;
private: System::Windows::Forms::Label^ label142;
private: System::Windows::Forms::Label^ label114;
private: System::Windows::Forms::Label^ label137;
private: System::Windows::Forms::Label^ label143;
private: System::Windows::Forms::Label^ label144;
private: System::Windows::Forms::Label^ label145;
private: System::Windows::Forms::Label^ label146;
private: System::Windows::Forms::Label^ label147;
private: System::Windows::Forms::Label^ label148;
private: System::Windows::Forms::Label^ label149;
private: System::Windows::Forms::Label^ label150;
private: System::Windows::Forms::Label^ label151;
private: System::Windows::Forms::Label^ label152;
private: System::Windows::Forms::Label^ label153;
private: System::Windows::Forms::Label^ label154;
private: System::Windows::Forms::Label^ label155;
private: System::Windows::Forms::Label^ label156;
private: System::Windows::Forms::Label^ label157;
private: System::Windows::Forms::Label^ label158;
private: System::Windows::Forms::Label^ label159;
private: System::Windows::Forms::Label^ label160;
private: System::Windows::Forms::Label^ label161;
private: System::Windows::Forms::Label^ label162;
private: System::Windows::Forms::Label^ label163;
private: System::Windows::Forms::Label^ label164;
private: System::Windows::Forms::Label^ label165;
private: System::Windows::Forms::Label^ label166;
private: System::Windows::Forms::Label^ label167;
private: System::Windows::Forms::Label^ label168;
private: System::Windows::Forms::Label^ label169;
private: System::Windows::Forms::Label^ label170;
private: System::Windows::Forms::Label^ label171;
private: System::Windows::Forms::Label^ label172;
private: System::Windows::Forms::Label^ label173;
private: System::Windows::Forms::Label^ label174;
private: System::Windows::Forms::Label^ label175;
private: System::Windows::Forms::Label^ label176;
private: System::Windows::Forms::Label^ label177;
private: System::Windows::Forms::Label^ label178;
private: System::Windows::Forms::Label^ label179;
private: System::Windows::Forms::Label^ label180;
private: System::Windows::Forms::Label^ label181;
private: System::Windows::Forms::Label^ label182;
private: System::Windows::Forms::Label^ label183;
private: System::Windows::Forms::Label^ label184;
private: System::Windows::Forms::Label^ label185;
private: System::Windows::Forms::Label^ label186;
private: System::Windows::Forms::Label^ label187;
private: System::Windows::Forms::Label^ label188;
private: System::Windows::Forms::Label^ label189;
private: System::Windows::Forms::Label^ label190;
private: System::Windows::Forms::Label^ label191;
private: System::Windows::Forms::Label^ label192;
private: System::Windows::Forms::Label^ label193;
private: System::Windows::Forms::Label^ label194;
private: System::Windows::Forms::Label^ label195;
private: System::Windows::Forms::Label^ label196;
private: System::Windows::Forms::Label^ label197;
private: System::Windows::Forms::Label^ label198;
private: System::Windows::Forms::Label^ label199;
private: System::Windows::Forms::Label^ label200;
private: System::Windows::Forms::Label^ label201;
private: System::Windows::Forms::Label^ label202;
private: System::Windows::Forms::Label^ label203;
private: System::Windows::Forms::Label^ label204;
private: System::Windows::Forms::Label^ label205;
private: System::Windows::Forms::Label^ label206;
private: System::Windows::Forms::Label^ label207;
private: System::Windows::Forms::Label^ label208;
private: System::Windows::Forms::Label^ label209;
private: System::Windows::Forms::Label^ label210;
private: System::Windows::Forms::Label^ label211;
private: System::Windows::Forms::Label^ label212;
private: System::Windows::Forms::Label^ label213;
private: System::Windows::Forms::Label^ label214;
private: System::Windows::Forms::Label^ label215;
private: System::Windows::Forms::Label^ label216;
private: System::Windows::Forms::Label^ label217;
private: System::Windows::Forms::Label^ label218;
private: System::Windows::Forms::Label^ label219;
private: System::Windows::Forms::Label^ label220;
private: System::Windows::Forms::Label^ label221;
private: System::Windows::Forms::Label^ label222;
private: System::Windows::Forms::Label^ label223;
private: System::Windows::Forms::Label^ label224;
private: System::Windows::Forms::Label^ label225;
private: System::Windows::Forms::Label^ label226;
private: System::Windows::Forms::Label^ label227;
private: System::Windows::Forms::Label^ label228;
private: System::Windows::Forms::Label^ label229;
private: System::Windows::Forms::Label^ label230;
private: System::Windows::Forms::Label^ label231;
private: System::Windows::Forms::Label^ label232;
private: System::Windows::Forms::Label^ label233;
private: System::Windows::Forms::Label^ label234;
private: System::Windows::Forms::Label^ label235;
private: System::Windows::Forms::Label^ label236;
private: System::Windows::Forms::Label^ label237;
private: System::Windows::Forms::Label^ label238;
private: System::Windows::Forms::Label^ label239;
private: System::Windows::Forms::Label^ label240;
	private: System::ComponentModel::IContainer^ components;

	protected:

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->textBox9 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->textBox13 = (gcnew System::Windows::Forms::TextBox());
			this->textBox14 = (gcnew System::Windows::Forms::TextBox());
			this->textBox15 = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->toolTip1 = (gcnew System::Windows::Forms::ToolTip(this->components));
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->label22 = (gcnew System::Windows::Forms::Label());
			this->label23 = (gcnew System::Windows::Forms::Label());
			this->label24 = (gcnew System::Windows::Forms::Label());
			this->label25 = (gcnew System::Windows::Forms::Label());
			this->label26 = (gcnew System::Windows::Forms::Label());
			this->label27 = (gcnew System::Windows::Forms::Label());
			this->label28 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->label29 = (gcnew System::Windows::Forms::Label());
			this->label30 = (gcnew System::Windows::Forms::Label());
			this->label31 = (gcnew System::Windows::Forms::Label());
			this->label32 = (gcnew System::Windows::Forms::Label());
			this->label33 = (gcnew System::Windows::Forms::Label());
			this->label34 = (gcnew System::Windows::Forms::Label());
			this->label35 = (gcnew System::Windows::Forms::Label());
			this->label36 = (gcnew System::Windows::Forms::Label());
			this->label37 = (gcnew System::Windows::Forms::Label());
			this->label38 = (gcnew System::Windows::Forms::Label());
			this->label39 = (gcnew System::Windows::Forms::Label());
			this->label40 = (gcnew System::Windows::Forms::Label());
			this->label41 = (gcnew System::Windows::Forms::Label());
			this->label42 = (gcnew System::Windows::Forms::Label());
			this->label43 = (gcnew System::Windows::Forms::Label());
			this->label44 = (gcnew System::Windows::Forms::Label());
			this->label45 = (gcnew System::Windows::Forms::Label());
			this->label46 = (gcnew System::Windows::Forms::Label());
			this->label47 = (gcnew System::Windows::Forms::Label());
			this->label48 = (gcnew System::Windows::Forms::Label());
			this->label49 = (gcnew System::Windows::Forms::Label());
			this->label50 = (gcnew System::Windows::Forms::Label());
			this->label51 = (gcnew System::Windows::Forms::Label());
			this->label52 = (gcnew System::Windows::Forms::Label());
			this->label53 = (gcnew System::Windows::Forms::Label());
			this->label54 = (gcnew System::Windows::Forms::Label());
			this->label55 = (gcnew System::Windows::Forms::Label());
			this->label56 = (gcnew System::Windows::Forms::Label());
			this->label57 = (gcnew System::Windows::Forms::Label());
			this->label58 = (gcnew System::Windows::Forms::Label());
			this->label59 = (gcnew System::Windows::Forms::Label());
			this->label60 = (gcnew System::Windows::Forms::Label());
			this->label61 = (gcnew System::Windows::Forms::Label());
			this->label62 = (gcnew System::Windows::Forms::Label());
			this->label63 = (gcnew System::Windows::Forms::Label());
			this->label64 = (gcnew System::Windows::Forms::Label());
			this->label65 = (gcnew System::Windows::Forms::Label());
			this->label66 = (gcnew System::Windows::Forms::Label());
			this->label67 = (gcnew System::Windows::Forms::Label());
			this->label68 = (gcnew System::Windows::Forms::Label());
			this->label69 = (gcnew System::Windows::Forms::Label());
			this->label70 = (gcnew System::Windows::Forms::Label());
			this->label71 = (gcnew System::Windows::Forms::Label());
			this->label72 = (gcnew System::Windows::Forms::Label());
			this->label73 = (gcnew System::Windows::Forms::Label());
			this->label74 = (gcnew System::Windows::Forms::Label());
			this->label75 = (gcnew System::Windows::Forms::Label());
			this->label76 = (gcnew System::Windows::Forms::Label());
			this->label77 = (gcnew System::Windows::Forms::Label());
			this->label78 = (gcnew System::Windows::Forms::Label());
			this->label79 = (gcnew System::Windows::Forms::Label());
			this->label80 = (gcnew System::Windows::Forms::Label());
			this->label81 = (gcnew System::Windows::Forms::Label());
			this->label82 = (gcnew System::Windows::Forms::Label());
			this->label83 = (gcnew System::Windows::Forms::Label());
			this->label84 = (gcnew System::Windows::Forms::Label());
			this->label85 = (gcnew System::Windows::Forms::Label());
			this->label86 = (gcnew System::Windows::Forms::Label());
			this->label87 = (gcnew System::Windows::Forms::Label());
			this->label88 = (gcnew System::Windows::Forms::Label());
			this->label89 = (gcnew System::Windows::Forms::Label());
			this->label90 = (gcnew System::Windows::Forms::Label());
			this->label91 = (gcnew System::Windows::Forms::Label());
			this->label92 = (gcnew System::Windows::Forms::Label());
			this->label93 = (gcnew System::Windows::Forms::Label());
			this->label94 = (gcnew System::Windows::Forms::Label());
			this->label95 = (gcnew System::Windows::Forms::Label());
			this->label96 = (gcnew System::Windows::Forms::Label());
			this->label97 = (gcnew System::Windows::Forms::Label());
			this->label98 = (gcnew System::Windows::Forms::Label());
			this->label99 = (gcnew System::Windows::Forms::Label());
			this->label100 = (gcnew System::Windows::Forms::Label());
			this->label101 = (gcnew System::Windows::Forms::Label());
			this->label102 = (gcnew System::Windows::Forms::Label());
			this->label103 = (gcnew System::Windows::Forms::Label());
			this->label104 = (gcnew System::Windows::Forms::Label());
			this->label105 = (gcnew System::Windows::Forms::Label());
			this->label106 = (gcnew System::Windows::Forms::Label());
			this->label107 = (gcnew System::Windows::Forms::Label());
			this->label108 = (gcnew System::Windows::Forms::Label());
			this->label109 = (gcnew System::Windows::Forms::Label());
			this->label110 = (gcnew System::Windows::Forms::Label());
			this->label111 = (gcnew System::Windows::Forms::Label());
			this->label112 = (gcnew System::Windows::Forms::Label());
			this->label113 = (gcnew System::Windows::Forms::Label());
			this->label115 = (gcnew System::Windows::Forms::Label());
			this->label116 = (gcnew System::Windows::Forms::Label());
			this->label117 = (gcnew System::Windows::Forms::Label());
			this->label118 = (gcnew System::Windows::Forms::Label());
			this->label119 = (gcnew System::Windows::Forms::Label());
			this->label120 = (gcnew System::Windows::Forms::Label());
			this->label121 = (gcnew System::Windows::Forms::Label());
			this->label122 = (gcnew System::Windows::Forms::Label());
			this->label123 = (gcnew System::Windows::Forms::Label());
			this->label124 = (gcnew System::Windows::Forms::Label());
			this->label125 = (gcnew System::Windows::Forms::Label());
			this->label126 = (gcnew System::Windows::Forms::Label());
			this->label127 = (gcnew System::Windows::Forms::Label());
			this->label128 = (gcnew System::Windows::Forms::Label());
			this->label129 = (gcnew System::Windows::Forms::Label());
			this->label130 = (gcnew System::Windows::Forms::Label());
			this->label131 = (gcnew System::Windows::Forms::Label());
			this->label132 = (gcnew System::Windows::Forms::Label());
			this->label133 = (gcnew System::Windows::Forms::Label());
			this->label134 = (gcnew System::Windows::Forms::Label());
			this->label135 = (gcnew System::Windows::Forms::Label());
			this->label136 = (gcnew System::Windows::Forms::Label());
			this->label138 = (gcnew System::Windows::Forms::Label());
			this->label139 = (gcnew System::Windows::Forms::Label());
			this->label140 = (gcnew System::Windows::Forms::Label());
			this->label141 = (gcnew System::Windows::Forms::Label());
			this->label142 = (gcnew System::Windows::Forms::Label());
			this->label114 = (gcnew System::Windows::Forms::Label());
			this->label137 = (gcnew System::Windows::Forms::Label());
			this->label143 = (gcnew System::Windows::Forms::Label());
			this->label144 = (gcnew System::Windows::Forms::Label());
			this->label145 = (gcnew System::Windows::Forms::Label());
			this->label146 = (gcnew System::Windows::Forms::Label());
			this->label147 = (gcnew System::Windows::Forms::Label());
			this->label148 = (gcnew System::Windows::Forms::Label());
			this->label149 = (gcnew System::Windows::Forms::Label());
			this->label150 = (gcnew System::Windows::Forms::Label());
			this->label151 = (gcnew System::Windows::Forms::Label());
			this->label152 = (gcnew System::Windows::Forms::Label());
			this->label153 = (gcnew System::Windows::Forms::Label());
			this->label154 = (gcnew System::Windows::Forms::Label());
			this->label155 = (gcnew System::Windows::Forms::Label());
			this->label156 = (gcnew System::Windows::Forms::Label());
			this->label157 = (gcnew System::Windows::Forms::Label());
			this->label158 = (gcnew System::Windows::Forms::Label());
			this->label159 = (gcnew System::Windows::Forms::Label());
			this->label160 = (gcnew System::Windows::Forms::Label());
			this->label161 = (gcnew System::Windows::Forms::Label());
			this->label162 = (gcnew System::Windows::Forms::Label());
			this->label163 = (gcnew System::Windows::Forms::Label());
			this->label164 = (gcnew System::Windows::Forms::Label());
			this->label165 = (gcnew System::Windows::Forms::Label());
			this->label166 = (gcnew System::Windows::Forms::Label());
			this->label167 = (gcnew System::Windows::Forms::Label());
			this->label168 = (gcnew System::Windows::Forms::Label());
			this->label169 = (gcnew System::Windows::Forms::Label());
			this->label170 = (gcnew System::Windows::Forms::Label());
			this->label171 = (gcnew System::Windows::Forms::Label());
			this->label172 = (gcnew System::Windows::Forms::Label());
			this->label173 = (gcnew System::Windows::Forms::Label());
			this->label174 = (gcnew System::Windows::Forms::Label());
			this->label175 = (gcnew System::Windows::Forms::Label());
			this->label176 = (gcnew System::Windows::Forms::Label());
			this->label177 = (gcnew System::Windows::Forms::Label());
			this->label178 = (gcnew System::Windows::Forms::Label());
			this->label179 = (gcnew System::Windows::Forms::Label());
			this->label180 = (gcnew System::Windows::Forms::Label());
			this->label181 = (gcnew System::Windows::Forms::Label());
			this->label182 = (gcnew System::Windows::Forms::Label());
			this->label183 = (gcnew System::Windows::Forms::Label());
			this->label184 = (gcnew System::Windows::Forms::Label());
			this->label185 = (gcnew System::Windows::Forms::Label());
			this->label186 = (gcnew System::Windows::Forms::Label());
			this->label187 = (gcnew System::Windows::Forms::Label());
			this->label188 = (gcnew System::Windows::Forms::Label());
			this->label189 = (gcnew System::Windows::Forms::Label());
			this->label190 = (gcnew System::Windows::Forms::Label());
			this->label191 = (gcnew System::Windows::Forms::Label());
			this->label192 = (gcnew System::Windows::Forms::Label());
			this->label193 = (gcnew System::Windows::Forms::Label());
			this->label194 = (gcnew System::Windows::Forms::Label());
			this->label195 = (gcnew System::Windows::Forms::Label());
			this->label196 = (gcnew System::Windows::Forms::Label());
			this->label197 = (gcnew System::Windows::Forms::Label());
			this->label198 = (gcnew System::Windows::Forms::Label());
			this->label199 = (gcnew System::Windows::Forms::Label());
			this->label200 = (gcnew System::Windows::Forms::Label());
			this->label201 = (gcnew System::Windows::Forms::Label());
			this->label202 = (gcnew System::Windows::Forms::Label());
			this->label203 = (gcnew System::Windows::Forms::Label());
			this->label204 = (gcnew System::Windows::Forms::Label());
			this->label205 = (gcnew System::Windows::Forms::Label());
			this->label206 = (gcnew System::Windows::Forms::Label());
			this->label207 = (gcnew System::Windows::Forms::Label());
			this->label208 = (gcnew System::Windows::Forms::Label());
			this->label209 = (gcnew System::Windows::Forms::Label());
			this->label210 = (gcnew System::Windows::Forms::Label());
			this->label211 = (gcnew System::Windows::Forms::Label());
			this->label212 = (gcnew System::Windows::Forms::Label());
			this->label213 = (gcnew System::Windows::Forms::Label());
			this->label214 = (gcnew System::Windows::Forms::Label());
			this->label215 = (gcnew System::Windows::Forms::Label());
			this->label216 = (gcnew System::Windows::Forms::Label());
			this->label217 = (gcnew System::Windows::Forms::Label());
			this->label218 = (gcnew System::Windows::Forms::Label());
			this->label219 = (gcnew System::Windows::Forms::Label());
			this->label220 = (gcnew System::Windows::Forms::Label());
			this->label221 = (gcnew System::Windows::Forms::Label());
			this->label222 = (gcnew System::Windows::Forms::Label());
			this->label223 = (gcnew System::Windows::Forms::Label());
			this->label224 = (gcnew System::Windows::Forms::Label());
			this->label225 = (gcnew System::Windows::Forms::Label());
			this->label226 = (gcnew System::Windows::Forms::Label());
			this->label227 = (gcnew System::Windows::Forms::Label());
			this->label228 = (gcnew System::Windows::Forms::Label());
			this->label229 = (gcnew System::Windows::Forms::Label());
			this->label230 = (gcnew System::Windows::Forms::Label());
			this->label231 = (gcnew System::Windows::Forms::Label());
			this->label232 = (gcnew System::Windows::Forms::Label());
			this->label233 = (gcnew System::Windows::Forms::Label());
			this->label234 = (gcnew System::Windows::Forms::Label());
			this->label235 = (gcnew System::Windows::Forms::Label());
			this->label236 = (gcnew System::Windows::Forms::Label());
			this->label237 = (gcnew System::Windows::Forms::Label());
			this->label238 = (gcnew System::Windows::Forms::Label());
			this->label239 = (gcnew System::Windows::Forms::Label());
			this->label240 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// label3
			// 
			this->label3->BackColor = System::Drawing::Color::WhiteSmoke;
			this->label3->Font = (gcnew System::Drawing::Font(L"Cambria Math", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(90, 163);
			this->label3->Margin = System::Windows::Forms::Padding(0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(309, 65);
			this->label3->TabIndex = 3;
			this->label3->Text = L"   x1+               y2+               z3=";
			this->label3->UseMnemonic = false;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::WhiteSmoke;
			this->label4->Font = (gcnew System::Drawing::Font(L"GOST type A", 72, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(18, 120);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(65, 101);
			this->label4->TabIndex = 4;
			this->label4->Text = L"{";
			// 
			// label2
			// 
			this->label2->BackColor = System::Drawing::Color::WhiteSmoke;
			this->label2->Font = (gcnew System::Drawing::Font(L"Cambria Math", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(90, 119);
			this->label2->Margin = System::Windows::Forms::Padding(0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(309, 65);
			this->label2->TabIndex = 30;
			this->label2->Text = L"   x1+               y2+               z3=";
			this->label2->UseMnemonic = false;
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(74, 120);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(37, 20);
			this->textBox1->TabIndex = 31;
			this->textBox1->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::textBox1_KeyPress);
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(166, 120);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(37, 20);
			this->textBox2->TabIndex = 32;
			this->textBox2->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::textBox2_KeyPress);
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(261, 120);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(37, 20);
			this->textBox3->TabIndex = 33;
			this->textBox3->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::textBox3_KeyPress);
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(74, 163);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(37, 20);
			this->textBox4->TabIndex = 34;
			this->textBox4->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::textBox4_KeyPress);
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(166, 163);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(37, 20);
			this->textBox5->TabIndex = 35;
			this->textBox5->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::textBox5_KeyPress);
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(261, 163);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(37, 20);
			this->textBox6->TabIndex = 36;
			this->textBox6->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::textBox6_KeyPress);
			// 
			// textBox7
			// 
			this->textBox7->Location = System::Drawing::Point(74, 207);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(37, 20);
			this->textBox7->TabIndex = 37;
			this->textBox7->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::textBox7_KeyPress);
			// 
			// textBox8
			// 
			this->textBox8->Location = System::Drawing::Point(166, 207);
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(37, 20);
			this->textBox8->TabIndex = 38;
			this->textBox8->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::textBox8_KeyPress);
			// 
			// textBox9
			// 
			this->textBox9->Location = System::Drawing::Point(261, 207);
			this->textBox9->Name = L"textBox9";
			this->textBox9->Size = System::Drawing::Size(37, 20);
			this->textBox9->TabIndex = 39;
			this->textBox9->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::textBox9_KeyPress);
			// 
			// button1
			// 
			this->button1->ForeColor = System::Drawing::Color::Green;
			this->button1->Location = System::Drawing::Point(32, 282);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(171, 56);
			this->button1->TabIndex = 40;
			this->button1->Text = L"Посчитать";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click_1);
			// 
			// button2
			// 
			this->button2->ForeColor = System::Drawing::Color::Red;
			this->button2->Location = System::Drawing::Point(237, 282);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(171, 56);
			this->button2->TabIndex = 41;
			this->button2->Text = L"Очистить";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// textBox13
			// 
			this->textBox13->Location = System::Drawing::Point(345, 119);
			this->textBox13->Name = L"textBox13";
			this->textBox13->Size = System::Drawing::Size(37, 20);
			this->textBox13->TabIndex = 45;
			this->textBox13->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::textBox13_KeyPress);
			// 
			// textBox14
			// 
			this->textBox14->Location = System::Drawing::Point(345, 163);
			this->textBox14->Name = L"textBox14";
			this->textBox14->Size = System::Drawing::Size(37, 20);
			this->textBox14->TabIndex = 46;
			this->textBox14->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::textBox14_KeyPress);
			// 
			// textBox15
			// 
			this->textBox15->Location = System::Drawing::Point(345, 207);
			this->textBox15->Name = L"textBox15";
			this->textBox15->Size = System::Drawing::Size(37, 20);
			this->textBox15->TabIndex = 47;
			this->textBox15->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::textBox15_KeyPress);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(62, 513);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(0, 13);
			this->label5->TabIndex = 48;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(62, 540);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(0, 13);
			this->label6->TabIndex = 49;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(62, 569);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(0, 13);
			this->label7->TabIndex = 50;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->BackColor = System::Drawing::SystemColors::Control;
			this->label8->Font = (gcnew System::Drawing::Font(L"GOST type A", 26.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label8->Location = System::Drawing::Point(12, 452);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(158, 37);
			this->label8->TabIndex = 51;
			this->label8->Text = L"Результат:";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->BackColor = System::Drawing::Color::WhiteSmoke;
			this->label9->Location = System::Drawing::Point(36, 511);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(18, 13);
			this->label9->TabIndex = 52;
			this->label9->Text = L"x=";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->BackColor = System::Drawing::Color::WhiteSmoke;
			this->label10->Location = System::Drawing::Point(36, 538);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(18, 13);
			this->label10->TabIndex = 53;
			this->label10->Text = L"y=";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->BackColor = System::Drawing::Color::WhiteSmoke;
			this->label11->Location = System::Drawing::Point(36, 567);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(18, 13);
			this->label11->TabIndex = 54;
			this->label11->Text = L"z=";
			// 
			// label1
			// 
			this->label1->BackColor = System::Drawing::Color::WhiteSmoke;
			this->label1->Font = (gcnew System::Drawing::Font(L"Cambria Math", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(86, 76);
			this->label1->Margin = System::Windows::Forms::Padding(0, 3, 0, 3);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(280, 64);
			this->label1->TabIndex = 29;
			this->label1->Text = L"   x1+               y2+               z3=";
			this->label1->UseMnemonic = false;
			// 
			// label12
			// 
			this->label12->BackColor = System::Drawing::Color::WhiteSmoke;
			this->label12->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label12->Location = System::Drawing::Point(11, 495);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(276, 92);
			this->label12->TabIndex = 55;
			// 
			// label13
			// 
			this->label13->BackColor = System::Drawing::Color::WhiteSmoke;
			this->label13->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label13->Location = System::Drawing::Point(12, 67);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(387, 199);
			this->label13->TabIndex = 56;
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->BackColor = System::Drawing::SystemColors::Control;
			this->label14->Font = (gcnew System::Drawing::Font(L"GOST type A", 26.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label14->Location = System::Drawing::Point(13, 18);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(321, 37);
			this->label14->TabIndex = 57;
			this->label14->Text = L"Введите коэффициенты:";
			// 
			// toolTip1
			// 
			this->toolTip1->ToolTipIcon = System::Windows::Forms::ToolTipIcon::Info;
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->BackColor = System::Drawing::SystemColors::Control;
			this->label15->Font = (gcnew System::Drawing::Font(L"GOST type A", 26.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label15->Location = System::Drawing::Point(539, 88);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(126, 37);
			this->label15->TabIndex = 72;
			this->label15->Text = L"Решение:";
			this->label15->Visible = false;
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->BackColor = System::Drawing::Color::WhiteSmoke;
			this->label17->Font = (gcnew System::Drawing::Font(L"GOST type A", 48, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label17->Location = System::Drawing::Point(440, 150);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(42, 67);
			this->label17->TabIndex = 74;
			this->label17->Text = L"(";
			this->label17->Visible = false;
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->BackColor = System::Drawing::Color::WhiteSmoke;
			this->label18->Font = (gcnew System::Drawing::Font(L"GOST type A", 48, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label18->Location = System::Drawing::Point(522, 149);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(42, 67);
			this->label18->TabIndex = 75;
			this->label18->Text = L")";
			this->label18->Visible = false;
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->BackColor = System::Drawing::Color::WhiteSmoke;
			this->label19->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 6, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label19->Location = System::Drawing::Point(464, 157);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(17, 9);
			this->label19->TabIndex = 76;
			this->label19->Text = L"a11";
			this->label19->Visible = false;
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->BackColor = System::Drawing::Color::WhiteSmoke;
			this->label20->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 6, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label20->Location = System::Drawing::Point(491, 157);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(17, 9);
			this->label20->TabIndex = 77;
			this->label20->Text = L"a12";
			this->label20->Visible = false;
			// 
			// label21
			// 
			this->label21->AutoSize = true;
			this->label21->BackColor = System::Drawing::Color::WhiteSmoke;
			this->label21->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 6, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label21->Location = System::Drawing::Point(519, 157);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(17, 9);
			this->label21->TabIndex = 78;
			this->label21->Text = L"a13";
			this->label21->Visible = false;
			// 
			// label22
			// 
			this->label22->AutoSize = true;
			this->label22->BackColor = System::Drawing::Color::WhiteSmoke;
			this->label22->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 6, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label22->Location = System::Drawing::Point(464, 175);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(17, 9);
			this->label22->TabIndex = 79;
			this->label22->Text = L"a21";
			this->label22->Visible = false;
			// 
			// label23
			// 
			this->label23->AutoSize = true;
			this->label23->BackColor = System::Drawing::Color::WhiteSmoke;
			this->label23->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 6, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label23->Location = System::Drawing::Point(491, 175);
			this->label23->Name = L"label23";
			this->label23->Size = System::Drawing::Size(17, 9);
			this->label23->TabIndex = 80;
			this->label23->Text = L"a22";
			this->label23->Visible = false;
			// 
			// label24
			// 
			this->label24->AutoSize = true;
			this->label24->BackColor = System::Drawing::Color::WhiteSmoke;
			this->label24->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 6, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label24->Location = System::Drawing::Point(519, 175);
			this->label24->Name = L"label24";
			this->label24->Size = System::Drawing::Size(17, 9);
			this->label24->TabIndex = 81;
			this->label24->Text = L"a23";
			this->label24->Visible = false;
			// 
			// label25
			// 
			this->label25->AutoSize = true;
			this->label25->BackColor = System::Drawing::Color::WhiteSmoke;
			this->label25->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 6, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label25->Location = System::Drawing::Point(464, 192);
			this->label25->Name = L"label25";
			this->label25->Size = System::Drawing::Size(17, 9);
			this->label25->TabIndex = 82;
			this->label25->Text = L"a31";
			this->label25->Visible = false;
			// 
			// label26
			// 
			this->label26->AutoSize = true;
			this->label26->BackColor = System::Drawing::Color::WhiteSmoke;
			this->label26->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 6, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label26->Location = System::Drawing::Point(491, 192);
			this->label26->Name = L"label26";
			this->label26->Size = System::Drawing::Size(17, 9);
			this->label26->TabIndex = 83;
			this->label26->Text = L"a32";
			this->label26->Visible = false;
			// 
			// label27
			// 
			this->label27->AutoSize = true;
			this->label27->BackColor = System::Drawing::Color::WhiteSmoke;
			this->label27->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 6, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label27->Location = System::Drawing::Point(519, 192);
			this->label27->Name = L"label27";
			this->label27->Size = System::Drawing::Size(17, 9);
			this->label27->TabIndex = 84;
			this->label27->Text = L"a33";
			this->label27->Visible = false;
			// 
			// label28
			// 
			this->label28->AutoSize = true;
			this->label28->BackColor = System::Drawing::Color::WhiteSmoke;
			this->label28->Location = System::Drawing::Point(549, 172);
			this->label28->Name = L"label28";
			this->label28->Size = System::Drawing::Size(13, 13);
			this->label28->TabIndex = 85;
			this->label28->Text = L"=";
			this->label28->Visible = false;
			// 
			// label16
			// 
			this->label16->BackColor = System::Drawing::Color::WhiteSmoke;
			this->label16->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label16->Location = System::Drawing::Point(414, 127);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(371, 464);
			this->label16->TabIndex = 73;
			this->label16->Visible = false;
			// 
			// label29
			// 
			this->label29->AutoSize = true;
			this->label29->BackColor = System::Drawing::Color::WhiteSmoke;
			this->label29->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 6, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label29->Location = System::Drawing::Point(519, 282);
			this->label29->Name = L"label29";
			this->label29->Size = System::Drawing::Size(17, 9);
			this->label29->TabIndex = 96;
			this->label29->Text = L"a33";
			this->label29->Visible = false;
			// 
			// label30
			// 
			this->label30->AutoSize = true;
			this->label30->BackColor = System::Drawing::Color::WhiteSmoke;
			this->label30->Location = System::Drawing::Point(549, 262);
			this->label30->Name = L"label30";
			this->label30->Size = System::Drawing::Size(13, 13);
			this->label30->TabIndex = 97;
			this->label30->Text = L"=";
			this->label30->Visible = false;
			// 
			// label31
			// 
			this->label31->AutoSize = true;
			this->label31->BackColor = System::Drawing::Color::WhiteSmoke;
			this->label31->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 6, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label31->Location = System::Drawing::Point(491, 282);
			this->label31->Name = L"label31";
			this->label31->Size = System::Drawing::Size(17, 9);
			this->label31->TabIndex = 95;
			this->label31->Text = L"a32";
			this->label31->Visible = false;
			// 
			// label32
			// 
			this->label32->AutoSize = true;
			this->label32->BackColor = System::Drawing::Color::WhiteSmoke;
			this->label32->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 6, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label32->Location = System::Drawing::Point(464, 282);
			this->label32->Name = L"label32";
			this->label32->Size = System::Drawing::Size(13, 9);
			this->label32->TabIndex = 94;
			this->label32->Text = L"b3";
			this->label32->Visible = false;
			// 
			// label33
			// 
			this->label33->AutoSize = true;
			this->label33->BackColor = System::Drawing::Color::WhiteSmoke;
			this->label33->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 6, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label33->Location = System::Drawing::Point(519, 265);
			this->label33->Name = L"label33";
			this->label33->Size = System::Drawing::Size(17, 9);
			this->label33->TabIndex = 93;
			this->label33->Text = L"a23";
			this->label33->Visible = false;
			// 
			// label34
			// 
			this->label34->AutoSize = true;
			this->label34->BackColor = System::Drawing::Color::WhiteSmoke;
			this->label34->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 6, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label34->Location = System::Drawing::Point(491, 265);
			this->label34->Name = L"label34";
			this->label34->Size = System::Drawing::Size(17, 9);
			this->label34->TabIndex = 92;
			this->label34->Text = L"a22";
			this->label34->Visible = false;
			// 
			// label35
			// 
			this->label35->AutoSize = true;
			this->label35->BackColor = System::Drawing::Color::WhiteSmoke;
			this->label35->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 6, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label35->Location = System::Drawing::Point(464, 265);
			this->label35->Name = L"label35";
			this->label35->Size = System::Drawing::Size(13, 9);
			this->label35->TabIndex = 91;
			this->label35->Text = L"b2";
			this->label35->Visible = false;
			// 
			// label36
			// 
			this->label36->AutoSize = true;
			this->label36->BackColor = System::Drawing::Color::WhiteSmoke;
			this->label36->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 6, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label36->Location = System::Drawing::Point(519, 247);
			this->label36->Name = L"label36";
			this->label36->Size = System::Drawing::Size(17, 9);
			this->label36->TabIndex = 90;
			this->label36->Text = L"a13";
			this->label36->Visible = false;
			// 
			// label37
			// 
			this->label37->AutoSize = true;
			this->label37->BackColor = System::Drawing::Color::WhiteSmoke;
			this->label37->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 6, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label37->Location = System::Drawing::Point(491, 247);
			this->label37->Name = L"label37";
			this->label37->Size = System::Drawing::Size(17, 9);
			this->label37->TabIndex = 89;
			this->label37->Text = L"a12";
			this->label37->Visible = false;
			// 
			// label38
			// 
			this->label38->AutoSize = true;
			this->label38->BackColor = System::Drawing::Color::WhiteSmoke;
			this->label38->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 6, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label38->Location = System::Drawing::Point(464, 247);
			this->label38->Name = L"label38";
			this->label38->Size = System::Drawing::Size(13, 9);
			this->label38->TabIndex = 88;
			this->label38->Text = L"b1";
			this->label38->Visible = false;
			// 
			// label39
			// 
			this->label39->AutoSize = true;
			this->label39->BackColor = System::Drawing::Color::WhiteSmoke;
			this->label39->Font = (gcnew System::Drawing::Font(L"GOST type A", 48, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label39->Location = System::Drawing::Point(440, 240);
			this->label39->Name = L"label39";
			this->label39->Size = System::Drawing::Size(42, 67);
			this->label39->TabIndex = 86;
			this->label39->Text = L"(";
			this->label39->Visible = false;
			// 
			// label40
			// 
			this->label40->AutoSize = true;
			this->label40->BackColor = System::Drawing::Color::WhiteSmoke;
			this->label40->Font = (gcnew System::Drawing::Font(L"GOST type A", 48, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label40->Location = System::Drawing::Point(522, 239);
			this->label40->Name = L"label40";
			this->label40->Size = System::Drawing::Size(42, 67);
			this->label40->TabIndex = 87;
			this->label40->Text = L")";
			this->label40->Visible = false;
			// 
			// label41
			// 
			this->label41->AutoSize = true;
			this->label41->BackColor = System::Drawing::Color::WhiteSmoke;
			this->label41->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 6, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label41->Location = System::Drawing::Point(519, 387);
			this->label41->Name = L"label41";
			this->label41->Size = System::Drawing::Size(17, 9);
			this->label41->TabIndex = 108;
			this->label41->Text = L"a33";
			this->label41->Visible = false;
			// 
			// label42
			// 
			this->label42->AutoSize = true;
			this->label42->BackColor = System::Drawing::Color::WhiteSmoke;
			this->label42->Location = System::Drawing::Point(549, 367);
			this->label42->Name = L"label42";
			this->label42->Size = System::Drawing::Size(13, 13);
			this->label42->TabIndex = 109;
			this->label42->Text = L"=";
			this->label42->Visible = false;
			// 
			// label43
			// 
			this->label43->AutoSize = true;
			this->label43->BackColor = System::Drawing::Color::WhiteSmoke;
			this->label43->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 6, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label43->Location = System::Drawing::Point(491, 387);
			this->label43->Name = L"label43";
			this->label43->Size = System::Drawing::Size(13, 9);
			this->label43->TabIndex = 107;
			this->label43->Text = L"b3";
			this->label43->Visible = false;
			// 
			// label44
			// 
			this->label44->AutoSize = true;
			this->label44->BackColor = System::Drawing::Color::WhiteSmoke;
			this->label44->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 6, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label44->Location = System::Drawing::Point(464, 387);
			this->label44->Name = L"label44";
			this->label44->Size = System::Drawing::Size(17, 9);
			this->label44->TabIndex = 106;
			this->label44->Text = L"a31";
			this->label44->Visible = false;
			// 
			// label45
			// 
			this->label45->AutoSize = true;
			this->label45->BackColor = System::Drawing::Color::WhiteSmoke;
			this->label45->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 6, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label45->Location = System::Drawing::Point(519, 370);
			this->label45->Name = L"label45";
			this->label45->Size = System::Drawing::Size(17, 9);
			this->label45->TabIndex = 105;
			this->label45->Text = L"a23";
			this->label45->Visible = false;
			// 
			// label46
			// 
			this->label46->AutoSize = true;
			this->label46->BackColor = System::Drawing::Color::WhiteSmoke;
			this->label46->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 6, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label46->Location = System::Drawing::Point(491, 370);
			this->label46->Name = L"label46";
			this->label46->Size = System::Drawing::Size(13, 9);
			this->label46->TabIndex = 104;
			this->label46->Text = L"b2";
			this->label46->Visible = false;
			// 
			// label47
			// 
			this->label47->AutoSize = true;
			this->label47->BackColor = System::Drawing::Color::WhiteSmoke;
			this->label47->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 6, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label47->Location = System::Drawing::Point(464, 370);
			this->label47->Name = L"label47";
			this->label47->Size = System::Drawing::Size(17, 9);
			this->label47->TabIndex = 103;
			this->label47->Text = L"a21";
			this->label47->Visible = false;
			// 
			// label48
			// 
			this->label48->AutoSize = true;
			this->label48->BackColor = System::Drawing::Color::WhiteSmoke;
			this->label48->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 6, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label48->Location = System::Drawing::Point(519, 352);
			this->label48->Name = L"label48";
			this->label48->Size = System::Drawing::Size(17, 9);
			this->label48->TabIndex = 102;
			this->label48->Text = L"a13";
			this->label48->Visible = false;
			// 
			// label49
			// 
			this->label49->AutoSize = true;
			this->label49->BackColor = System::Drawing::Color::WhiteSmoke;
			this->label49->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 6, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label49->Location = System::Drawing::Point(491, 352);
			this->label49->Name = L"label49";
			this->label49->Size = System::Drawing::Size(13, 9);
			this->label49->TabIndex = 101;
			this->label49->Text = L"b1";
			this->label49->Visible = false;
			// 
			// label50
			// 
			this->label50->AutoSize = true;
			this->label50->BackColor = System::Drawing::Color::WhiteSmoke;
			this->label50->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 6, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label50->Location = System::Drawing::Point(464, 352);
			this->label50->Name = L"label50";
			this->label50->Size = System::Drawing::Size(17, 9);
			this->label50->TabIndex = 100;
			this->label50->Text = L"a11";
			this->label50->Visible = false;
			// 
			// label51
			// 
			this->label51->AutoSize = true;
			this->label51->BackColor = System::Drawing::Color::WhiteSmoke;
			this->label51->Font = (gcnew System::Drawing::Font(L"GOST type A", 48, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label51->Location = System::Drawing::Point(440, 345);
			this->label51->Name = L"label51";
			this->label51->Size = System::Drawing::Size(42, 67);
			this->label51->TabIndex = 98;
			this->label51->Text = L"(";
			this->label51->Visible = false;
			// 
			// label52
			// 
			this->label52->AutoSize = true;
			this->label52->BackColor = System::Drawing::Color::WhiteSmoke;
			this->label52->Font = (gcnew System::Drawing::Font(L"GOST type A", 48, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label52->Location = System::Drawing::Point(522, 344);
			this->label52->Name = L"label52";
			this->label52->Size = System::Drawing::Size(42, 67);
			this->label52->TabIndex = 99;
			this->label52->Text = L")";
			this->label52->Visible = false;
			// 
			// label53
			// 
			this->label53->AutoSize = true;
			this->label53->BackColor = System::Drawing::Color::WhiteSmoke;
			this->label53->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 6, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label53->Location = System::Drawing::Point(519, 486);
			this->label53->Name = L"label53";
			this->label53->Size = System::Drawing::Size(13, 9);
			this->label53->TabIndex = 120;
			this->label53->Text = L"b3";
			this->label53->Visible = false;
			// 
			// label54
			// 
			this->label54->AutoSize = true;
			this->label54->BackColor = System::Drawing::Color::WhiteSmoke;
			this->label54->Location = System::Drawing::Point(549, 466);
			this->label54->Name = L"label54";
			this->label54->Size = System::Drawing::Size(13, 13);
			this->label54->TabIndex = 121;
			this->label54->Text = L"=";
			this->label54->Visible = false;
			// 
			// label55
			// 
			this->label55->AutoSize = true;
			this->label55->BackColor = System::Drawing::Color::WhiteSmoke;
			this->label55->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 6, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label55->Location = System::Drawing::Point(491, 486);
			this->label55->Name = L"label55";
			this->label55->Size = System::Drawing::Size(17, 9);
			this->label55->TabIndex = 119;
			this->label55->Text = L"a32";
			this->label55->Visible = false;
			// 
			// label56
			// 
			this->label56->AutoSize = true;
			this->label56->BackColor = System::Drawing::Color::WhiteSmoke;
			this->label56->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 6, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label56->Location = System::Drawing::Point(464, 486);
			this->label56->Name = L"label56";
			this->label56->Size = System::Drawing::Size(17, 9);
			this->label56->TabIndex = 118;
			this->label56->Text = L"a31";
			this->label56->Visible = false;
			// 
			// label57
			// 
			this->label57->AutoSize = true;
			this->label57->BackColor = System::Drawing::Color::WhiteSmoke;
			this->label57->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 6, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label57->Location = System::Drawing::Point(519, 469);
			this->label57->Name = L"label57";
			this->label57->Size = System::Drawing::Size(13, 9);
			this->label57->TabIndex = 117;
			this->label57->Text = L"b2";
			this->label57->Visible = false;
			// 
			// label58
			// 
			this->label58->AutoSize = true;
			this->label58->BackColor = System::Drawing::Color::WhiteSmoke;
			this->label58->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 6, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label58->Location = System::Drawing::Point(491, 469);
			this->label58->Name = L"label58";
			this->label58->Size = System::Drawing::Size(17, 9);
			this->label58->TabIndex = 116;
			this->label58->Text = L"a22";
			this->label58->Visible = false;
			// 
			// label59
			// 
			this->label59->AutoSize = true;
			this->label59->BackColor = System::Drawing::Color::WhiteSmoke;
			this->label59->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 6, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label59->Location = System::Drawing::Point(464, 469);
			this->label59->Name = L"label59";
			this->label59->Size = System::Drawing::Size(17, 9);
			this->label59->TabIndex = 115;
			this->label59->Text = L"a21";
			this->label59->Visible = false;
			// 
			// label60
			// 
			this->label60->AutoSize = true;
			this->label60->BackColor = System::Drawing::Color::WhiteSmoke;
			this->label60->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 6, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label60->Location = System::Drawing::Point(519, 451);
			this->label60->Name = L"label60";
			this->label60->Size = System::Drawing::Size(13, 9);
			this->label60->TabIndex = 114;
			this->label60->Text = L"b1";
			this->label60->Visible = false;
			// 
			// label61
			// 
			this->label61->AutoSize = true;
			this->label61->BackColor = System::Drawing::Color::WhiteSmoke;
			this->label61->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 6, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label61->Location = System::Drawing::Point(491, 451);
			this->label61->Name = L"label61";
			this->label61->Size = System::Drawing::Size(17, 9);
			this->label61->TabIndex = 113;
			this->label61->Text = L"a12";
			this->label61->Visible = false;
			// 
			// label62
			// 
			this->label62->AutoSize = true;
			this->label62->BackColor = System::Drawing::Color::WhiteSmoke;
			this->label62->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 6, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label62->Location = System::Drawing::Point(464, 451);
			this->label62->Name = L"label62";
			this->label62->Size = System::Drawing::Size(17, 9);
			this->label62->TabIndex = 112;
			this->label62->Text = L"a11";
			this->label62->Visible = false;
			// 
			// label63
			// 
			this->label63->AutoSize = true;
			this->label63->BackColor = System::Drawing::Color::WhiteSmoke;
			this->label63->Font = (gcnew System::Drawing::Font(L"GOST type A", 48, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label63->Location = System::Drawing::Point(440, 444);
			this->label63->Name = L"label63";
			this->label63->Size = System::Drawing::Size(42, 67);
			this->label63->TabIndex = 110;
			this->label63->Text = L"(";
			this->label63->Visible = false;
			// 
			// label64
			// 
			this->label64->AutoSize = true;
			this->label64->BackColor = System::Drawing::Color::WhiteSmoke;
			this->label64->Font = (gcnew System::Drawing::Font(L"GOST type A", 48, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label64->Location = System::Drawing::Point(522, 443);
			this->label64->Name = L"label64";
			this->label64->Size = System::Drawing::Size(42, 67);
			this->label64->TabIndex = 111;
			this->label64->Text = L")";
			this->label64->Visible = false;
			// 
			// label65
			// 
			this->label65->AutoSize = true;
			this->label65->BackColor = System::Drawing::Color::WhiteSmoke;
			this->label65->Location = System::Drawing::Point(422, 172);
			this->label65->Name = L"label65";
			this->label65->Size = System::Drawing::Size(28, 13);
			this->label65->TabIndex = 122;
			this->label65->Text = L"det=";
			this->label65->Visible = false;
			// 
			// label66
			// 
			this->label66->AutoSize = true;
			this->label66->BackColor = System::Drawing::Color::WhiteSmoke;
			this->label66->Location = System::Drawing::Point(421, 262);
			this->label66->Name = L"label66";
			this->label66->Size = System::Drawing::Size(34, 13);
			this->label66->TabIndex = 123;
			this->label66->Text = L"det1=";
			this->label66->Visible = false;
			// 
			// label67
			// 
			this->label67->AutoSize = true;
			this->label67->BackColor = System::Drawing::Color::WhiteSmoke;
			this->label67->Location = System::Drawing::Point(420, 367);
			this->label67->Name = L"label67";
			this->label67->Size = System::Drawing::Size(34, 13);
			this->label67->TabIndex = 124;
			this->label67->Text = L"det2=";
			this->label67->Visible = false;
			// 
			// label68
			// 
			this->label68->AutoSize = true;
			this->label68->BackColor = System::Drawing::Color::WhiteSmoke;
			this->label68->Location = System::Drawing::Point(420, 466);
			this->label68->Name = L"label68";
			this->label68->Size = System::Drawing::Size(34, 13);
			this->label68->TabIndex = 125;
			this->label68->Text = L"det3=";
			this->label68->Visible = false;
			// 
			// label69
			// 
			this->label69->AutoSize = true;
			this->label69->BackColor = System::Drawing::Color::WhiteSmoke;
			this->label69->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 6, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label69->Location = System::Drawing::Point(564, 175);
			this->label69->Name = L"label69";
			this->label69->Size = System::Drawing::Size(17, 9);
			this->label69->TabIndex = 126;
			this->label69->Text = L"a11";
			this->label69->Visible = false;
			// 
			// label70
			// 
			this->label70->AutoSize = true;
			this->label70->BackColor = System::Drawing::Color::WhiteSmoke;
			this->label70->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 6, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label70->Location = System::Drawing::Point(583, 177);
			this->label70->Name = L"label70";
			this->label70->Size = System::Drawing::Size(8, 9);
			this->label70->TabIndex = 127;
			this->label70->Text = L"*";
			this->label70->Visible = false;
			// 
			// label71
			// 
			this->label71->AutoSize = true;
			this->label71->BackColor = System::Drawing::Color::WhiteSmoke;
			this->label71->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 6, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label71->Location = System::Drawing::Point(597, 175);
			this->label71->Name = L"label71";
			this->label71->Size = System::Drawing::Size(17, 9);
			this->label71->TabIndex = 128;
			this->label71->Text = L"a22";
			this->label71->Visible = false;
			// 
			// label72
			// 
			this->label72->AutoSize = true;
			this->label72->BackColor = System::Drawing::Color::WhiteSmoke;
			this->label72->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 6, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label72->Location = System::Drawing::Point(620, 176);
			this->label72->Name = L"label72";
			this->label72->Size = System::Drawing::Size(8, 9);
			this->label72->TabIndex = 129;
			this->label72->Text = L"*";
			this->label72->Visible = false;
			// 
			// label73
			// 
			this->label73->AutoSize = true;
			this->label73->BackColor = System::Drawing::Color::WhiteSmoke;
			this->label73->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 6, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label73->Location = System::Drawing::Point(634, 175);
			this->label73->Name = L"label73";
			this->label73->Size = System::Drawing::Size(17, 9);
			this->label73->TabIndex = 130;
			this->label73->Text = L"a33";
			this->label73->Visible = false;
			// 
			// label74
			// 
			this->label74->AutoSize = true;
			this->label74->BackColor = System::Drawing::Color::WhiteSmoke;
			this->label74->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 6, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label74->Location = System::Drawing::Point(657, 175);
			this->label74->Name = L"label74";
			this->label74->Size = System::Drawing::Size(10, 9);
			this->label74->TabIndex = 131;
			this->label74->Text = L"+";
			this->label74->Visible = false;
			// 
			// label75
			// 
			this->label75->AutoSize = true;
			this->label75->BackColor = System::Drawing::Color::WhiteSmoke;
			this->label75->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 6, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label75->Location = System::Drawing::Point(673, 175);
			this->label75->Name = L"label75";
			this->label75->Size = System::Drawing::Size(17, 9);
			this->label75->TabIndex = 132;
			this->label75->Text = L"a12";
			this->label75->Visible = false;
			// 
			// label76
			// 
			this->label76->AutoSize = true;
			this->label76->BackColor = System::Drawing::Color::WhiteSmoke;
			this->label76->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 6, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label76->Location = System::Drawing::Point(706, 175);
			this->label76->Name = L"label76";
			this->label76->Size = System::Drawing::Size(17, 9);
			this->label76->TabIndex = 133;
			this->label76->Text = L"a23";
			this->label76->Visible = false;
			// 
			// label77
			// 
			this->label77->AutoSize = true;
			this->label77->BackColor = System::Drawing::Color::WhiteSmoke;
			this->label77->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 6, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label77->Location = System::Drawing::Point(738, 175);
			this->label77->Name = L"label77";
			this->label77->Size = System::Drawing::Size(17, 9);
			this->label77->TabIndex = 134;
			this->label77->Text = L"a31";
			this->label77->Visible = false;
			// 
			// label78
			// 
			this->label78->AutoSize = true;
			this->label78->BackColor = System::Drawing::Color::WhiteSmoke;
			this->label78->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 6, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label78->Location = System::Drawing::Point(597, 196);
			this->label78->Name = L"label78";
			this->label78->Size = System::Drawing::Size(17, 9);
			this->label78->TabIndex = 135;
			this->label78->Text = L"a32";
			this->label78->Visible = false;
			// 
			// label79
			// 
			this->label79->AutoSize = true;
			this->label79->BackColor = System::Drawing::Color::WhiteSmoke;
			this->label79->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 6, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label79->Location = System::Drawing::Point(564, 196);
			this->label79->Name = L"label79";
			this->label79->Size = System::Drawing::Size(17, 9);
			this->label79->TabIndex = 136;
			this->label79->Text = L"a21";
			this->label79->Visible = false;
			// 
			// label80
			// 
			this->label80->AutoSize = true;
			this->label80->BackColor = System::Drawing::Color::WhiteSmoke;
			this->label80->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 6, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label80->Location = System::Drawing::Point(692, 177);
			this->label80->Name = L"label80";
			this->label80->Size = System::Drawing::Size(8, 9);
			this->label80->TabIndex = 137;
			this->label80->Text = L"*";
			this->label80->Visible = false;
			// 
			// label81
			// 
			this->label81->AutoSize = true;
			this->label81->BackColor = System::Drawing::Color::WhiteSmoke;
			this->label81->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 6, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label81->Location = System::Drawing::Point(727, 177);
			this->label81->Name = L"label81";
			this->label81->Size = System::Drawing::Size(8, 9);
			this->label81->TabIndex = 138;
			this->label81->Text = L"*";
			this->label81->Visible = false;
			// 
			// label82
			// 
			this->label82->AutoSize = true;
			this->label82->BackColor = System::Drawing::Color::WhiteSmoke;
			this->label82->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 6, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label82->Location = System::Drawing::Point(761, 175);
			this->label82->Name = L"label82";
			this->label82->Size = System::Drawing::Size(10, 9);
			this->label82->TabIndex = 139;
			this->label82->Text = L"+";
			this->label82->Visible = false;
			// 
			// label83
			// 
			this->label83->AutoSize = true;
			this->label83->BackColor = System::Drawing::Color::WhiteSmoke;
			this->label83->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 6, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label83->Location = System::Drawing::Point(550, 196);
			this->label83->Name = L"label83";
			this->label83->Size = System::Drawing::Size(10, 9);
			this->label83->TabIndex = 140;
			this->label83->Text = L"+";
			this->label83->Visible = false;
			// 
			// label84
			// 
			this->label84->AutoSize = true;
			this->label84->BackColor = System::Drawing::Color::WhiteSmoke;
			this->label84->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 6, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label84->Location = System::Drawing::Point(583, 197);
			this->label84->Name = L"label84";
			this->label84->Size = System::Drawing::Size(8, 9);
			this->label84->TabIndex = 141;
			this->label84->Text = L"*";
			this->label84->Visible = false;
			// 
			// label85
			// 
			this->label85->AutoSize = true;
			this->label85->BackColor = System::Drawing::Color::WhiteSmoke;
			this->label85->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 6, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label85->Location = System::Drawing::Point(634, 196);
			this->label85->Name = L"label85";
			this->label85->Size = System::Drawing::Size(17, 9);
			this->label85->TabIndex = 142;
			this->label85->Text = L"a13";
			this->label85->Visible = false;
			// 
			// label86
			// 
			this->label86->AutoSize = true;
			this->label86->BackColor = System::Drawing::Color::WhiteSmoke;
			this->label86->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 6, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label86->Location = System::Drawing::Point(620, 197);
			this->label86->Name = L"label86";
			this->label86->Size = System::Drawing::Size(8, 9);
			this->label86->TabIndex = 143;
			this->label86->Text = L"*";
			this->label86->Visible = false;
			// 
			// label87
			// 
			this->label87->AutoSize = true;
			this->label87->BackColor = System::Drawing::Color::WhiteSmoke;
			this->label87->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 6, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label87->Location = System::Drawing::Point(657, 196);
			this->label87->Name = L"label87";
			this->label87->Size = System::Drawing::Size(8, 9);
			this->label87->TabIndex = 144;
			this->label87->Text = L"-";
			this->label87->Visible = false;
			// 
			// label88
			// 
			this->label88->AutoSize = true;
			this->label88->BackColor = System::Drawing::Color::WhiteSmoke;
			this->label88->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 6, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label88->Location = System::Drawing::Point(673, 195);
			this->label88->Name = L"label88";
			this->label88->Size = System::Drawing::Size(17, 9);
			this->label88->TabIndex = 145;
			this->label88->Text = L"a13";
			this->label88->Visible = false;
			// 
			// label89
			// 
			this->label89->AutoSize = true;
			this->label89->BackColor = System::Drawing::Color::WhiteSmoke;
			this->label89->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 6, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label89->Location = System::Drawing::Point(706, 195);
			this->label89->Name = L"label89";
			this->label89->Size = System::Drawing::Size(17, 9);
			this->label89->TabIndex = 146;
			this->label89->Text = L"a22";
			this->label89->Visible = false;
			// 
			// label90
			// 
			this->label90->AutoSize = true;
			this->label90->BackColor = System::Drawing::Color::WhiteSmoke;
			this->label90->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 6, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label90->Location = System::Drawing::Point(738, 196);
			this->label90->Name = L"label90";
			this->label90->Size = System::Drawing::Size(17, 9);
			this->label90->TabIndex = 147;
			this->label90->Text = L"a31";
			this->label90->Visible = false;
			// 
			// label91
			// 
			this->label91->AutoSize = true;
			this->label91->BackColor = System::Drawing::Color::WhiteSmoke;
			this->label91->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 6, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label91->Location = System::Drawing::Point(692, 198);
			this->label91->Name = L"label91";
			this->label91->Size = System::Drawing::Size(8, 9);
			this->label91->TabIndex = 148;
			this->label91->Text = L"*";
			this->label91->Visible = false;
			// 
			// label92
			// 
			this->label92->AutoSize = true;
			this->label92->BackColor = System::Drawing::Color::WhiteSmoke;
			this->label92->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 6, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label92->Location = System::Drawing::Point(727, 199);
			this->label92->Name = L"label92";
			this->label92->Size = System::Drawing::Size(8, 9);
			this->label92->TabIndex = 149;
			this->label92->Text = L"*";
			this->label92->Visible = false;
			// 
			// label93
			// 
			this->label93->AutoSize = true;
			this->label93->BackColor = System::Drawing::Color::WhiteSmoke;
			this->label93->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 6, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label93->Location = System::Drawing::Point(564, 216);
			this->label93->Name = L"label93";
			this->label93->Size = System::Drawing::Size(17, 9);
			this->label93->TabIndex = 150;
			this->label93->Text = L"a12";
			this->label93->Visible = false;
			// 
			// label94
			// 
			this->label94->AutoSize = true;
			this->label94->BackColor = System::Drawing::Color::WhiteSmoke;
			this->label94->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 6, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label94->Location = System::Drawing::Point(597, 216);
			this->label94->Name = L"label94";
			this->label94->Size = System::Drawing::Size(17, 9);
			this->label94->TabIndex = 151;
			this->label94->Text = L"a21";
			this->label94->Visible = false;
			// 
			// label95
			// 
			this->label95->AutoSize = true;
			this->label95->BackColor = System::Drawing::Color::WhiteSmoke;
			this->label95->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 6, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label95->Location = System::Drawing::Point(632, 216);
			this->label95->Name = L"label95";
			this->label95->Size = System::Drawing::Size(17, 9);
			this->label95->TabIndex = 152;
			this->label95->Text = L"a33";
			this->label95->Visible = false;
			// 
			// label96
			// 
			this->label96->AutoSize = true;
			this->label96->BackColor = System::Drawing::Color::WhiteSmoke;
			this->label96->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 6, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label96->Location = System::Drawing::Point(583, 217);
			this->label96->Name = L"label96";
			this->label96->Size = System::Drawing::Size(8, 9);
			this->label96->TabIndex = 153;
			this->label96->Text = L"*";
			this->label96->Visible = false;
			// 
			// label97
			// 
			this->label97->AutoSize = true;
			this->label97->BackColor = System::Drawing::Color::WhiteSmoke;
			this->label97->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 6, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label97->Location = System::Drawing::Point(620, 217);
			this->label97->Name = L"label97";
			this->label97->Size = System::Drawing::Size(8, 9);
			this->label97->TabIndex = 154;
			this->label97->Text = L"*";
			this->label97->Visible = false;
			// 
			// label98
			// 
			this->label98->AutoSize = true;
			this->label98->BackColor = System::Drawing::Color::WhiteSmoke;
			this->label98->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 6, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label98->Location = System::Drawing::Point(763, 197);
			this->label98->Name = L"label98";
			this->label98->Size = System::Drawing::Size(8, 9);
			this->label98->TabIndex = 155;
			this->label98->Text = L"-";
			this->label98->Visible = false;
			// 
			// label99
			// 
			this->label99->AutoSize = true;
			this->label99->BackColor = System::Drawing::Color::WhiteSmoke;
			this->label99->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 6, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label99->Location = System::Drawing::Point(551, 216);
			this->label99->Name = L"label99";
			this->label99->Size = System::Drawing::Size(8, 9);
			this->label99->TabIndex = 156;
			this->label99->Text = L"-";
			this->label99->Visible = false;
			// 
			// label100
			// 
			this->label100->AutoSize = true;
			this->label100->BackColor = System::Drawing::Color::WhiteSmoke;
			this->label100->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 6, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label100->Location = System::Drawing::Point(657, 216);
			this->label100->Name = L"label100";
			this->label100->Size = System::Drawing::Size(8, 9);
			this->label100->TabIndex = 157;
			this->label100->Text = L"-";
			this->label100->Visible = false;
			// 
			// label101
			// 
			this->label101->AutoSize = true;
			this->label101->BackColor = System::Drawing::Color::WhiteSmoke;
			this->label101->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 6, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label101->Location = System::Drawing::Point(673, 217);
			this->label101->Name = L"label101";
			this->label101->Size = System::Drawing::Size(17, 9);
			this->label101->TabIndex = 158;
			this->label101->Text = L"a11";
			this->label101->Visible = false;
			// 
			// label102
			// 
			this->label102->AutoSize = true;
			this->label102->BackColor = System::Drawing::Color::WhiteSmoke;
			this->label102->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 6, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label102->Location = System::Drawing::Point(706, 217);
			this->label102->Name = L"label102";
			this->label102->Size = System::Drawing::Size(17, 9);
			this->label102->TabIndex = 159;
			this->label102->Text = L"a23";
			this->label102->Visible = false;
			// 
			// label103
			// 
			this->label103->AutoSize = true;
			this->label103->BackColor = System::Drawing::Color::WhiteSmoke;
			this->label103->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 6, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label103->Location = System::Drawing::Point(738, 217);
			this->label103->Name = L"label103";
			this->label103->Size = System::Drawing::Size(17, 9);
			this->label103->TabIndex = 160;
			this->label103->Text = L"a32";
			this->label103->Visible = false;
			// 
			// label104
			// 
			this->label104->AutoSize = true;
			this->label104->BackColor = System::Drawing::Color::WhiteSmoke;
			this->label104->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 6, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label104->Location = System::Drawing::Point(763, 217);
			this->label104->Name = L"label104";
			this->label104->Size = System::Drawing::Size(10, 9);
			this->label104->TabIndex = 161;
			this->label104->Text = L"=";
			this->label104->Visible = false;
			// 
			// label105
			// 
			this->label105->AutoSize = true;
			this->label105->BackColor = System::Drawing::Color::WhiteSmoke;
			this->label105->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 6, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label105->Location = System::Drawing::Point(549, 231);
			this->label105->Name = L"label105";
			this->label105->Size = System::Drawing::Size(10, 9);
			this->label105->TabIndex = 162;
			this->label105->Text = L"=";
			this->label105->Visible = false;
			// 
			// label106
			// 
			this->label106->AutoSize = true;
			this->label106->BackColor = System::Drawing::Color::WhiteSmoke;
			this->label106->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 6, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label106->Location = System::Drawing::Point(564, 231);
			this->label106->Name = L"label106";
			this->label106->Size = System::Drawing::Size(45, 9);
			this->label106->TabIndex = 163;
			this->label106->Text = L"determinant";
			this->label106->Visible = false;
			// 
			// label107
			// 
			this->label107->AutoSize = true;
			this->label107->BackColor = System::Drawing::Color::WhiteSmoke;
			this->label107->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 6, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label107->Location = System::Drawing::Point(692, 218);
			this->label107->Name = L"label107";
			this->label107->Size = System::Drawing::Size(8, 9);
			this->label107->TabIndex = 164;
			this->label107->Text = L"*";
			this->label107->Visible = false;
			// 
			// label108
			// 
			this->label108->AutoSize = true;
			this->label108->BackColor = System::Drawing::Color::WhiteSmoke;
			this->label108->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 6, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label108->Location = System::Drawing::Point(727, 218);
			this->label108->Name = L"label108";
			this->label108->Size = System::Drawing::Size(8, 9);
			this->label108->TabIndex = 165;
			this->label108->Text = L"*";
			this->label108->Visible = false;
			// 
			// label109
			// 
			this->label109->AutoSize = true;
			this->label109->BackColor = System::Drawing::Color::WhiteSmoke;
			this->label109->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 6, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label109->Location = System::Drawing::Point(564, 266);
			this->label109->Name = L"label109";
			this->label109->Size = System::Drawing::Size(17, 9);
			this->label109->TabIndex = 166;
			this->label109->Text = L"b11";
			this->label109->Visible = false;
			// 
			// label110
			// 
			this->label110->AutoSize = true;
			this->label110->BackColor = System::Drawing::Color::WhiteSmoke;
			this->label110->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 6, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label110->Location = System::Drawing::Point(583, 266);
			this->label110->Name = L"label110";
			this->label110->Size = System::Drawing::Size(8, 9);
			this->label110->TabIndex = 167;
			this->label110->Text = L"*";
			this->label110->Visible = false;
			// 
			// label111
			// 
			this->label111->AutoSize = true;
			this->label111->BackColor = System::Drawing::Color::WhiteSmoke;
			this->label111->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 6, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label111->Location = System::Drawing::Point(597, 265);
			this->label111->Name = L"label111";
			this->label111->Size = System::Drawing::Size(17, 9);
			this->label111->TabIndex = 168;
			this->label111->Text = L"a22";
			this->label111->Visible = false;
			// 
			// label112
			// 
			this->label112->AutoSize = true;
			this->label112->BackColor = System::Drawing::Color::WhiteSmoke;
			this->label112->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 6, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label112->Location = System::Drawing::Point(620, 265);
			this->label112->Name = L"label112";
			this->label112->Size = System::Drawing::Size(8, 9);
			this->label112->TabIndex = 169;
			this->label112->Text = L"*";
			this->label112->Visible = false;
			// 
			// label113
			// 
			this->label113->AutoSize = true;
			this->label113->BackColor = System::Drawing::Color::WhiteSmoke;
			this->label113->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 6, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label113->Location = System::Drawing::Point(634, 265);
			this->label113->Name = L"label113";
			this->label113->Size = System::Drawing::Size(17, 9);
			this->label113->TabIndex = 170;
			this->label113->Text = L"a33";
			this->label113->Visible = false;
			// 
			// label115
			// 
			this->label115->AutoSize = true;
			this->label115->BackColor = System::Drawing::Color::WhiteSmoke;
			this->label115->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 6, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label115->Location = System::Drawing::Point(657, 265);
			this->label115->Name = L"label115";
			this->label115->Size = System::Drawing::Size(10, 9);
			this->label115->TabIndex = 172;
			this->label115->Text = L"+";
			this->label115->Visible = false;
			// 
			// label116
			// 
			this->label116->AutoSize = true;
			this->label116->BackColor = System::Drawing::Color::WhiteSmoke;
			this->label116->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 6, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label116->Location = System::Drawing::Point(673, 265);
			this->label116->Name = L"label116";
			this->label116->Size = System::Drawing::Size(17, 9);
			this->label116->TabIndex = 173;
			this->label116->Text = L"a12";
			this->label116->Visible = false;
			// 
			// label117
			// 
			this->label117->AutoSize = true;
			this->label117->BackColor = System::Drawing::Color::WhiteSmoke;
			this->label117->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 6, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label117->Location = System::Drawing::Point(696, 265);
			this->label117->Name = L"label117";
			this->label117->Size = System::Drawing::Size(8, 9);
			this->label117->TabIndex = 174;
			this->label117->Text = L"*";
			this->label117->Visible = false;
			// 
			// label118
			// 
			this->label118->AutoSize = true;
			this->label118->BackColor = System::Drawing::Color::WhiteSmoke;
			this->label118->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 6, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label118->Location = System::Drawing::Point(706, 265);
			this->label118->Name = L"label118";
			this->label118->Size = System::Drawing::Size(17, 9);
			this->label118->TabIndex = 175;
			this->label118->Text = L"a23";
			this->label118->Visible = false;
			// 
			// label119
			// 
			this->label119->AutoSize = true;
			this->label119->BackColor = System::Drawing::Color::WhiteSmoke;
			this->label119->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 6, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label119->Location = System::Drawing::Point(727, 265);
			this->label119->Name = L"label119";
			this->label119->Size = System::Drawing::Size(8, 9);
			this->label119->TabIndex = 176;
			this->label119->Text = L"*";
			this->label119->Visible = false;
			// 
			// label120
			// 
			this->label120->AutoSize = true;
			this->label120->BackColor = System::Drawing::Color::WhiteSmoke;
			this->label120->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 6, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label120->Location = System::Drawing::Point(738, 264);
			this->label120->Name = L"label120";
			this->label120->Size = System::Drawing::Size(17, 9);
			this->label120->TabIndex = 177;
			this->label120->Text = L"b33";
			this->label120->Visible = false;
			// 
			// label121
			// 
			this->label121->AutoSize = true;
			this->label121->BackColor = System::Drawing::Color::WhiteSmoke;
			this->label121->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 6, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label121->Location = System::Drawing::Point(761, 264);
			this->label121->Name = L"label121";
			this->label121->Size = System::Drawing::Size(10, 9);
			this->label121->TabIndex = 178;
			this->label121->Text = L"+";
			this->label121->Visible = false;
			// 
			// label122
			// 
			this->label122->AutoSize = true;
			this->label122->BackColor = System::Drawing::Color::WhiteSmoke;
			this->label122->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 6, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label122->Location = System::Drawing::Point(549, 286);
			this->label122->Name = L"label122";
			this->label122->Size = System::Drawing::Size(10, 9);
			this->label122->TabIndex = 179;
			this->label122->Text = L"+";
			this->label122->Visible = false;
			// 
			// label123
			// 
			this->label123->AutoSize = true;
			this->label123->BackColor = System::Drawing::Color::WhiteSmoke;
			this->label123->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 6, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label123->Location = System::Drawing::Point(564, 286);
			this->label123->Name = L"label123";
			this->label123->Size = System::Drawing::Size(17, 9);
			this->label123->TabIndex = 180;
			this->label123->Text = L"b22";
			this->label123->Visible = false;
			// 
			// label124
			// 
			this->label124->AutoSize = true;
			this->label124->BackColor = System::Drawing::Color::WhiteSmoke;
			this->label124->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 6, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label124->Location = System::Drawing::Point(597, 286);
			this->label124->Name = L"label124";
			this->label124->Size = System::Drawing::Size(17, 9);
			this->label124->TabIndex = 181;
			this->label124->Text = L"a32";
			this->label124->Visible = false;
			// 
			// label125
			// 
			this->label125->AutoSize = true;
			this->label125->BackColor = System::Drawing::Color::WhiteSmoke;
			this->label125->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 6, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label125->Location = System::Drawing::Point(583, 286);
			this->label125->Name = L"label125";
			this->label125->Size = System::Drawing::Size(8, 9);
			this->label125->TabIndex = 182;
			this->label125->Text = L"*";
			this->label125->Visible = false;
			// 
			// label126
			// 
			this->label126->AutoSize = true;
			this->label126->BackColor = System::Drawing::Color::WhiteSmoke;
			this->label126->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 6, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label126->Location = System::Drawing::Point(634, 286);
			this->label126->Name = L"label126";
			this->label126->Size = System::Drawing::Size(17, 9);
			this->label126->TabIndex = 183;
			this->label126->Text = L"a13";
			this->label126->Visible = false;
			// 
			// label127
			// 
			this->label127->AutoSize = true;
			this->label127->BackColor = System::Drawing::Color::WhiteSmoke;
			this->label127->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 6, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label127->Location = System::Drawing::Point(620, 286);
			this->label127->Name = L"label127";
			this->label127->Size = System::Drawing::Size(8, 9);
			this->label127->TabIndex = 184;
			this->label127->Text = L"*";
			this->label127->Visible = false;
			// 
			// label128
			// 
			this->label128->AutoSize = true;
			this->label128->BackColor = System::Drawing::Color::WhiteSmoke;
			this->label128->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 6, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label128->Location = System::Drawing::Point(658, 285);
			this->label128->Name = L"label128";
			this->label128->Size = System::Drawing::Size(8, 9);
			this->label128->TabIndex = 185;
			this->label128->Text = L"-";
			this->label128->Visible = false;
			// 
			// label129
			// 
			this->label129->AutoSize = true;
			this->label129->BackColor = System::Drawing::Color::WhiteSmoke;
			this->label129->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 6, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label129->Location = System::Drawing::Point(672, 286);
			this->label129->Name = L"label129";
			this->label129->Size = System::Drawing::Size(17, 9);
			this->label129->TabIndex = 186;
			this->label129->Text = L"a13";
			this->label129->Visible = false;
			// 
			// label130
			// 
			this->label130->AutoSize = true;
			this->label130->BackColor = System::Drawing::Color::WhiteSmoke;
			this->label130->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 6, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label130->Location = System::Drawing::Point(696, 286);
			this->label130->Name = L"label130";
			this->label130->Size = System::Drawing::Size(8, 9);
			this->label130->TabIndex = 187;
			this->label130->Text = L"*";
			this->label130->Visible = false;
			// 
			// label131
			// 
			this->label131->AutoSize = true;
			this->label131->BackColor = System::Drawing::Color::WhiteSmoke;
			this->label131->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 6, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label131->Location = System::Drawing::Point(706, 286);
			this->label131->Name = L"label131";
			this->label131->Size = System::Drawing::Size(17, 9);
			this->label131->TabIndex = 188;
			this->label131->Text = L"a22";
			this->label131->Visible = false;
			// 
			// label132
			// 
			this->label132->AutoSize = true;
			this->label132->BackColor = System::Drawing::Color::WhiteSmoke;
			this->label132->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 6, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label132->Location = System::Drawing::Point(727, 286);
			this->label132->Name = L"label132";
			this->label132->Size = System::Drawing::Size(8, 9);
			this->label132->TabIndex = 189;
			this->label132->Text = L"*";
			this->label132->Visible = false;
			// 
			// label133
			// 
			this->label133->AutoSize = true;
			this->label133->BackColor = System::Drawing::Color::WhiteSmoke;
			this->label133->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 6, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label133->Location = System::Drawing::Point(738, 286);
			this->label133->Name = L"label133";
			this->label133->Size = System::Drawing::Size(17, 9);
			this->label133->TabIndex = 190;
			this->label133->Text = L"b33";
			this->label133->Visible = false;
			// 
			// label134
			// 
			this->label134->AutoSize = true;
			this->label134->BackColor = System::Drawing::Color::WhiteSmoke;
			this->label134->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 6, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label134->Location = System::Drawing::Point(763, 286);
			this->label134->Name = L"label134";
			this->label134->Size = System::Drawing::Size(8, 9);
			this->label134->TabIndex = 191;
			this->label134->Text = L"-";
			this->label134->Visible = false;
			// 
			// label135
			// 
			this->label135->AutoSize = true;
			this->label135->BackColor = System::Drawing::Color::WhiteSmoke;
			this->label135->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 6, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label135->Location = System::Drawing::Point(549, 306);
			this->label135->Name = L"label135";
			this->label135->Size = System::Drawing::Size(8, 9);
			this->label135->TabIndex = 192;
			this->label135->Text = L"-";
			this->label135->Visible = false;
			// 
			// label136
			// 
			this->label136->AutoSize = true;
			this->label136->BackColor = System::Drawing::Color::WhiteSmoke;
			this->label136->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 6, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label136->Location = System::Drawing::Point(564, 306);
			this->label136->Name = L"label136";
			this->label136->Size = System::Drawing::Size(17, 9);
			this->label136->TabIndex = 193;
			this->label136->Text = L"a12";
			this->label136->Visible = false;
			// 
			// label138
			// 
			this->label138->AutoSize = true;
			this->label138->BackColor = System::Drawing::Color::WhiteSmoke;
			this->label138->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 6, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label138->Location = System::Drawing::Point(583, 306);
			this->label138->Name = L"label138";
			this->label138->Size = System::Drawing::Size(8, 9);
			this->label138->TabIndex = 195;
			this->label138->Text = L"*";
			this->label138->Visible = false;
			// 
			// label139
			// 
			this->label139->AutoSize = true;
			this->label139->BackColor = System::Drawing::Color::WhiteSmoke;
			this->label139->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 6, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label139->Location = System::Drawing::Point(597, 306);
			this->label139->Name = L"label139";
			this->label139->Size = System::Drawing::Size(17, 9);
			this->label139->TabIndex = 196;
			this->label139->Text = L"b22";
			this->label139->Visible = false;
			// 
			// label140
			// 
			this->label140->AutoSize = true;
			this->label140->BackColor = System::Drawing::Color::WhiteSmoke;
			this->label140->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 6, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label140->Location = System::Drawing::Point(634, 306);
			this->label140->Name = L"label140";
			this->label140->Size = System::Drawing::Size(17, 9);
			this->label140->TabIndex = 197;
			this->label140->Text = L"a33";
			this->label140->Visible = false;
			// 
			// label141
			// 
			this->label141->AutoSize = true;
			this->label141->BackColor = System::Drawing::Color::WhiteSmoke;
			this->label141->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 6, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label141->Location = System::Drawing::Point(620, 306);
			this->label141->Name = L"label141";
			this->label141->Size = System::Drawing::Size(8, 9);
			this->label141->TabIndex = 198;
			this->label141->Text = L"*";
			this->label141->Visible = false;
			// 
			// label142
			// 
			this->label142->AutoSize = true;
			this->label142->BackColor = System::Drawing::Color::WhiteSmoke;
			this->label142->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 6, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label142->Location = System::Drawing::Point(658, 306);
			this->label142->Name = L"label142";
			this->label142->Size = System::Drawing::Size(8, 9);
			this->label142->TabIndex = 199;
			this->label142->Text = L"-";
			this->label142->Visible = false;
			// 
			// label114
			// 
			this->label114->AutoSize = true;
			this->label114->BackColor = System::Drawing::Color::WhiteSmoke;
			this->label114->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 6, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label114->Location = System::Drawing::Point(673, 306);
			this->label114->Name = L"label114";
			this->label114->Size = System::Drawing::Size(17, 9);
			this->label114->TabIndex = 200;
			this->label114->Text = L"b11";
			this->label114->Visible = false;
			// 
			// label137
			// 
			this->label137->AutoSize = true;
			this->label137->BackColor = System::Drawing::Color::WhiteSmoke;
			this->label137->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 6, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label137->Location = System::Drawing::Point(696, 306);
			this->label137->Name = L"label137";
			this->label137->Size = System::Drawing::Size(8, 9);
			this->label137->TabIndex = 201;
			this->label137->Text = L"*";
			this->label137->Visible = false;
			// 
			// label143
			// 
			this->label143->AutoSize = true;
			this->label143->BackColor = System::Drawing::Color::WhiteSmoke;
			this->label143->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 6, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label143->Location = System::Drawing::Point(706, 306);
			this->label143->Name = L"label143";
			this->label143->Size = System::Drawing::Size(17, 9);
			this->label143->TabIndex = 202;
			this->label143->Text = L"a23";
			this->label143->Visible = false;
			// 
			// label144
			// 
			this->label144->AutoSize = true;
			this->label144->BackColor = System::Drawing::Color::WhiteSmoke;
			this->label144->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 6, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label144->Location = System::Drawing::Point(727, 306);
			this->label144->Name = L"label144";
			this->label144->Size = System::Drawing::Size(8, 9);
			this->label144->TabIndex = 203;
			this->label144->Text = L"*";
			this->label144->Visible = false;
			// 
			// label145
			// 
			this->label145->AutoSize = true;
			this->label145->BackColor = System::Drawing::Color::WhiteSmoke;
			this->label145->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 6, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label145->Location = System::Drawing::Point(738, 306);
			this->label145->Name = L"label145";
			this->label145->Size = System::Drawing::Size(17, 9);
			this->label145->TabIndex = 204;
			this->label145->Text = L"a32";
			this->label145->Visible = false;
			// 
			// label146
			// 
			this->label146->AutoSize = true;
			this->label146->BackColor = System::Drawing::Color::WhiteSmoke;
			this->label146->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 6, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label146->Location = System::Drawing::Point(761, 306);
			this->label146->Name = L"label146";
			this->label146->Size = System::Drawing::Size(10, 9);
			this->label146->TabIndex = 205;
			this->label146->Text = L"=";
			this->label146->Visible = false;
			// 
			// label147
			// 
			this->label147->AutoSize = true;
			this->label147->BackColor = System::Drawing::Color::WhiteSmoke;
			this->label147->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 6, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label147->Location = System::Drawing::Point(549, 324);
			this->label147->Name = L"label147";
			this->label147->Size = System::Drawing::Size(10, 9);
			this->label147->TabIndex = 206;
			this->label147->Text = L"=";
			this->label147->Visible = false;
			// 
			// label148
			// 
			this->label148->AutoSize = true;
			this->label148->BackColor = System::Drawing::Color::WhiteSmoke;
			this->label148->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 6, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label148->Location = System::Drawing::Point(564, 323);
			this->label148->Name = L"label148";
			this->label148->Size = System::Drawing::Size(49, 9);
			this->label148->TabIndex = 207;
			this->label148->Text = L"determinant2";
			this->label148->Visible = false;
			// 
			// label149
			// 
			this->label149->AutoSize = true;
			this->label149->BackColor = System::Drawing::Color::WhiteSmoke;
			this->label149->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 6, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label149->Location = System::Drawing::Point(564, 428);
			this->label149->Name = L"label149";
			this->label149->Size = System::Drawing::Size(49, 9);
			this->label149->TabIndex = 247;
			this->label149->Text = L"determinant3";
			this->label149->Visible = false;
			// 
			// label150
			// 
			this->label150->AutoSize = true;
			this->label150->BackColor = System::Drawing::Color::WhiteSmoke;
			this->label150->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 6, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label150->Location = System::Drawing::Point(549, 429);
			this->label150->Name = L"label150";
			this->label150->Size = System::Drawing::Size(10, 9);
			this->label150->TabIndex = 246;
			this->label150->Text = L"=";
			this->label150->Visible = false;
			// 
			// label151
			// 
			this->label151->AutoSize = true;
			this->label151->BackColor = System::Drawing::Color::WhiteSmoke;
			this->label151->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 6, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label151->Location = System::Drawing::Point(761, 411);
			this->label151->Name = L"label151";
			this->label151->Size = System::Drawing::Size(10, 9);
			this->label151->TabIndex = 245;
			this->label151->Text = L"=";
			this->label151->Visible = false;
			// 
			// label152
			// 
			this->label152->AutoSize = true;
			this->label152->BackColor = System::Drawing::Color::WhiteSmoke;
			this->label152->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 6, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label152->Location = System::Drawing::Point(738, 411);
			this->label152->Name = L"label152";
			this->label152->Size = System::Drawing::Size(17, 9);
			this->label152->TabIndex = 244;
			this->label152->Text = L"b33";
			this->label152->Visible = false;
			// 
			// label153
			// 
			this->label153->AutoSize = true;
			this->label153->BackColor = System::Drawing::Color::WhiteSmoke;
			this->label153->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 6, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label153->Location = System::Drawing::Point(727, 411);
			this->label153->Name = L"label153";
			this->label153->Size = System::Drawing::Size(8, 9);
			this->label153->TabIndex = 243;
			this->label153->Text = L"*";
			this->label153->Visible = false;
			// 
			// label154
			// 
			this->label154->AutoSize = true;
			this->label154->BackColor = System::Drawing::Color::WhiteSmoke;
			this->label154->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 6, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label154->Location = System::Drawing::Point(706, 411);
			this->label154->Name = L"label154";
			this->label154->Size = System::Drawing::Size(17, 9);
			this->label154->TabIndex = 242;
			this->label154->Text = L"a23";
			this->label154->Visible = false;
			// 
			// label155
			// 
			this->label155->AutoSize = true;
			this->label155->BackColor = System::Drawing::Color::WhiteSmoke;
			this->label155->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 6, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label155->Location = System::Drawing::Point(696, 411);
			this->label155->Name = L"label155";
			this->label155->Size = System::Drawing::Size(8, 9);
			this->label155->TabIndex = 241;
			this->label155->Text = L"*";
			this->label155->Visible = false;
			// 
			// label156
			// 
			this->label156->AutoSize = true;
			this->label156->BackColor = System::Drawing::Color::WhiteSmoke;
			this->label156->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 6, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label156->Location = System::Drawing::Point(673, 411);
			this->label156->Name = L"label156";
			this->label156->Size = System::Drawing::Size(17, 9);
			this->label156->TabIndex = 240;
			this->label156->Text = L"a11";
			this->label156->Visible = false;
			// 
			// label157
			// 
			this->label157->AutoSize = true;
			this->label157->BackColor = System::Drawing::Color::WhiteSmoke;
			this->label157->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 6, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label157->Location = System::Drawing::Point(658, 411);
			this->label157->Name = L"label157";
			this->label157->Size = System::Drawing::Size(8, 9);
			this->label157->TabIndex = 239;
			this->label157->Text = L"-";
			this->label157->Visible = false;
			// 
			// label158
			// 
			this->label158->AutoSize = true;
			this->label158->BackColor = System::Drawing::Color::WhiteSmoke;
			this->label158->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 6, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label158->Location = System::Drawing::Point(620, 411);
			this->label158->Name = L"label158";
			this->label158->Size = System::Drawing::Size(8, 9);
			this->label158->TabIndex = 238;
			this->label158->Text = L"*";
			this->label158->Visible = false;
			// 
			// label159
			// 
			this->label159->AutoSize = true;
			this->label159->BackColor = System::Drawing::Color::WhiteSmoke;
			this->label159->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 6, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label159->Location = System::Drawing::Point(634, 411);
			this->label159->Name = L"label159";
			this->label159->Size = System::Drawing::Size(17, 9);
			this->label159->TabIndex = 237;
			this->label159->Text = L"a33";
			this->label159->Visible = false;
			// 
			// label160
			// 
			this->label160->AutoSize = true;
			this->label160->BackColor = System::Drawing::Color::WhiteSmoke;
			this->label160->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 6, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label160->Location = System::Drawing::Point(597, 411);
			this->label160->Name = L"label160";
			this->label160->Size = System::Drawing::Size(17, 9);
			this->label160->TabIndex = 236;
			this->label160->Text = L"a21";
			this->label160->Visible = false;
			// 
			// label161
			// 
			this->label161->AutoSize = true;
			this->label161->BackColor = System::Drawing::Color::WhiteSmoke;
			this->label161->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 6, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label161->Location = System::Drawing::Point(583, 411);
			this->label161->Name = L"label161";
			this->label161->Size = System::Drawing::Size(8, 9);
			this->label161->TabIndex = 235;
			this->label161->Text = L"*";
			this->label161->Visible = false;
			// 
			// label162
			// 
			this->label162->AutoSize = true;
			this->label162->BackColor = System::Drawing::Color::WhiteSmoke;
			this->label162->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 6, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label162->Location = System::Drawing::Point(564, 411);
			this->label162->Name = L"label162";
			this->label162->Size = System::Drawing::Size(17, 9);
			this->label162->TabIndex = 234;
			this->label162->Text = L"b11";
			this->label162->Visible = false;
			// 
			// label163
			// 
			this->label163->AutoSize = true;
			this->label163->BackColor = System::Drawing::Color::WhiteSmoke;
			this->label163->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 6, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label163->Location = System::Drawing::Point(549, 411);
			this->label163->Name = L"label163";
			this->label163->Size = System::Drawing::Size(8, 9);
			this->label163->TabIndex = 233;
			this->label163->Text = L"-";
			this->label163->Visible = false;
			// 
			// label164
			// 
			this->label164->AutoSize = true;
			this->label164->BackColor = System::Drawing::Color::WhiteSmoke;
			this->label164->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 6, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label164->Location = System::Drawing::Point(763, 391);
			this->label164->Name = L"label164";
			this->label164->Size = System::Drawing::Size(8, 9);
			this->label164->TabIndex = 232;
			this->label164->Text = L"-";
			this->label164->Visible = false;
			// 
			// label165
			// 
			this->label165->AutoSize = true;
			this->label165->BackColor = System::Drawing::Color::WhiteSmoke;
			this->label165->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 6, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label165->Location = System::Drawing::Point(738, 391);
			this->label165->Name = L"label165";
			this->label165->Size = System::Drawing::Size(17, 9);
			this->label165->TabIndex = 231;
			this->label165->Text = L"a31";
			this->label165->Visible = false;
			// 
			// label166
			// 
			this->label166->AutoSize = true;
			this->label166->BackColor = System::Drawing::Color::WhiteSmoke;
			this->label166->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 6, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label166->Location = System::Drawing::Point(727, 391);
			this->label166->Name = L"label166";
			this->label166->Size = System::Drawing::Size(8, 9);
			this->label166->TabIndex = 230;
			this->label166->Text = L"*";
			this->label166->Visible = false;
			// 
			// label167
			// 
			this->label167->AutoSize = true;
			this->label167->BackColor = System::Drawing::Color::WhiteSmoke;
			this->label167->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 6, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label167->Location = System::Drawing::Point(706, 391);
			this->label167->Name = L"label167";
			this->label167->Size = System::Drawing::Size(17, 9);
			this->label167->TabIndex = 229;
			this->label167->Text = L"b22";
			this->label167->Visible = false;
			// 
			// label168
			// 
			this->label168->AutoSize = true;
			this->label168->BackColor = System::Drawing::Color::WhiteSmoke;
			this->label168->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 6, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label168->Location = System::Drawing::Point(696, 391);
			this->label168->Name = L"label168";
			this->label168->Size = System::Drawing::Size(8, 9);
			this->label168->TabIndex = 228;
			this->label168->Text = L"*";
			this->label168->Visible = false;
			// 
			// label169
			// 
			this->label169->AutoSize = true;
			this->label169->BackColor = System::Drawing::Color::WhiteSmoke;
			this->label169->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 6, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label169->Location = System::Drawing::Point(672, 391);
			this->label169->Name = L"label169";
			this->label169->Size = System::Drawing::Size(17, 9);
			this->label169->TabIndex = 227;
			this->label169->Text = L"a13";
			this->label169->Visible = false;
			// 
			// label170
			// 
			this->label170->AutoSize = true;
			this->label170->BackColor = System::Drawing::Color::WhiteSmoke;
			this->label170->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 6, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label170->Location = System::Drawing::Point(658, 390);
			this->label170->Name = L"label170";
			this->label170->Size = System::Drawing::Size(8, 9);
			this->label170->TabIndex = 226;
			this->label170->Text = L"-";
			this->label170->Visible = false;
			// 
			// label171
			// 
			this->label171->AutoSize = true;
			this->label171->BackColor = System::Drawing::Color::WhiteSmoke;
			this->label171->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 6, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label171->Location = System::Drawing::Point(620, 391);
			this->label171->Name = L"label171";
			this->label171->Size = System::Drawing::Size(8, 9);
			this->label171->TabIndex = 225;
			this->label171->Text = L"*";
			this->label171->Visible = false;
			// 
			// label172
			// 
			this->label172->AutoSize = true;
			this->label172->BackColor = System::Drawing::Color::WhiteSmoke;
			this->label172->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 6, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label172->Location = System::Drawing::Point(634, 391);
			this->label172->Name = L"label172";
			this->label172->Size = System::Drawing::Size(17, 9);
			this->label172->TabIndex = 224;
			this->label172->Text = L"a13";
			this->label172->Visible = false;
			// 
			// label173
			// 
			this->label173->AutoSize = true;
			this->label173->BackColor = System::Drawing::Color::WhiteSmoke;
			this->label173->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 6, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label173->Location = System::Drawing::Point(583, 391);
			this->label173->Name = L"label173";
			this->label173->Size = System::Drawing::Size(8, 9);
			this->label173->TabIndex = 223;
			this->label173->Text = L"*";
			this->label173->Visible = false;
			// 
			// label174
			// 
			this->label174->AutoSize = true;
			this->label174->BackColor = System::Drawing::Color::WhiteSmoke;
			this->label174->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 6, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label174->Location = System::Drawing::Point(597, 391);
			this->label174->Name = L"label174";
			this->label174->Size = System::Drawing::Size(17, 9);
			this->label174->TabIndex = 222;
			this->label174->Text = L"b33";
			this->label174->Visible = false;
			// 
			// label175
			// 
			this->label175->AutoSize = true;
			this->label175->BackColor = System::Drawing::Color::WhiteSmoke;
			this->label175->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 6, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label175->Location = System::Drawing::Point(564, 391);
			this->label175->Name = L"label175";
			this->label175->Size = System::Drawing::Size(17, 9);
			this->label175->TabIndex = 221;
			this->label175->Text = L"a21";
			this->label175->Visible = false;
			// 
			// label176
			// 
			this->label176->AutoSize = true;
			this->label176->BackColor = System::Drawing::Color::WhiteSmoke;
			this->label176->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 6, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label176->Location = System::Drawing::Point(549, 391);
			this->label176->Name = L"label176";
			this->label176->Size = System::Drawing::Size(10, 9);
			this->label176->TabIndex = 220;
			this->label176->Text = L"+";
			this->label176->Visible = false;
			// 
			// label177
			// 
			this->label177->AutoSize = true;
			this->label177->BackColor = System::Drawing::Color::WhiteSmoke;
			this->label177->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 6, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label177->Location = System::Drawing::Point(761, 369);
			this->label177->Name = L"label177";
			this->label177->Size = System::Drawing::Size(10, 9);
			this->label177->TabIndex = 219;
			this->label177->Text = L"+";
			this->label177->Visible = false;
			// 
			// label178
			// 
			this->label178->AutoSize = true;
			this->label178->BackColor = System::Drawing::Color::WhiteSmoke;
			this->label178->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 6, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label178->Location = System::Drawing::Point(738, 369);
			this->label178->Name = L"label178";
			this->label178->Size = System::Drawing::Size(17, 9);
			this->label178->TabIndex = 218;
			this->label178->Text = L"a31";
			this->label178->Visible = false;
			// 
			// label179
			// 
			this->label179->AutoSize = true;
			this->label179->BackColor = System::Drawing::Color::WhiteSmoke;
			this->label179->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 6, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label179->Location = System::Drawing::Point(727, 370);
			this->label179->Name = L"label179";
			this->label179->Size = System::Drawing::Size(8, 9);
			this->label179->TabIndex = 217;
			this->label179->Text = L"*";
			this->label179->Visible = false;
			// 
			// label180
			// 
			this->label180->AutoSize = true;
			this->label180->BackColor = System::Drawing::Color::WhiteSmoke;
			this->label180->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 6, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label180->Location = System::Drawing::Point(706, 370);
			this->label180->Name = L"label180";
			this->label180->Size = System::Drawing::Size(17, 9);
			this->label180->TabIndex = 216;
			this->label180->Text = L"a23";
			this->label180->Visible = false;
			// 
			// label181
			// 
			this->label181->AutoSize = true;
			this->label181->BackColor = System::Drawing::Color::WhiteSmoke;
			this->label181->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 6, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label181->Location = System::Drawing::Point(696, 370);
			this->label181->Name = L"label181";
			this->label181->Size = System::Drawing::Size(8, 9);
			this->label181->TabIndex = 215;
			this->label181->Text = L"*";
			this->label181->Visible = false;
			// 
			// label182
			// 
			this->label182->AutoSize = true;
			this->label182->BackColor = System::Drawing::Color::WhiteSmoke;
			this->label182->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 6, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label182->Location = System::Drawing::Point(673, 370);
			this->label182->Name = L"label182";
			this->label182->Size = System::Drawing::Size(17, 9);
			this->label182->TabIndex = 214;
			this->label182->Text = L"b11";
			this->label182->Visible = false;
			// 
			// label183
			// 
			this->label183->AutoSize = true;
			this->label183->BackColor = System::Drawing::Color::WhiteSmoke;
			this->label183->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 6, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label183->Location = System::Drawing::Point(657, 370);
			this->label183->Name = L"label183";
			this->label183->Size = System::Drawing::Size(10, 9);
			this->label183->TabIndex = 213;
			this->label183->Text = L"+";
			this->label183->Visible = false;
			// 
			// label184
			// 
			this->label184->AutoSize = true;
			this->label184->BackColor = System::Drawing::Color::WhiteSmoke;
			this->label184->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 6, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label184->Location = System::Drawing::Point(634, 370);
			this->label184->Name = L"label184";
			this->label184->Size = System::Drawing::Size(17, 9);
			this->label184->TabIndex = 212;
			this->label184->Text = L"a33";
			this->label184->Visible = false;
			// 
			// label185
			// 
			this->label185->AutoSize = true;
			this->label185->BackColor = System::Drawing::Color::WhiteSmoke;
			this->label185->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 6, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label185->Location = System::Drawing::Point(620, 370);
			this->label185->Name = L"label185";
			this->label185->Size = System::Drawing::Size(8, 9);
			this->label185->TabIndex = 211;
			this->label185->Text = L"*";
			this->label185->Visible = false;
			// 
			// label186
			// 
			this->label186->AutoSize = true;
			this->label186->BackColor = System::Drawing::Color::WhiteSmoke;
			this->label186->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 6, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label186->Location = System::Drawing::Point(597, 370);
			this->label186->Name = L"label186";
			this->label186->Size = System::Drawing::Size(17, 9);
			this->label186->TabIndex = 210;
			this->label186->Text = L"b22";
			this->label186->Visible = false;
			// 
			// label187
			// 
			this->label187->AutoSize = true;
			this->label187->BackColor = System::Drawing::Color::WhiteSmoke;
			this->label187->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 6, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label187->Location = System::Drawing::Point(583, 371);
			this->label187->Name = L"label187";
			this->label187->Size = System::Drawing::Size(8, 9);
			this->label187->TabIndex = 209;
			this->label187->Text = L"*";
			this->label187->Visible = false;
			// 
			// label188
			// 
			this->label188->AutoSize = true;
			this->label188->BackColor = System::Drawing::Color::WhiteSmoke;
			this->label188->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 6, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label188->Location = System::Drawing::Point(564, 371);
			this->label188->Name = L"label188";
			this->label188->Size = System::Drawing::Size(17, 9);
			this->label188->TabIndex = 208;
			this->label188->Text = L"a11";
			this->label188->Visible = false;
			// 
			// label189
			// 
			this->label189->AutoSize = true;
			this->label189->BackColor = System::Drawing::Color::WhiteSmoke;
			this->label189->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 6, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label189->Location = System::Drawing::Point(564, 525);
			this->label189->Name = L"label189";
			this->label189->Size = System::Drawing::Size(49, 9);
			this->label189->TabIndex = 287;
			this->label189->Text = L"determinant4";
			this->label189->Visible = false;
			// 
			// label190
			// 
			this->label190->AutoSize = true;
			this->label190->BackColor = System::Drawing::Color::WhiteSmoke;
			this->label190->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 6, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label190->Location = System::Drawing::Point(549, 526);
			this->label190->Name = L"label190";
			this->label190->Size = System::Drawing::Size(10, 9);
			this->label190->TabIndex = 286;
			this->label190->Text = L"=";
			this->label190->Visible = false;
			// 
			// label191
			// 
			this->label191->AutoSize = true;
			this->label191->BackColor = System::Drawing::Color::WhiteSmoke;
			this->label191->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 6, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label191->Location = System::Drawing::Point(761, 508);
			this->label191->Name = L"label191";
			this->label191->Size = System::Drawing::Size(10, 9);
			this->label191->TabIndex = 285;
			this->label191->Text = L"=";
			this->label191->Visible = false;
			// 
			// label192
			// 
			this->label192->AutoSize = true;
			this->label192->BackColor = System::Drawing::Color::WhiteSmoke;
			this->label192->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 6, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label192->Location = System::Drawing::Point(738, 508);
			this->label192->Name = L"label192";
			this->label192->Size = System::Drawing::Size(17, 9);
			this->label192->TabIndex = 284;
			this->label192->Text = L"a32";
			this->label192->Visible = false;
			// 
			// label193
			// 
			this->label193->AutoSize = true;
			this->label193->BackColor = System::Drawing::Color::WhiteSmoke;
			this->label193->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 6, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label193->Location = System::Drawing::Point(727, 508);
			this->label193->Name = L"label193";
			this->label193->Size = System::Drawing::Size(8, 9);
			this->label193->TabIndex = 283;
			this->label193->Text = L"*";
			this->label193->Visible = false;
			// 
			// label194
			// 
			this->label194->AutoSize = true;
			this->label194->BackColor = System::Drawing::Color::WhiteSmoke;
			this->label194->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 6, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label194->Location = System::Drawing::Point(706, 508);
			this->label194->Name = L"label194";
			this->label194->Size = System::Drawing::Size(17, 9);
			this->label194->TabIndex = 282;
			this->label194->Text = L"b22";
			this->label194->Visible = false;
			// 
			// label195
			// 
			this->label195->AutoSize = true;
			this->label195->BackColor = System::Drawing::Color::WhiteSmoke;
			this->label195->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 6, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label195->Location = System::Drawing::Point(696, 508);
			this->label195->Name = L"label195";
			this->label195->Size = System::Drawing::Size(8, 9);
			this->label195->TabIndex = 281;
			this->label195->Text = L"*";
			this->label195->Visible = false;
			// 
			// label196
			// 
			this->label196->AutoSize = true;
			this->label196->BackColor = System::Drawing::Color::WhiteSmoke;
			this->label196->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 6, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label196->Location = System::Drawing::Point(673, 508);
			this->label196->Name = L"label196";
			this->label196->Size = System::Drawing::Size(17, 9);
			this->label196->TabIndex = 280;
			this->label196->Text = L"a11";
			this->label196->Visible = false;
			// 
			// label197
			// 
			this->label197->AutoSize = true;
			this->label197->BackColor = System::Drawing::Color::WhiteSmoke;
			this->label197->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 6, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label197->Location = System::Drawing::Point(658, 508);
			this->label197->Name = L"label197";
			this->label197->Size = System::Drawing::Size(8, 9);
			this->label197->TabIndex = 279;
			this->label197->Text = L"-";
			this->label197->Visible = false;
			// 
			// label198
			// 
			this->label198->AutoSize = true;
			this->label198->BackColor = System::Drawing::Color::WhiteSmoke;
			this->label198->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 6, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label198->Location = System::Drawing::Point(620, 508);
			this->label198->Name = L"label198";
			this->label198->Size = System::Drawing::Size(8, 9);
			this->label198->TabIndex = 278;
			this->label198->Text = L"*";
			this->label198->Visible = false;
			// 
			// label199
			// 
			this->label199->AutoSize = true;
			this->label199->BackColor = System::Drawing::Color::WhiteSmoke;
			this->label199->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 6, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label199->Location = System::Drawing::Point(634, 508);
			this->label199->Name = L"label199";
			this->label199->Size = System::Drawing::Size(17, 9);
			this->label199->TabIndex = 277;
			this->label199->Text = L"b33";
			this->label199->Visible = false;
			// 
			// label200
			// 
			this->label200->AutoSize = true;
			this->label200->BackColor = System::Drawing::Color::WhiteSmoke;
			this->label200->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 6, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label200->Location = System::Drawing::Point(597, 508);
			this->label200->Name = L"label200";
			this->label200->Size = System::Drawing::Size(17, 9);
			this->label200->TabIndex = 276;
			this->label200->Text = L"a21";
			this->label200->Visible = false;
			// 
			// label201
			// 
			this->label201->AutoSize = true;
			this->label201->BackColor = System::Drawing::Color::WhiteSmoke;
			this->label201->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 6, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label201->Location = System::Drawing::Point(583, 508);
			this->label201->Name = L"label201";
			this->label201->Size = System::Drawing::Size(8, 9);
			this->label201->TabIndex = 275;
			this->label201->Text = L"*";
			this->label201->Visible = false;
			// 
			// label202
			// 
			this->label202->AutoSize = true;
			this->label202->BackColor = System::Drawing::Color::WhiteSmoke;
			this->label202->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 6, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label202->Location = System::Drawing::Point(564, 508);
			this->label202->Name = L"label202";
			this->label202->Size = System::Drawing::Size(17, 9);
			this->label202->TabIndex = 274;
			this->label202->Text = L"a12";
			this->label202->Visible = false;
			// 
			// label203
			// 
			this->label203->AutoSize = true;
			this->label203->BackColor = System::Drawing::Color::WhiteSmoke;
			this->label203->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 6, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label203->Location = System::Drawing::Point(549, 508);
			this->label203->Name = L"label203";
			this->label203->Size = System::Drawing::Size(8, 9);
			this->label203->TabIndex = 273;
			this->label203->Text = L"-";
			this->label203->Visible = false;
			// 
			// label204
			// 
			this->label204->AutoSize = true;
			this->label204->BackColor = System::Drawing::Color::WhiteSmoke;
			this->label204->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 6, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label204->Location = System::Drawing::Point(763, 488);
			this->label204->Name = L"label204";
			this->label204->Size = System::Drawing::Size(8, 9);
			this->label204->TabIndex = 272;
			this->label204->Text = L"-";
			this->label204->Visible = false;
			// 
			// label205
			// 
			this->label205->AutoSize = true;
			this->label205->BackColor = System::Drawing::Color::WhiteSmoke;
			this->label205->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 6, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label205->Location = System::Drawing::Point(738, 488);
			this->label205->Name = L"label205";
			this->label205->Size = System::Drawing::Size(17, 9);
			this->label205->TabIndex = 271;
			this->label205->Text = L"a31";
			this->label205->Visible = false;
			// 
			// label206
			// 
			this->label206->AutoSize = true;
			this->label206->BackColor = System::Drawing::Color::WhiteSmoke;
			this->label206->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 6, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label206->Location = System::Drawing::Point(727, 488);
			this->label206->Name = L"label206";
			this->label206->Size = System::Drawing::Size(8, 9);
			this->label206->TabIndex = 270;
			this->label206->Text = L"*";
			this->label206->Visible = false;
			// 
			// label207
			// 
			this->label207->AutoSize = true;
			this->label207->BackColor = System::Drawing::Color::WhiteSmoke;
			this->label207->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 6, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label207->Location = System::Drawing::Point(706, 488);
			this->label207->Name = L"label207";
			this->label207->Size = System::Drawing::Size(17, 9);
			this->label207->TabIndex = 269;
			this->label207->Text = L"a22";
			this->label207->Visible = false;
			// 
			// label208
			// 
			this->label208->AutoSize = true;
			this->label208->BackColor = System::Drawing::Color::WhiteSmoke;
			this->label208->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 6, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label208->Location = System::Drawing::Point(696, 488);
			this->label208->Name = L"label208";
			this->label208->Size = System::Drawing::Size(8, 9);
			this->label208->TabIndex = 268;
			this->label208->Text = L"*";
			this->label208->Visible = false;
			// 
			// label209
			// 
			this->label209->AutoSize = true;
			this->label209->BackColor = System::Drawing::Color::WhiteSmoke;
			this->label209->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 6, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label209->Location = System::Drawing::Point(672, 488);
			this->label209->Name = L"label209";
			this->label209->Size = System::Drawing::Size(17, 9);
			this->label209->TabIndex = 267;
			this->label209->Text = L"b11";
			this->label209->Visible = false;
			// 
			// label210
			// 
			this->label210->AutoSize = true;
			this->label210->BackColor = System::Drawing::Color::WhiteSmoke;
			this->label210->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 6, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label210->Location = System::Drawing::Point(658, 487);
			this->label210->Name = L"label210";
			this->label210->Size = System::Drawing::Size(8, 9);
			this->label210->TabIndex = 266;
			this->label210->Text = L"-";
			this->label210->Visible = false;
			// 
			// label211
			// 
			this->label211->AutoSize = true;
			this->label211->BackColor = System::Drawing::Color::WhiteSmoke;
			this->label211->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 6, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label211->Location = System::Drawing::Point(620, 488);
			this->label211->Name = L"label211";
			this->label211->Size = System::Drawing::Size(8, 9);
			this->label211->TabIndex = 265;
			this->label211->Text = L"*";
			this->label211->Visible = false;
			// 
			// label212
			// 
			this->label212->AutoSize = true;
			this->label212->BackColor = System::Drawing::Color::WhiteSmoke;
			this->label212->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 6, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label212->Location = System::Drawing::Point(634, 488);
			this->label212->Name = L"label212";
			this->label212->Size = System::Drawing::Size(17, 9);
			this->label212->TabIndex = 264;
			this->label212->Text = L"b11";
			this->label212->Visible = false;
			// 
			// label213
			// 
			this->label213->AutoSize = true;
			this->label213->BackColor = System::Drawing::Color::WhiteSmoke;
			this->label213->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 6, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label213->Location = System::Drawing::Point(583, 488);
			this->label213->Name = L"label213";
			this->label213->Size = System::Drawing::Size(8, 9);
			this->label213->TabIndex = 263;
			this->label213->Text = L"*";
			this->label213->Visible = false;
			// 
			// label214
			// 
			this->label214->AutoSize = true;
			this->label214->BackColor = System::Drawing::Color::WhiteSmoke;
			this->label214->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 6, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label214->Location = System::Drawing::Point(597, 488);
			this->label214->Name = L"label214";
			this->label214->Size = System::Drawing::Size(17, 9);
			this->label214->TabIndex = 262;
			this->label214->Text = L"a32";
			this->label214->Visible = false;
			// 
			// label215
			// 
			this->label215->AutoSize = true;
			this->label215->BackColor = System::Drawing::Color::WhiteSmoke;
			this->label215->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 6, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label215->Location = System::Drawing::Point(564, 488);
			this->label215->Name = L"label215";
			this->label215->Size = System::Drawing::Size(17, 9);
			this->label215->TabIndex = 261;
			this->label215->Text = L"a21";
			this->label215->Visible = false;
			// 
			// label216
			// 
			this->label216->AutoSize = true;
			this->label216->BackColor = System::Drawing::Color::WhiteSmoke;
			this->label216->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 6, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label216->Location = System::Drawing::Point(549, 488);
			this->label216->Name = L"label216";
			this->label216->Size = System::Drawing::Size(10, 9);
			this->label216->TabIndex = 260;
			this->label216->Text = L"+";
			this->label216->Visible = false;
			// 
			// label217
			// 
			this->label217->AutoSize = true;
			this->label217->BackColor = System::Drawing::Color::WhiteSmoke;
			this->label217->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 6, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label217->Location = System::Drawing::Point(761, 466);
			this->label217->Name = L"label217";
			this->label217->Size = System::Drawing::Size(10, 9);
			this->label217->TabIndex = 259;
			this->label217->Text = L"+";
			this->label217->Visible = false;
			// 
			// label218
			// 
			this->label218->AutoSize = true;
			this->label218->BackColor = System::Drawing::Color::WhiteSmoke;
			this->label218->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 6, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label218->Location = System::Drawing::Point(738, 466);
			this->label218->Name = L"label218";
			this->label218->Size = System::Drawing::Size(17, 9);
			this->label218->TabIndex = 258;
			this->label218->Text = L"a31";
			this->label218->Visible = false;
			// 
			// label219
			// 
			this->label219->AutoSize = true;
			this->label219->BackColor = System::Drawing::Color::WhiteSmoke;
			this->label219->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 6, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label219->Location = System::Drawing::Point(727, 467);
			this->label219->Name = L"label219";
			this->label219->Size = System::Drawing::Size(8, 9);
			this->label219->TabIndex = 257;
			this->label219->Text = L"*";
			this->label219->Visible = false;
			// 
			// label220
			// 
			this->label220->AutoSize = true;
			this->label220->BackColor = System::Drawing::Color::WhiteSmoke;
			this->label220->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 6, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label220->Location = System::Drawing::Point(706, 467);
			this->label220->Name = L"label220";
			this->label220->Size = System::Drawing::Size(17, 9);
			this->label220->TabIndex = 256;
			this->label220->Text = L"b22";
			this->label220->Visible = false;
			// 
			// label221
			// 
			this->label221->AutoSize = true;
			this->label221->BackColor = System::Drawing::Color::WhiteSmoke;
			this->label221->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 6, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label221->Location = System::Drawing::Point(696, 467);
			this->label221->Name = L"label221";
			this->label221->Size = System::Drawing::Size(8, 9);
			this->label221->TabIndex = 255;
			this->label221->Text = L"*";
			this->label221->Visible = false;
			// 
			// label222
			// 
			this->label222->AutoSize = true;
			this->label222->BackColor = System::Drawing::Color::WhiteSmoke;
			this->label222->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 6, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label222->Location = System::Drawing::Point(673, 467);
			this->label222->Name = L"label222";
			this->label222->Size = System::Drawing::Size(17, 9);
			this->label222->TabIndex = 254;
			this->label222->Text = L"a12";
			this->label222->Visible = false;
			// 
			// label223
			// 
			this->label223->AutoSize = true;
			this->label223->BackColor = System::Drawing::Color::WhiteSmoke;
			this->label223->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 6, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label223->Location = System::Drawing::Point(657, 467);
			this->label223->Name = L"label223";
			this->label223->Size = System::Drawing::Size(10, 9);
			this->label223->TabIndex = 253;
			this->label223->Text = L"+";
			this->label223->Visible = false;
			// 
			// label224
			// 
			this->label224->AutoSize = true;
			this->label224->BackColor = System::Drawing::Color::WhiteSmoke;
			this->label224->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 6, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label224->Location = System::Drawing::Point(634, 467);
			this->label224->Name = L"label224";
			this->label224->Size = System::Drawing::Size(17, 9);
			this->label224->TabIndex = 252;
			this->label224->Text = L"b33";
			this->label224->Visible = false;
			// 
			// label225
			// 
			this->label225->AutoSize = true;
			this->label225->BackColor = System::Drawing::Color::WhiteSmoke;
			this->label225->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 6, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label225->Location = System::Drawing::Point(620, 467);
			this->label225->Name = L"label225";
			this->label225->Size = System::Drawing::Size(8, 9);
			this->label225->TabIndex = 251;
			this->label225->Text = L"*";
			this->label225->Visible = false;
			// 
			// label226
			// 
			this->label226->AutoSize = true;
			this->label226->BackColor = System::Drawing::Color::WhiteSmoke;
			this->label226->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 6, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label226->Location = System::Drawing::Point(597, 467);
			this->label226->Name = L"label226";
			this->label226->Size = System::Drawing::Size(17, 9);
			this->label226->TabIndex = 250;
			this->label226->Text = L"a22";
			this->label226->Visible = false;
			// 
			// label227
			// 
			this->label227->AutoSize = true;
			this->label227->BackColor = System::Drawing::Color::WhiteSmoke;
			this->label227->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 6, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label227->Location = System::Drawing::Point(583, 468);
			this->label227->Name = L"label227";
			this->label227->Size = System::Drawing::Size(8, 9);
			this->label227->TabIndex = 249;
			this->label227->Text = L"*";
			this->label227->Visible = false;
			// 
			// label228
			// 
			this->label228->AutoSize = true;
			this->label228->BackColor = System::Drawing::Color::WhiteSmoke;
			this->label228->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 6, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label228->Location = System::Drawing::Point(564, 468);
			this->label228->Name = L"label228";
			this->label228->Size = System::Drawing::Size(17, 9);
			this->label228->TabIndex = 248;
			this->label228->Text = L"a11";
			this->label228->Visible = false;
			// 
			// label229
			// 
			this->label229->AutoSize = true;
			this->label229->BackColor = System::Drawing::Color::WhiteSmoke;
			this->label229->Location = System::Drawing::Point(433, 557);
			this->label229->Name = L"label229";
			this->label229->Size = System::Drawing::Size(18, 13);
			this->label229->TabIndex = 288;
			this->label229->Text = L"x=";
			this->label229->Visible = false;
			// 
			// label230
			// 
			this->label230->AutoSize = true;
			this->label230->BackColor = System::Drawing::Color::WhiteSmoke;
			this->label230->Location = System::Drawing::Point(459, 553);
			this->label230->Name = L"label230";
			this->label230->Size = System::Drawing::Size(25, 13);
			this->label230->TabIndex = 289;
			this->label230->Text = L"___";
			this->label230->Visible = false;
			// 
			// label231
			// 
			this->label231->AutoSize = true;
			this->label231->BackColor = System::Drawing::Color::WhiteSmoke;
			this->label231->Location = System::Drawing::Point(557, 552);
			this->label231->Name = L"label231";
			this->label231->Size = System::Drawing::Size(25, 13);
			this->label231->TabIndex = 291;
			this->label231->Text = L"___";
			this->label231->Visible = false;
			// 
			// label232
			// 
			this->label232->AutoSize = true;
			this->label232->BackColor = System::Drawing::Color::WhiteSmoke;
			this->label232->Location = System::Drawing::Point(531, 557);
			this->label232->Name = L"label232";
			this->label232->Size = System::Drawing::Size(18, 13);
			this->label232->TabIndex = 290;
			this->label232->Text = L"y=";
			this->label232->Visible = false;
			// 
			// label233
			// 
			this->label233->AutoSize = true;
			this->label233->BackColor = System::Drawing::Color::WhiteSmoke;
			this->label233->Location = System::Drawing::Point(659, 551);
			this->label233->Name = L"label233";
			this->label233->Size = System::Drawing::Size(25, 13);
			this->label233->TabIndex = 293;
			this->label233->Text = L"___";
			this->label233->Visible = false;
			// 
			// label234
			// 
			this->label234->AutoSize = true;
			this->label234->BackColor = System::Drawing::Color::WhiteSmoke;
			this->label234->Location = System::Drawing::Point(633, 556);
			this->label234->Name = L"label234";
			this->label234->Size = System::Drawing::Size(18, 13);
			this->label234->TabIndex = 292;
			this->label234->Text = L"z=";
			this->label234->Visible = false;
			// 
			// label235
			// 
			this->label235->AutoSize = true;
			this->label235->BackColor = System::Drawing::Color::WhiteSmoke;
			this->label235->Location = System::Drawing::Point(457, 548);
			this->label235->Name = L"label235";
			this->label235->Size = System::Drawing::Size(28, 13);
			this->label235->TabIndex = 294;
			this->label235->Text = L"det1";
			this->label235->Visible = false;
			// 
			// label236
			// 
			this->label236->AutoSize = true;
			this->label236->BackColor = System::Drawing::Color::WhiteSmoke;
			this->label236->Location = System::Drawing::Point(460, 569);
			this->label236->Name = L"label236";
			this->label236->Size = System::Drawing::Size(22, 13);
			this->label236->TabIndex = 295;
			this->label236->Text = L"det";
			this->label236->Visible = false;
			// 
			// label237
			// 
			this->label237->AutoSize = true;
			this->label237->BackColor = System::Drawing::Color::WhiteSmoke;
			this->label237->Location = System::Drawing::Point(559, 570);
			this->label237->Name = L"label237";
			this->label237->Size = System::Drawing::Size(22, 13);
			this->label237->TabIndex = 296;
			this->label237->Text = L"det";
			this->label237->Visible = false;
			// 
			// label238
			// 
			this->label238->AutoSize = true;
			this->label238->BackColor = System::Drawing::Color::WhiteSmoke;
			this->label238->Location = System::Drawing::Point(559, 548);
			this->label238->Name = L"label238";
			this->label238->Size = System::Drawing::Size(28, 13);
			this->label238->TabIndex = 297;
			this->label238->Text = L"det2";
			this->label238->Visible = false;
			// 
			// label239
			// 
			this->label239->AutoSize = true;
			this->label239->BackColor = System::Drawing::Color::WhiteSmoke;
			this->label239->Location = System::Drawing::Point(662, 570);
			this->label239->Name = L"label239";
			this->label239->Size = System::Drawing::Size(22, 13);
			this->label239->TabIndex = 298;
			this->label239->Text = L"det";
			this->label239->Visible = false;
			// 
			// label240
			// 
			this->label240->AutoSize = true;
			this->label240->BackColor = System::Drawing::Color::WhiteSmoke;
			this->label240->Location = System::Drawing::Point(660, 548);
			this->label240->Name = L"label240";
			this->label240->Size = System::Drawing::Size(28, 13);
			this->label240->TabIndex = 299;
			this->label240->Text = L"det3";
			this->label240->Visible = false;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(96, 96);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Dpi;
			this->ClientSize = System::Drawing::Size(795, 600);
			this->Controls->Add(this->label240);
			this->Controls->Add(this->label239);
			this->Controls->Add(this->label238);
			this->Controls->Add(this->label237);
			this->Controls->Add(this->label236);
			this->Controls->Add(this->label235);
			this->Controls->Add(this->label234);
			this->Controls->Add(this->label232);
			this->Controls->Add(this->label229);
			this->Controls->Add(this->label189);
			this->Controls->Add(this->label190);
			this->Controls->Add(this->label191);
			this->Controls->Add(this->label192);
			this->Controls->Add(this->label193);
			this->Controls->Add(this->label194);
			this->Controls->Add(this->label195);
			this->Controls->Add(this->label196);
			this->Controls->Add(this->label197);
			this->Controls->Add(this->label198);
			this->Controls->Add(this->label199);
			this->Controls->Add(this->label200);
			this->Controls->Add(this->label201);
			this->Controls->Add(this->label202);
			this->Controls->Add(this->label203);
			this->Controls->Add(this->label204);
			this->Controls->Add(this->label205);
			this->Controls->Add(this->label206);
			this->Controls->Add(this->label207);
			this->Controls->Add(this->label208);
			this->Controls->Add(this->label209);
			this->Controls->Add(this->label210);
			this->Controls->Add(this->label211);
			this->Controls->Add(this->label212);
			this->Controls->Add(this->label213);
			this->Controls->Add(this->label214);
			this->Controls->Add(this->label215);
			this->Controls->Add(this->label216);
			this->Controls->Add(this->label217);
			this->Controls->Add(this->label218);
			this->Controls->Add(this->label219);
			this->Controls->Add(this->label220);
			this->Controls->Add(this->label221);
			this->Controls->Add(this->label222);
			this->Controls->Add(this->label223);
			this->Controls->Add(this->label224);
			this->Controls->Add(this->label225);
			this->Controls->Add(this->label226);
			this->Controls->Add(this->label227);
			this->Controls->Add(this->label228);
			this->Controls->Add(this->label149);
			this->Controls->Add(this->label150);
			this->Controls->Add(this->label151);
			this->Controls->Add(this->label152);
			this->Controls->Add(this->label153);
			this->Controls->Add(this->label154);
			this->Controls->Add(this->label155);
			this->Controls->Add(this->label156);
			this->Controls->Add(this->label157);
			this->Controls->Add(this->label158);
			this->Controls->Add(this->label159);
			this->Controls->Add(this->label160);
			this->Controls->Add(this->label161);
			this->Controls->Add(this->label162);
			this->Controls->Add(this->label163);
			this->Controls->Add(this->label164);
			this->Controls->Add(this->label165);
			this->Controls->Add(this->label166);
			this->Controls->Add(this->label167);
			this->Controls->Add(this->label168);
			this->Controls->Add(this->label169);
			this->Controls->Add(this->label170);
			this->Controls->Add(this->label171);
			this->Controls->Add(this->label172);
			this->Controls->Add(this->label173);
			this->Controls->Add(this->label174);
			this->Controls->Add(this->label175);
			this->Controls->Add(this->label176);
			this->Controls->Add(this->label177);
			this->Controls->Add(this->label178);
			this->Controls->Add(this->label179);
			this->Controls->Add(this->label180);
			this->Controls->Add(this->label181);
			this->Controls->Add(this->label182);
			this->Controls->Add(this->label183);
			this->Controls->Add(this->label184);
			this->Controls->Add(this->label185);
			this->Controls->Add(this->label186);
			this->Controls->Add(this->label187);
			this->Controls->Add(this->label188);
			this->Controls->Add(this->label148);
			this->Controls->Add(this->label147);
			this->Controls->Add(this->label146);
			this->Controls->Add(this->label145);
			this->Controls->Add(this->label144);
			this->Controls->Add(this->label143);
			this->Controls->Add(this->label137);
			this->Controls->Add(this->label114);
			this->Controls->Add(this->label142);
			this->Controls->Add(this->label141);
			this->Controls->Add(this->label140);
			this->Controls->Add(this->label139);
			this->Controls->Add(this->label138);
			this->Controls->Add(this->label136);
			this->Controls->Add(this->label135);
			this->Controls->Add(this->label134);
			this->Controls->Add(this->label133);
			this->Controls->Add(this->label132);
			this->Controls->Add(this->label131);
			this->Controls->Add(this->label130);
			this->Controls->Add(this->label129);
			this->Controls->Add(this->label128);
			this->Controls->Add(this->label127);
			this->Controls->Add(this->label126);
			this->Controls->Add(this->label125);
			this->Controls->Add(this->label124);
			this->Controls->Add(this->label123);
			this->Controls->Add(this->label122);
			this->Controls->Add(this->label121);
			this->Controls->Add(this->label120);
			this->Controls->Add(this->label119);
			this->Controls->Add(this->label118);
			this->Controls->Add(this->label117);
			this->Controls->Add(this->label116);
			this->Controls->Add(this->label115);
			this->Controls->Add(this->label113);
			this->Controls->Add(this->label112);
			this->Controls->Add(this->label111);
			this->Controls->Add(this->label110);
			this->Controls->Add(this->label109);
			this->Controls->Add(this->label108);
			this->Controls->Add(this->label107);
			this->Controls->Add(this->label106);
			this->Controls->Add(this->label105);
			this->Controls->Add(this->label104);
			this->Controls->Add(this->label103);
			this->Controls->Add(this->label102);
			this->Controls->Add(this->label101);
			this->Controls->Add(this->label100);
			this->Controls->Add(this->label99);
			this->Controls->Add(this->label98);
			this->Controls->Add(this->label97);
			this->Controls->Add(this->label96);
			this->Controls->Add(this->label95);
			this->Controls->Add(this->label94);
			this->Controls->Add(this->label93);
			this->Controls->Add(this->label92);
			this->Controls->Add(this->label91);
			this->Controls->Add(this->label90);
			this->Controls->Add(this->label89);
			this->Controls->Add(this->label88);
			this->Controls->Add(this->label87);
			this->Controls->Add(this->label86);
			this->Controls->Add(this->label85);
			this->Controls->Add(this->label84);
			this->Controls->Add(this->label83);
			this->Controls->Add(this->label82);
			this->Controls->Add(this->label81);
			this->Controls->Add(this->label80);
			this->Controls->Add(this->label79);
			this->Controls->Add(this->label78);
			this->Controls->Add(this->label77);
			this->Controls->Add(this->label76);
			this->Controls->Add(this->label75);
			this->Controls->Add(this->label74);
			this->Controls->Add(this->label73);
			this->Controls->Add(this->label72);
			this->Controls->Add(this->label71);
			this->Controls->Add(this->label70);
			this->Controls->Add(this->label69);
			this->Controls->Add(this->label68);
			this->Controls->Add(this->label67);
			this->Controls->Add(this->label66);
			this->Controls->Add(this->label53);
			this->Controls->Add(this->label54);
			this->Controls->Add(this->label55);
			this->Controls->Add(this->label56);
			this->Controls->Add(this->label57);
			this->Controls->Add(this->label58);
			this->Controls->Add(this->label59);
			this->Controls->Add(this->label60);
			this->Controls->Add(this->label61);
			this->Controls->Add(this->label62);
			this->Controls->Add(this->label63);
			this->Controls->Add(this->label64);
			this->Controls->Add(this->label41);
			this->Controls->Add(this->label42);
			this->Controls->Add(this->label43);
			this->Controls->Add(this->label44);
			this->Controls->Add(this->label45);
			this->Controls->Add(this->label46);
			this->Controls->Add(this->label47);
			this->Controls->Add(this->label48);
			this->Controls->Add(this->label49);
			this->Controls->Add(this->label50);
			this->Controls->Add(this->label51);
			this->Controls->Add(this->label52);
			this->Controls->Add(this->label29);
			this->Controls->Add(this->label30);
			this->Controls->Add(this->label31);
			this->Controls->Add(this->label32);
			this->Controls->Add(this->label33);
			this->Controls->Add(this->label34);
			this->Controls->Add(this->label35);
			this->Controls->Add(this->label36);
			this->Controls->Add(this->label37);
			this->Controls->Add(this->label38);
			this->Controls->Add(this->label39);
			this->Controls->Add(this->label40);
			this->Controls->Add(this->label27);
			this->Controls->Add(this->label28);
			this->Controls->Add(this->label26);
			this->Controls->Add(this->label25);
			this->Controls->Add(this->label24);
			this->Controls->Add(this->label23);
			this->Controls->Add(this->label22);
			this->Controls->Add(this->label21);
			this->Controls->Add(this->label20);
			this->Controls->Add(this->label19);
			this->Controls->Add(this->label15);
			this->Controls->Add(this->label14);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->textBox15);
			this->Controls->Add(this->textBox14);
			this->Controls->Add(this->textBox13);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox9);
			this->Controls->Add(this->textBox8);
			this->Controls->Add(this->textBox7);
			this->Controls->Add(this->textBox6);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->label13);
			this->Controls->Add(this->label18);
			this->Controls->Add(this->label65);
			this->Controls->Add(this->label17);
			this->Controls->Add(this->label230);
			this->Controls->Add(this->label231);
			this->Controls->Add(this->label233);
			this->Controls->Add(this->label16);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) 
{
	//Кнопка очистить
	
	label5->Text = "";
	label6->Text = "";
	label7->Text = "";
	//Поля с коэффициентами
	array<TextBox^>^ numbers = { textBox1, textBox2, textBox3, textBox4, textBox5, textBox6, textBox7, textBox8, textBox9, textBox13, textBox14, textBox15 };
	for (int i = 0; i < numbers->Length; i++)
		numbers[i]->Text = "";
	//Матрица 1
	array<Label^>^ labels = { label15, label16, label17, label18, label19, label20, label21, label22, label23, label24, label25, label26, label27, label28 };
	for (int i = 0; i < labels->Length; i++)
		labels[i]->Visible = false;
	//Матрица 2
	array<Label^>^ labels2 = { label38, label37, label36, label35, label34, label33, label32, label31, label29, label30, label39, label40 };
	for (int i = 0; i < labels2->Length; i++)
		labels2[i]->Visible = false;
	//Матрица 3
	array<Label^>^ labels3 = { label41, label42, label43, label44, label45, label46, label47, label48, label49, label50, label51, label52 };
	for (int i = 0; i < labels3->Length; i++)
		labels3[i]->Visible = false;
	//Матрица 4
	array<Label^>^ labels4 = { label53, label54, label55, label56, label57, label58, label59, label60, label61, label62, label63, label64 };
	for (int i = 0; i < labels4->Length; i++)
		labels4[i]->Visible = false;
	//Надписи определителей
	array<Label^>^ det = { label65, label66, label67, label68 };
	for (int i = 0; i < det->Length; i++)
		det[i]->Visible = false;
	//Решение матрица 1
	array<Label^>^ labels5 = {label69, label70, label71, label72, label73, label74, label75, label76, label77, label78, label79, label80, label81, label82, label83, label84, label85, label86, label87, label88, label89, label90, label91, label92, label93, label94, label95 ,label96, label97, label98, label99, label100, label101, label102, label103, label104, label105, label106};
	for (int i = 0; i < labels5->Length; i++)
		labels5[i]->Visible = false;
	//Решение матрица 2
	array<Label^>^ labels6 = { label109, label111, label113, label116, label118, label120, label123, label124, label126, label129,label131, label133, label136, label139, label140, label114, label143, label145, label148, label110, label112, label115, label117, label119, label121, label122, label125 ,label127, label128, label130, label132,label134, label135, label138, label141, label142, label137, label144 ,label146, label147 };
	for (int i = 0; i < labels6->Length; i++)
		labels6[i]->Visible = false;
	//Решение матрица 3
	array<Label^>^ labels7 = { label188,label187, label186, label185, label184, label183, label182, label181, label180, label179, label178, label177, label176, label175, label174,label173, label172, label171, label170, label169, label168, label167, label166, label165, label164, label163, label162, label161, label160, label159, label158, label157, label156, label155, label154, label153, label152, label151, label150, label149 };
	for (int i = 0; i < labels7->Length; i++)
		labels7[i]->Visible = false;
	//Решение матрица 4
	array<Label^>^ labels8 = { label228, label227, label226, label225, label224, label223, label222, label221, label220, label219, label218, label217, label216, label215, label214, label213, label212, label211, label210, label209, label208, label207, label206, label205, label204, label203, label202, label201, label200, label199, label198, label197, label196, label195, label194, label193, label192, label191, label190, label189 };
	for (int i = 0; i < labels8->Length; i++)
		labels8[i]->Visible = false;
	//Решение xyz
	array<Label^>^ xyz = { label229, label234, label231, label232, label230, label233, label235, label236, label238, label237, label240, label239 };
	for (int i = 0; i < xyz->Length; i++)
		xyz[i]->Visible = false;
}
private: System::Void button1_Click_1(System::Object^ sender, System::EventArgs^ e) 
{
	//Кнопка посчитать

	double a11, a12, a13, a21, a22, a23, a31, a32, a33, b1, b2, b3;
	double det, det1, det2, det3;
	//Матрица 1
	array<Label^>^ labels = { label15, label16, label17, label18, label19, label20, label21, label22, label23, label24, label25, label26, label27, label28 };
	//Матрица 2
	array<Label^>^ labels2 = { label38, label37, label36, label35, label34, label33, label32, label31, label29, label30, label39, label40 };
	//Матрица 3
	array<Label^>^ labels3 = { label50, label49, label48, label47, label46, label45, label44, label43, label41, label42, label51, label52 };
	//Матрица 4
	array<Label^>^ labels4 = { label62, label61, label60, label59, label58, label57, label56, label55, label53, label54, label63, label64 };
	//Значения из текстбоксов(коэффициенты)
	array<TextBox^>^ numbers = { textBox1, textBox2, textBox3, textBox4, textBox5, textBox6, textBox7, textBox8, textBox9 };
	//Проверка: пусты ли текст боксы? (Можно ли вывести результат?)
	if (textBox1->Text == "" || textBox1->Text == "-" || textBox2->Text == "" || textBox2->Text == "-" || textBox3->Text == "-"  || textBox3->Text == "" || textBox4->Text == ""
		|| textBox4->Text == "-" || textBox5->Text == "" || textBox5->Text == "-" || textBox6->Text == "-" || textBox7->Text == "-" ||
		textBox6->Text == "" || textBox7->Text == "" || textBox8->Text == "" || textBox8->Text == "-" || textBox9->Text == "" || textBox9->Text == "-" || textBox13->Text == "" || textBox13->Text == "-" || textBox14->Text == "" ||
		textBox14->Text == "-" ||
		textBox15->Text == "" || textBox15->Text == "-")
	{
		MessageBox::Show("ОШИБКА!!! Введены не все значения!");
	}
	else
	{
		//Все значения из текстбоксов записываем в отдельные переменные
		a11 = Convert::ToDouble(textBox1->Text);
		a12 = Convert::ToDouble(textBox2->Text);
		a13 = Convert::ToDouble(textBox3->Text);
		a21 = Convert::ToDouble(textBox4->Text);
		a22 = Convert::ToDouble(textBox5->Text);
		a23 = Convert::ToDouble(textBox6->Text);
		a31 = Convert::ToDouble(textBox7->Text);
		a32 = Convert::ToDouble(textBox8->Text);
		a33 = Convert::ToDouble(textBox9->Text);
		b1 = Convert::ToDouble(textBox13->Text);
		b2 = Convert::ToDouble(textBox14->Text);
		b3 = Convert::ToDouble(textBox15->Text);

		//Решение СЛАУ методом Крамера
		det = (a11 * a22 * a33 + a12 * a23 * a31 + a21 * a32 * a13) - (a13 * a22 * a31 + a12 * a21 * a33 + a11 * a23 * a32); // Находим определитель
		det1 = (b1 * a22 * a33 + a12 * a23 * b3 + b2 * a32 * a13) - (a13 * a22 * b3 + a12 * b2 * a33 + b1 * a23 * a32); // определитель матрицы, где первый столбец-столбец свободных членов
		det2 = (a11 * b2 * a33 + b1 * a23 * a31 + a21 * b3 * a13) - (a13 * b2 * a31 + b1 * a21 * a33 + a11 * a23 * b3); // определитель матрицы, где второй столбец-столбец свободных членов
		det3 = (a11 * a22 * b3 + a12 * b2 * a31 + a21 * a32 * b1) - (b1 * a22 * a31 + a12 * a21 * b3 + a11 * b2 * a32); // определитель матрицы, где третий столбец-столбец свободных членов
		//Вписываем результат
		label5->Text = Convert::ToString(det1 / det);
		label6->Text = Convert::ToString(det2 / det);
		label7->Text = Convert::ToString(det3 / det);

		label69->Text = textBox1->Text;
		label71->Text = textBox5->Text;
		label73->Text = textBox9->Text;
		label75->Text = textBox2->Text;
		label76->Text = textBox6->Text;
		label77->Text = textBox7->Text;
		label79->Text = textBox4->Text;
		label78->Text = textBox8->Text;
		label85->Text = textBox3->Text;
		label88->Text = textBox3->Text;
		label89->Text = textBox5->Text;
		label90->Text = textBox7->Text;
		label93->Text = textBox2->Text;
		label94->Text = textBox4->Text;
		label95->Text = textBox9->Text;
		label101->Text = textBox1->Text;
		label102->Text = textBox6->Text;
		label103->Text = textBox8->Text;
		label106->Text = Convert::ToString(det);

		label109->Text = textBox13->Text;
		label111->Text = textBox5->Text;
		label113->Text = textBox9->Text;
		label116->Text = textBox2->Text;
		label118->Text = textBox6->Text;
		label120->Text = textBox15->Text;
		label123->Text = textBox14->Text;
		label124->Text = textBox8->Text;
		label126->Text = textBox3->Text;
		label129->Text = textBox3->Text;
		label131->Text = textBox5->Text;
		label133->Text = textBox15->Text;
		label136->Text = textBox2->Text;
		label139->Text = textBox14->Text;
		label140->Text = textBox9->Text;
		label114->Text = textBox13->Text;
		label143->Text = textBox6->Text;
		label145->Text = textBox8->Text;
		label148->Text = Convert::ToString(det1);

		label188->Text = textBox1->Text;
		label186->Text = textBox14->Text;
		label184->Text = textBox9->Text;
		label182->Text = textBox13->Text;
		label180->Text = textBox6->Text;
		label178->Text = textBox7->Text;
		label175->Text = textBox4->Text;
		label174->Text = textBox15->Text;
		label172->Text = textBox3->Text;
		label169->Text = textBox3->Text;
		label167->Text = textBox14->Text;
		label165->Text = textBox7->Text;
		label162->Text = textBox13->Text;
		label160->Text = textBox4->Text;
		label159->Text = textBox9->Text;
		label156->Text = textBox1->Text;
		label154->Text = textBox6->Text;
		label152->Text = textBox15->Text;
		label149->Text = Convert::ToString(det2);

		label228->Text = textBox1->Text;
		label226->Text = textBox5->Text;
		label224->Text = textBox15->Text;
		label222->Text = textBox2->Text;
		label220->Text = textBox14->Text;
		label218->Text = textBox7->Text;
		label215->Text = textBox5->Text;
		label214->Text = textBox8->Text;
		label212->Text = textBox13->Text;
		label209->Text = textBox13->Text;
		label207->Text = textBox5->Text;
		label205->Text = textBox7->Text;
		label202->Text = textBox2->Text;
		label200->Text = textBox4->Text;
		label199->Text = textBox15->Text;
		label196->Text = textBox1->Text;
		label194->Text = textBox14->Text;
		label192->Text = textBox8->Text;
		label189->Text = Convert::ToString(det3);

		label235->Text = Convert::ToString(det1);
		label236->Text = Convert::ToString(det);
		label238->Text = Convert::ToString(det2);
		label237->Text = Convert::ToString(det);
		label240->Text = Convert::ToString(det3);
		label239->Text = Convert::ToString(det);

		//Делаем видимыми надписи определителей
		array<Label^>^ dets = { label65, label66, label67, label68 };
		for (int i = 0; i < dets->Length; i++)
			dets[i]->Visible = true;

		//Передаем значение из текстбоксов в поля решения и делаем решение видимым
		//Матрица 1
		for (int i = 4, j = 0; i < labels->Length - 1; i++)
		{
			labels[i]->Text = numbers[j]->Text;
			j++;
		}
		//Матрица 2
		//32 35 38       13 14 15
		label32->Text = textBox15->Text;
		label35->Text = textBox14->Text;
		label38->Text = textBox13->Text;
		for (int i = 1; i < labels2->Length - 3; i++)
		{
			if (i == 3 || i == 6)
				i++;
			labels2[i]->Text = numbers[i]->Text;
		}

		//Матрица 3 49 46 43
		label49->Text = textBox13->Text;
		label46->Text = textBox14->Text;
		label43->Text = textBox15->Text;
		for (int i = 0; i < labels3->Length - 3; i++)
		{
			if (i == 1 || i == 4 || i == 7)
				i++;
			labels3[i]->Text = numbers[i]->Text;
		}

		//Матрица 4  60 57 53
		label60->Text = textBox13->Text;
		label57->Text = textBox14->Text;
		label53->Text = textBox15->Text;
		for (int i = 0; i < labels4->Length - 4; i++)
		{
			if (i == 2 || i == 5)
				i++;
			labels4[i]->Text = numbers[i]->Text;
		}

		
		//Включаем видимость решения
		for (int i = 0; i < labels->Length; i++)
			labels[i]->Visible = true;

		for (int i = 0; i < labels2->Length; i++)
			labels2[i]->Visible = true;

		for (int i = 0; i < labels3->Length; i++)
			labels3[i]->Visible = true;

		for (int i = 0; i < labels4->Length; i++)
			labels4[i]->Visible = true;
		//Решение матрица 1
		array<Label^>^ labels5 = { label69, label70, label71, label72, label73, label74, label75, label76, label77, label78, label79, label80, label81, label82, label83, label84, label85, label86, label87, label88, label89, label90, label91, label92, label93, label94, label95 ,label96, label97, label98, label99, label100, label101, label102, label103, label104, label105, label106 };
		for (int i = 0; i < labels5->Length; i++)
			labels5[i]->Visible = true;
		//Решение матрица 2
		array<Label^>^ labels6 = { label109, label111, label113, label116, label118, label120, label123, label124, label126, label129,label131, label133, label136, label139, label140, label114, label143, label145, label148, label110, label112, label115, label117, label119, label121, label122, label125 ,label127, label128, label130, label132,label134, label135, label138, label141, label142, label137, label144 ,label146, label147 };
		for (int i = 0; i < labels6->Length; i++)
			labels6[i]->Visible = true;
		//Решение матрица 3
		array<Label^>^ labels7 = { label188,label187, label186, label185, label184, label183, label182, label181, label180, label179, label178, label177, label176, label175, label174,label173, label172, label171, label170, label169, label168, label167, label166, label165, label164, label163, label162, label161, label160, label159, label158, label157, label156, label155, label154, label153, label152, label151, label150, label149 };
		for (int i = 0; i < labels7->Length; i++)
			labels7[i]->Visible = true;
		//Решение матрица 4
		array<Label^>^ labels8 = { label228, label227, label226, label225, label224, label223, label222, label221, label220, label219, label218, label217, label216, label215, label214, label213, label212, label211, label210, label209, label208, label207, label206, label205, label204, label203, label202, label201, label200, label199, label198, label197, label196, label195, label194, label193, label192, label191, label190, label189 };
		for (int i = 0; i < labels8->Length; i++)
			labels8[i]->Visible = true;
		//x y z
		array<Label^>^ xyz = { label229, label234, label231, label232, label230, label233, label235, label236, label238, label237, label240, label239 };
		for (int i = 0; i < xyz->Length; i++)
			xyz[i]->Visible = true;
	}
	
}
private: System::Void textBox1_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
	char number = e->KeyChar;
	textBox1->MaxLength = 4;
	if ((e->KeyChar < 48 || e->KeyChar > 57) && e->KeyChar != 8 && e->KeyChar!=45) {
		e->Handled = true;
		return;
	}

	String^ text = textBox1->Text;
	// запрет последовательного ввода знака "-" после имеющегося минуcа
	if (text == "-" && e->KeyChar != 8 && e->KeyChar <48 || e->KeyChar > 57)
		e->Handled = true;
	// запрет на ввод минуса при перемещении курсора в начало
	if (e->KeyChar == 45 && textBox1->SelectionStart != 0 && text != "")
		e->Handled = true;
}
private: System::Void textBox2_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
	char number = e->KeyChar;
	textBox2->MaxLength = 4;
	if ((e->KeyChar < 48 || e->KeyChar > 57) && e->KeyChar != 8 && e->KeyChar != 45) {
		e->Handled = true;
		return;
	}

	String^ text = textBox2->Text;
	// запрет последовательного ввода знака "-" после имеющегося минуcа
	if (text == "-" && e->KeyChar != 8 && e->KeyChar < 48 || e->KeyChar > 57)
		e->Handled = true;
	// запрет на ввод минуса при перемещении курсора в начало
	if (e->KeyChar == 45 && textBox2->SelectionStart != 0 && text != "")
		e->Handled = true;
}
private: System::Void textBox3_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
	char number = e->KeyChar;
	textBox3->MaxLength = 4;
	if ((e->KeyChar < 48 || e->KeyChar > 57) && e->KeyChar != 8 && e->KeyChar != 45) {
		e->Handled = true;
		return;
	}

	String^ text = textBox3->Text;
	// запрет последовательного ввода знака "-" после имеющегося минуcа
	if (text == "-" && e->KeyChar != 8 && e->KeyChar < 48 || e->KeyChar > 57)
		e->Handled = true;
	// запрет на ввод минуса при перемещении курсора в начало
	if (e->KeyChar == 45 && textBox3->SelectionStart != 0 && text != "")
		e->Handled = true;
}
private: System::Void textBox13_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
	char number = e->KeyChar;
	textBox13->MaxLength = 4;
	if ((e->KeyChar < 48 || e->KeyChar > 57) && e->KeyChar != 8 && e->KeyChar != 45) {
		e->Handled = true;
		return;
	}

	String^ text = textBox13->Text;
	// запрет последовательного ввода знака "-" после имеющегося минуcа
	if (text == "-" && e->KeyChar != 8 && e->KeyChar < 48 || e->KeyChar > 57)
		e->Handled = true;
	// запрет на ввод минуса при перемещении курсора в начало
	if (e->KeyChar == 45 && textBox13->SelectionStart != 0 && text != "")
		e->Handled = true;
}
private: System::Void textBox4_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
	char number = e->KeyChar;
	textBox4->MaxLength = 4;
	if ((e->KeyChar < 48 || e->KeyChar > 57) && e->KeyChar != 8 && e->KeyChar != 45) {
		e->Handled = true;
		return;
	}

	String^ text = textBox4->Text;
	// запрет последовательного ввода знака "-" после имеющегося минуcа
	if (text == "-" && e->KeyChar != 8 && e->KeyChar < 48 || e->KeyChar > 57)
		e->Handled = true;
	// запрет на ввод минуса при перемещении курсора в начало
	if (e->KeyChar == 45 && textBox4->SelectionStart != 0 && text != "")
		e->Handled = true;
}
private: System::Void textBox5_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
	char number = e->KeyChar;
	textBox5->MaxLength = 4;
	if ((e->KeyChar < 48 || e->KeyChar > 57) && e->KeyChar != 8 && e->KeyChar != 45) {
		e->Handled = true;
		return;
	}

	String^ text = textBox5->Text;
	// запрет последовательного ввода знака "-" после имеющегося минуcа
	if (text == "-" && e->KeyChar != 8 && e->KeyChar < 48 || e->KeyChar > 57)
		e->Handled = true;
	// запрет на ввод минуса при перемещении курсора в начало
	if (e->KeyChar == 45 && textBox5->SelectionStart != 0 && text != "")
		e->Handled = true;
}
private: System::Void textBox6_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
	char number = e->KeyChar;
	textBox6->MaxLength = 4;
	if ((e->KeyChar < 48 || e->KeyChar > 57) && e->KeyChar != 8 && e->KeyChar != 45) {
		e->Handled = true;
		return;
	}

	String^ text = textBox6->Text;
	// запрет последовательного ввода знака "-" после имеющегося минуcа
	if (text == "-" && e->KeyChar != 8 && e->KeyChar < 48 || e->KeyChar > 57)
		e->Handled = true;
	// запрет на ввод минуса при перемещении курсора в начало
	if (e->KeyChar == 45 && textBox6->SelectionStart != 0 && text != "")
		e->Handled = true;
}
private: System::Void textBox14_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
	char number = e->KeyChar;
	textBox14->MaxLength = 4;
	if ((e->KeyChar < 48 || e->KeyChar > 57) && e->KeyChar != 8 && e->KeyChar != 45) {
		e->Handled = true;
		return;
	}

	String^ text = textBox14->Text;
	// запрет последовательного ввода знака "-" после имеющегося минуcа
	if (text == "-" && e->KeyChar != 8 && e->KeyChar < 48 || e->KeyChar > 57)
		e->Handled = true;
	// запрет на ввод минуса при перемещении курсора в начало
	if (e->KeyChar == 45 && textBox14->SelectionStart != 0 && text != "")
		e->Handled = true;
}
private: System::Void textBox7_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
	char number = e->KeyChar;
	textBox7->MaxLength = 4;
	if ((e->KeyChar < 48 || e->KeyChar > 57) && e->KeyChar != 8 && e->KeyChar != 45) {
		e->Handled = true;
		return;
	}

	String^ text = textBox7->Text;
	// запрет последовательного ввода знака "-" после имеющегося минуcа
	if (text == "-" && e->KeyChar != 8 && e->KeyChar < 48 || e->KeyChar > 57)
		e->Handled = true;
	// запрет на ввод минуса при перемещении курсора в начало
	if (e->KeyChar == 45 && textBox7->SelectionStart != 0 && text != "")
		e->Handled = true;
}
private: System::Void textBox8_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
	char number = e->KeyChar;
	textBox8->MaxLength = 4;
	if ((e->KeyChar < 48 || e->KeyChar > 57) && e->KeyChar != 8 && e->KeyChar != 45) {
		e->Handled = true;
		return;
	}

	String^ text = textBox8->Text;
	// запрет последовательного ввода знака "-" после имеющегося минуcа
	if (text == "-" && e->KeyChar != 8 && e->KeyChar < 48 || e->KeyChar > 57)
		e->Handled = true;
	// запрет на ввод минуса при перемещении курсора в начало
	if (e->KeyChar == 45 && textBox8->SelectionStart != 0 && text != "")
		e->Handled = true;
}
private: System::Void textBox9_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
	char number = e->KeyChar;
	textBox9->MaxLength = 4;
	if ((e->KeyChar < 48 || e->KeyChar > 57) && e->KeyChar != 8 && e->KeyChar != 45) {
		e->Handled = true;
		return;
	}

	String^ text = textBox9->Text;
	// запрет последовательного ввода знака "-" после имеющегося минуcа
	if (text == "-" && e->KeyChar != 8 && e->KeyChar < 48 || e->KeyChar > 57)
		e->Handled = true;
	// запрет на ввод минуса при перемещении курсора в начало
	if (e->KeyChar == 45 && textBox9->SelectionStart != 0 && text != "")
		e->Handled = true;
}
private: System::Void textBox15_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {

	char number = e->KeyChar;
	textBox15->MaxLength = 4;
	if ((e->KeyChar < 48 || e->KeyChar > 57) && e->KeyChar != 8 && e->KeyChar != 45) {
		e->Handled = true;
		return;
	}

	String^ text = textBox15->Text;
	// запрет последовательного ввода знака "-" после имеющегося минуcа
	if (text == "-" && e->KeyChar != 8 && e->KeyChar < 48 || e->KeyChar > 57)
		e->Handled = true;
	// запрет на ввод минуса при перемещении курсора в начало
	if (e->KeyChar == 45 && textBox15->SelectionStart != 0 && text != "")
		e->Handled = true;
}
};
}
