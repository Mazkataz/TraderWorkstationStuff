#pragma once

namespace IB_Option_Pricing_VC {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
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
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  btnCOnnect;
	protected: 
	private: System::Windows::Forms::TextBox^  tbOrderId;
	private: System::Windows::Forms::TextBox^  tbSymbol;
	private: System::Windows::Forms::Button^  btnCalculate;
	private: System::Windows::Forms::TextBox^  tbStockPrice;

	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::TextBox^  tbStrikePrice;

	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::TextBox^  tbExpirationDate;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::TextBox^  tbVolatility;
	private: System::Windows::Forms::Label^  label6;





	private: System::Windows::Forms::ListBox^  lbErrors;
	private: AxTWSLib::AxTws^  axTws1;
	private: System::Windows::Forms::TextBox^  tbCallPremium;
	private: System::Windows::Forms::Label^  label7;


	private: System::Windows::Forms::TextBox^  txtVega;

	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::Label^  label11;
	private: System::Windows::Forms::Label^  label13;
	private: System::Windows::Forms::TextBox^  txtGamma;
	private: System::Windows::Forms::TextBox^  txtDelta;


	private: System::Windows::Forms::TextBox^  txtTheta;

	private: System::Windows::Forms::Label^  label12;
	private: System::Windows::Forms::TextBox^  tbRight;
	private: System::Windows::Forms::Label^  Right;

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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Form1::typeid));
			this->btnCOnnect = (gcnew System::Windows::Forms::Button());
			this->tbOrderId = (gcnew System::Windows::Forms::TextBox());
			this->tbSymbol = (gcnew System::Windows::Forms::TextBox());
			this->btnCalculate = (gcnew System::Windows::Forms::Button());
			this->tbStockPrice = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->tbStrikePrice = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->tbExpirationDate = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->tbVolatility = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->lbErrors = (gcnew System::Windows::Forms::ListBox());
			this->axTws1 = (gcnew AxTWSLib::AxTws());
			this->tbCallPremium = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->txtVega = (gcnew System::Windows::Forms::TextBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->txtGamma = (gcnew System::Windows::Forms::TextBox());
			this->txtDelta = (gcnew System::Windows::Forms::TextBox());
			this->txtTheta = (gcnew System::Windows::Forms::TextBox());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->tbRight = (gcnew System::Windows::Forms::TextBox());
			this->Right = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->axTws1))->BeginInit();
			this->SuspendLayout();
			// 
			// btnCOnnect
			// 
			this->btnCOnnect->Location = System::Drawing::Point(77, 13);
			this->btnCOnnect->Name = L"btnCOnnect";
			this->btnCOnnect->Size = System::Drawing::Size(75, 23);
			this->btnCOnnect->TabIndex = 0;
			this->btnCOnnect->Text = L"Connect";
			this->btnCOnnect->UseVisualStyleBackColor = true;
			this->btnCOnnect->Click += gcnew System::EventHandler(this, &Form1::btnCOnnect_Click);
			// 
			// tbOrderId
			// 
			this->tbOrderId->Location = System::Drawing::Point(77, 43);
			this->tbOrderId->Name = L"tbOrderId";
			this->tbOrderId->Size = System::Drawing::Size(100, 20);
			this->tbOrderId->TabIndex = 1;
			this->tbOrderId->Text = L"777";
			this->tbOrderId->TextChanged += gcnew System::EventHandler(this, &Form1::tbOrderId_TextChanged);
			// 
			// tbSymbol
			// 
			this->tbSymbol->Location = System::Drawing::Point(77, 69);
			this->tbSymbol->Name = L"tbSymbol";
			this->tbSymbol->Size = System::Drawing::Size(139, 20);
			this->tbSymbol->TabIndex = 1;
			this->tbSymbol->Text = L"MSFT";
			// 
			// btnCalculate
			// 
			this->btnCalculate->Location = System::Drawing::Point(77, 210);
			this->btnCalculate->Name = L"btnCalculate";
			this->btnCalculate->Size = System::Drawing::Size(75, 23);
			this->btnCalculate->TabIndex = 0;
			this->btnCalculate->Text = L"Calculate";
			this->btnCalculate->UseVisualStyleBackColor = true;
			this->btnCalculate->Click += gcnew System::EventHandler(this, &Form1::btnCalculate_Click);
			// 
			// tbStockPrice
			// 
			this->tbStockPrice->Location = System::Drawing::Point(77, 95);
			this->tbStockPrice->Name = L"tbStockPrice";
			this->tbStockPrice->Size = System::Drawing::Size(100, 20);
			this->tbStockPrice->TabIndex = 1;
			this->tbStockPrice->Text = L"50";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(8, 72);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(41, 13);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Symbol";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(7, 46);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(42, 13);
			this->label2->TabIndex = 2;
			this->label2->Text = L"OrderId";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(8, 98);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(62, 13);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Stock Price";
			// 
			// tbStrikePrice
			// 
			this->tbStrikePrice->Location = System::Drawing::Point(77, 121);
			this->tbStrikePrice->Name = L"tbStrikePrice";
			this->tbStrikePrice->Size = System::Drawing::Size(100, 20);
			this->tbStrikePrice->TabIndex = 1;
			this->tbStrikePrice->Text = L"55";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(8, 124);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(61, 13);
			this->label5->TabIndex = 2;
			this->label5->Text = L"Strike Price";
			// 
			// tbExpirationDate
			// 
			this->tbExpirationDate->Location = System::Drawing::Point(77, 147);
			this->tbExpirationDate->Name = L"tbExpirationDate";
			this->tbExpirationDate->Size = System::Drawing::Size(100, 20);
			this->tbExpirationDate->TabIndex = 1;
			this->tbExpirationDate->Text = L"20160520";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(8, 150);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(62, 13);
			this->label4->TabIndex = 2;
			this->label4->Text = L"Expir.  Date";
			// 
			// tbVolatility
			// 
			this->tbVolatility->Location = System::Drawing::Point(77, 173);
			this->tbVolatility->Name = L"tbVolatility";
			this->tbVolatility->Size = System::Drawing::Size(100, 20);
			this->tbVolatility->TabIndex = 1;
			this->tbVolatility->Text = L"0.21";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(8, 176);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(45, 13);
			this->label6->TabIndex = 2;
			this->label6->Text = L"Volatility";
			// 
			// lbErrors
			// 
			this->lbErrors->FormattingEnabled = true;
			this->lbErrors->Location = System::Drawing::Point(23, 241);
			this->lbErrors->Name = L"lbErrors";
			this->lbErrors->Size = System::Drawing::Size(665, 95);
			this->lbErrors->TabIndex = 4;
			// 
			// axTws1
			// 
			this->axTws1->Enabled = true;
			this->axTws1->Location = System::Drawing::Point(488, 69);
			this->axTws1->Name = L"axTws1";
			this->axTws1->OcxState = (cli::safe_cast<System::Windows::Forms::AxHost::State^  >(resources->GetObject(L"axTws1.OcxState")));
			this->axTws1->Size = System::Drawing::Size(100, 50);
			this->axTws1->TabIndex = 5;
			this->axTws1->tickPrice += gcnew AxTWSLib::_DTwsEvents_tickPriceEventHandler(this, &Form1::axTws1_tickPrice);
			this->axTws1->contractDetails += gcnew AxTWSLib::_DTwsEvents_contractDetailsEventHandler(this, &Form1::axTws1_contractDetails);
			this->axTws1->historicalData += gcnew AxTWSLib::_DTwsEvents_historicalDataEventHandler(this, &Form1::axTws1_historicalData);
			this->axTws1->tickOptionComputation += gcnew AxTWSLib::_DTwsEvents_tickOptionComputationEventHandler(this, &Form1::axTws1_tickOptionComputation);
			// 
			// tbCallPremium
			// 
			this->tbCallPremium->Location = System::Drawing::Point(313, 43);
			this->tbCallPremium->Name = L"tbCallPremium";
			this->tbCallPremium->Size = System::Drawing::Size(100, 20);
			this->tbCallPremium->TabIndex = 1;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(222, 46);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(47, 13);
			this->label7->TabIndex = 2;
			this->label7->Text = L"Premium";
			// 
			// txtVega
			// 
			this->txtVega->Location = System::Drawing::Point(571, 170);
			this->txtVega->Name = L"txtVega";
			this->txtVega->Size = System::Drawing::Size(46, 20);
			this->txtVega->TabIndex = 10;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(515, 171);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(32, 13);
			this->label10->TabIndex = 11;
			this->label10->Text = L"Vega";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(397, 173);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(43, 13);
			this->label11->TabIndex = 12;
			this->label11->Text = L"Gamma";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(515, 220);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(35, 13);
			this->label13->TabIndex = 14;
			this->label13->Text = L"Theta";
			// 
			// txtGamma
			// 
			this->txtGamma->Location = System::Drawing::Point(448, 168);
			this->txtGamma->Name = L"txtGamma";
			this->txtGamma->Size = System::Drawing::Size(61, 20);
			this->txtGamma->TabIndex = 15;
			// 
			// txtDelta
			// 
			this->txtDelta->Location = System::Drawing::Point(448, 213);
			this->txtDelta->Name = L"txtDelta";
			this->txtDelta->Size = System::Drawing::Size(46, 20);
			this->txtDelta->TabIndex = 16;
			// 
			// txtTheta
			// 
			this->txtTheta->Location = System::Drawing::Point(571, 217);
			this->txtTheta->Name = L"txtTheta";
			this->txtTheta->Size = System::Drawing::Size(46, 20);
			this->txtTheta->TabIndex = 17;
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(397, 216);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(32, 13);
			this->label12->TabIndex = 18;
			this->label12->Text = L"Delta";
			// 
			// tbRight
			// 
			this->tbRight->Location = System::Drawing::Point(238, 151);
			this->tbRight->Name = L"tbRight";
			this->tbRight->Size = System::Drawing::Size(41, 20);
			this->tbRight->TabIndex = 19;
			this->tbRight->Text = L"PUT";
			// 
			// Right
			// 
			this->Right->AutoSize = true;
			this->Right->Location = System::Drawing::Point(200, 154);
			this->Right->Name = L"Right";
			this->Right->Size = System::Drawing::Size(32, 13);
			this->Right->TabIndex = 20;
			this->Right->Text = L"Right";
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->ClientSize = System::Drawing::Size(700, 348);
			this->Controls->Add(this->Right);
			this->Controls->Add(this->tbRight);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->txtTheta);
			this->Controls->Add(this->txtDelta);
			this->Controls->Add(this->txtGamma);
			this->Controls->Add(this->label13);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->txtVega);
			this->Controls->Add(this->axTws1);
			this->Controls->Add(this->lbErrors);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->tbCallPremium);
			this->Controls->Add(this->tbVolatility);
			this->Controls->Add(this->tbExpirationDate);
			this->Controls->Add(this->tbStrikePrice);
			this->Controls->Add(this->tbStockPrice);
			this->Controls->Add(this->tbSymbol);
			this->Controls->Add(this->tbOrderId);
			this->Controls->Add(this->btnCalculate);
			this->Controls->Add(this->btnCOnnect);
			this->Name = L"Form1";
			this->Text = L"Form1";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->axTws1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}

	

	








#pragma endregion
	
private: System::Void btnCOnnect_Click(System::Object^  sender, System::EventArgs^  e) {



			 // Connect to the IB Data Server
    // The First parameter is the IP address of the server. Leave this blank
    // The Second parameter is the network port. Used the default of 7496
    // The third parameter is the client application identifier
			 this->axTws1->connect("", 7496, 0); MessageBox::Show("connected"); 



		 }



private: System::Void btnCalculate_Click(System::Object^  sender, System::EventArgs^  e) {


			  TWSLib::IContract^ ContractInfo = axTws1->createContract();
    // Now fill the ContractInfo object with the necessary information 
    ContractInfo->conId = 0;              
    // Stock symbol
    ContractInfo->symbol = this->tbSymbol->Text;        
     // Type of instrument: Stock=STK,Option=OPT,Future=FUT, etc.
    ContractInfo->secType = "OPT";        
     // The Options or Futures expiration data in the format YYYYMMDD
    ContractInfo->expiry = this->tbExpirationDate->Text;
    // The Options Strike Price 
    ContractInfo->strike = Convert::ToDouble(this->tbStrikePrice->Text);
    // The Options "PUT" or "CALL" rights 
    ContractInfo->right = this->tbRight->Text; 
     // The contract multiplier for Futures or Options 
    ContractInfo->multiplier = "100";
    // The destination of order or request. "SMART" =IB order router
    ContractInfo->exchange = "SMART"; 
    // The currency of the exchange USD or GBP or CAD or EUR, etc.
    ContractInfo->currency = "USD";      
    // Call calculateOptionPrice with four parameters: 
    // orderId, Contract, volatility and underlyingPrice
    this->axTws1->calculateOptionPrice (Convert::ToInt32(tbOrderId->Text), 
                                         ContractInfo, 
                                         Convert::ToDouble(tbVolatility->Text),
                                         Convert::ToDouble(tbStockPrice->Text));

} // end btnCalculate_Click








		 
private: System::Void tbOrderId_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void axTws1_tickPrice(System::Object^  sender, AxTWSLib::_DTwsEvents_tickPriceEvent^  e) {
		 }
private: System::Void axTws1_historicalData(System::Object^  sender, AxTWSLib::_DTwsEvents_historicalDataEvent^  e) {
		 }
private: System::Void axTws1_contractDetails(System::Object^  sender, AxTWSLib::_DTwsEvents_contractDetailsEvent^  e) {






		 }
private: System::Void axTws1_tickOptionComputation(System::Object^  sender, AxTWSLib::_DTwsEvents_tickOptionComputationEvent^  e) {
		


    // The theoretical prices and the Greeks will appear in object e
    //  e->optPrice      The theoretical option price
    //  e->delta         The option delta
    //  e->gamma         The option gamma
    //  e->vega          The option vega
    //  e->theta         The option theta
    //  e->undPrice      the underlying price
    //  Convert the optPrice to a string and assign it to the textbox
								this->tbCallPremium->Text = e->optPrice.ToString();
								txtDelta->Text=Convert::ToString(e->delta); 
																txtGamma->Text=Convert::ToString(e->gamma);
																txtTheta->Text=Convert::ToString(e->theta); 
																txtVega->Text=Convert::ToString(e->vega); 


} // end axTws1_tickOptionComputation


		 
		 
		 
		
};
}

