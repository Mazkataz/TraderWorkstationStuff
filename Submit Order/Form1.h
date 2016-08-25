

#pragma once

namespace IB_Submit_Order_VC {

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
	private: System::Windows::Forms::Label^  label1;
	protected: 
	private: System::Windows::Forms::TextBox^  tbOrderId;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::TextBox^  tbAction;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::TextBox^  tbQuantity;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::TextBox^  tbSymbol;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::TextBox^  tbExchange;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::TextBox^  tbPrimaryExchange;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::TextBox^  tbOrderType;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::TextBox^  tbLimitPrice;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::TextBox^  tbStatus;
	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::TextBox^  tbFilled;
	private: System::Windows::Forms::Label^  label11;
	private: System::Windows::Forms::TextBox^  tbRemaining;
	private: System::Windows::Forms::Label^  label12;
	private: System::Windows::Forms::TextBox^  tbAveragePrice;
	private: System::Windows::Forms::Button^  btnConnect;
	private: System::Windows::Forms::Button^  btnSubmit;
	private: System::Windows::Forms::Button^  btnCancel;
	//private: AxTWSLib::AxTws^  axTws1;
	private: System::Windows::Forms::ListBox^  lbErrors;
	private: AxTWSLib::AxTws^  axTws1;


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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->tbOrderId = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->tbAction = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->tbQuantity = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->tbSymbol = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->tbExchange = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->tbPrimaryExchange = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->tbOrderType = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->tbLimitPrice = (gcnew System::Windows::Forms::TextBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->tbStatus = (gcnew System::Windows::Forms::TextBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->tbFilled = (gcnew System::Windows::Forms::TextBox());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->tbRemaining = (gcnew System::Windows::Forms::TextBox());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->tbAveragePrice = (gcnew System::Windows::Forms::TextBox());
			this->btnConnect = (gcnew System::Windows::Forms::Button());
			this->btnSubmit = (gcnew System::Windows::Forms::Button());
			this->btnCancel = (gcnew System::Windows::Forms::Button());
			this->lbErrors = (gcnew System::Windows::Forms::ListBox());
			this->axTws1 = (gcnew AxTWSLib::AxTws());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->axTws1))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(5, 57);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(44, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"OrderID";
			// 
			// tbOrderId
			// 
			this->tbOrderId->Location = System::Drawing::Point(69, 54);
			this->tbOrderId->Name = L"tbOrderId";
			this->tbOrderId->Size = System::Drawing::Size(100, 20);
			this->tbOrderId->TabIndex = 1;
			this->tbOrderId->Text = L"333";
			this->tbOrderId->Click += gcnew System::EventHandler(this, &Form1::tbOrderId_DoubleClick);
			this->tbOrderId->TextChanged += gcnew System::EventHandler(this, &Form1::tbOrderId_TextChanged);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(5, 83);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(37, 13);
			this->label2->TabIndex = 0;
			this->label2->Text = L"Action";
			// 
			// tbAction
			// 
			this->tbAction->Location = System::Drawing::Point(69, 80);
			this->tbAction->Name = L"tbAction";
			this->tbAction->Size = System::Drawing::Size(100, 20);
			this->tbAction->TabIndex = 1;
			this->tbAction->Text = L"BUY";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(5, 109);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(46, 13);
			this->label3->TabIndex = 0;
			this->label3->Text = L"Quantity";
			// 
			// tbQuantity
			// 
			this->tbQuantity->Location = System::Drawing::Point(69, 106);
			this->tbQuantity->Name = L"tbQuantity";
			this->tbQuantity->Size = System::Drawing::Size(100, 20);
			this->tbQuantity->TabIndex = 1;
			this->tbQuantity->Text = L"100";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(5, 135);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(41, 13);
			this->label4->TabIndex = 0;
			this->label4->Text = L"Symbol";
			// 
			// tbSymbol
			// 
			this->tbSymbol->Location = System::Drawing::Point(69, 132);
			this->tbSymbol->Name = L"tbSymbol";
			this->tbSymbol->Size = System::Drawing::Size(100, 20);
			this->tbSymbol->TabIndex = 1;
			this->tbSymbol->Text = L"MSFT";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(5, 161);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(55, 13);
			this->label5->TabIndex = 0;
			this->label5->Text = L"Exchange";
			// 
			// tbExchange
			// 
			this->tbExchange->Location = System::Drawing::Point(69, 158);
			this->tbExchange->Name = L"tbExchange";
			this->tbExchange->Size = System::Drawing::Size(100, 20);
			this->tbExchange->TabIndex = 1;
			this->tbExchange->Text = L"SMART";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(5, 187);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(59, 13);
			this->label6->TabIndex = 0;
			this->label6->Text = L"Primary Ex.";
			// 
			// tbPrimaryExchange
			// 
			this->tbPrimaryExchange->Location = System::Drawing::Point(69, 184);
			this->tbPrimaryExchange->Name = L"tbPrimaryExchange";
			this->tbPrimaryExchange->Size = System::Drawing::Size(100, 20);
			this->tbPrimaryExchange->TabIndex = 1;
			this->tbPrimaryExchange->Text = L"NASDAQ";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(5, 213);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(60, 13);
			this->label7->TabIndex = 0;
			this->label7->Text = L"Order Type";
			// 
			// tbOrderType
			// 
			this->tbOrderType->Location = System::Drawing::Point(69, 210);
			this->tbOrderType->Name = L"tbOrderType";
			this->tbOrderType->Size = System::Drawing::Size(100, 20);
			this->tbOrderType->TabIndex = 1;
			this->tbOrderType->Text = L"LMT";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(5, 239);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(55, 13);
			this->label8->TabIndex = 0;
			this->label8->Text = L"Limit Price";
			// 
			// tbLimitPrice
			// 
			this->tbLimitPrice->Location = System::Drawing::Point(69, 236);
			this->tbLimitPrice->Name = L"tbLimitPrice";
			this->tbLimitPrice->Size = System::Drawing::Size(100, 20);
			this->tbLimitPrice->TabIndex = 1;
			this->tbLimitPrice->Text = L"50";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(205, 53);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(37, 13);
			this->label9->TabIndex = 0;
			this->label9->Text = L"Status";
			// 
			// tbStatus
			// 
			this->tbStatus->Location = System::Drawing::Point(269, 50);
			this->tbStatus->Name = L"tbStatus";
			this->tbStatus->Size = System::Drawing::Size(100, 20);
			this->tbStatus->TabIndex = 1;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(205, 79);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(31, 13);
			this->label10->TabIndex = 0;
			this->label10->Text = L"Filled";
			// 
			// tbFilled
			// 
			this->tbFilled->Location = System::Drawing::Point(269, 76);
			this->tbFilled->Name = L"tbFilled";
			this->tbFilled->Size = System::Drawing::Size(100, 20);
			this->tbFilled->TabIndex = 1;
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(205, 105);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(57, 13);
			this->label11->TabIndex = 0;
			this->label11->Text = L"Remaining";
			// 
			// tbRemaining
			// 
			this->tbRemaining->Location = System::Drawing::Point(269, 102);
			this->tbRemaining->Name = L"tbRemaining";
			this->tbRemaining->Size = System::Drawing::Size(100, 20);
			this->tbRemaining->TabIndex = 1;
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(205, 131);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(56, 13);
			this->label12->TabIndex = 0;
			this->label12->Text = L"Avg. Price";
			// 
			// tbAveragePrice
			// 
			this->tbAveragePrice->Location = System::Drawing::Point(269, 128);
			this->tbAveragePrice->Name = L"tbAveragePrice";
			this->tbAveragePrice->Size = System::Drawing::Size(100, 20);
			this->tbAveragePrice->TabIndex = 1;
			// 
			// btnConnect
			// 
			this->btnConnect->Location = System::Drawing::Point(69, 13);
			this->btnConnect->Name = L"btnConnect";
			this->btnConnect->Size = System::Drawing::Size(75, 23);
			this->btnConnect->TabIndex = 2;
			this->btnConnect->Text = L"Connect";
			this->btnConnect->UseVisualStyleBackColor = true;
			this->btnConnect->Click += gcnew System::EventHandler(this, &Form1::btnConnect_Click);
			// 
			// btnSubmit
			// 
			this->btnSubmit->Location = System::Drawing::Point(69, 281);
			this->btnSubmit->Name = L"btnSubmit";
			this->btnSubmit->Size = System::Drawing::Size(75, 23);
			this->btnSubmit->TabIndex = 2;
			this->btnSubmit->Text = L"Submit";
			this->btnSubmit->UseVisualStyleBackColor = true;
			this->btnSubmit->Click += gcnew System::EventHandler(this, &Form1::btnSubmit_Click);
			// 
			// btnCancel
			// 
			this->btnCancel->Location = System::Drawing::Point(161, 281);
			this->btnCancel->Name = L"btnCancel";
			this->btnCancel->Size = System::Drawing::Size(75, 23);
			this->btnCancel->TabIndex = 2;
			this->btnCancel->Text = L"Cancel";
			this->btnCancel->UseVisualStyleBackColor = true;
			this->btnCancel->Click += gcnew System::EventHandler(this, &Form1::btnCancel_Click);
			// 
			// lbErrors
			// 
			this->lbErrors->FormattingEnabled = true;
			this->lbErrors->Location = System::Drawing::Point(8, 315);
			this->lbErrors->Name = L"lbErrors";
			this->lbErrors->Size = System::Drawing::Size(894, 95);
			this->lbErrors->TabIndex = 4;
			// 
			// axTws1
			// 
			this->axTws1->Enabled = true;
			this->axTws1->Location = System::Drawing::Point(595, 83);
			this->axTws1->Name = L"axTws1";
			this->axTws1->OcxState = (cli::safe_cast<System::Windows::Forms::AxHost::State^  >(resources->GetObject(L"axTws1.OcxState")));
			this->axTws1->Size = System::Drawing::Size(100, 50);
			this->axTws1->TabIndex = 5;
			this->axTws1->nextValidId += gcnew AxTWSLib::_DTwsEvents_nextValidIdEventHandler(this, &Form1::axTws1_nextValidId);
			this->axTws1->orderStatus += gcnew AxTWSLib::_DTwsEvents_orderStatusEventHandler(this, &Form1::axTws1_orderStatus);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(914, 410);
			this->Controls->Add(this->axTws1);
			this->Controls->Add(this->lbErrors);
			this->Controls->Add(this->btnCancel);
			this->Controls->Add(this->btnSubmit);
			this->Controls->Add(this->btnConnect);
			this->Controls->Add(this->tbLimitPrice);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->tbOrderType);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->tbPrimaryExchange);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->tbExchange);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->tbSymbol);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->tbQuantity);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->tbAction);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->tbAveragePrice);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->tbRemaining);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->tbFilled);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->tbStatus);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->tbOrderId);
			this->Controls->Add(this->label1);
			this->Name = L"Form1";
			this->Text = L"Form1";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->axTws1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
private: System::Void btnConnect_Click(System::Object^  sender, System::EventArgs^  e) {

			 // Connect to the IB Data Server
    // The First parameter is the IP address of the server. Leave this blank
    // The Second parameter is the network port. Used the default of 7496
    // The third parameter is the client application identifier
    this->axTws1->connect("", 7496, 0);





		 } // end btnConnect_Click



		 private: System::Void axTws1_orderStatus(System::Object^ sender, 
                 AxTWSLib::_DTwsEvents_orderStatusEvent^ e) {

					 
// Get the status of an order. 
    // Responds to every change in order status.
    // Status in in event object e:
    // e->id              The OrderID (long)
    // e->status          The status of the order (string)
    // e->filled          The number of shares/contracts filled in the so far (long)
    // e->remaining       The number of shares/contracts remaining in the order (long)
    // e->avgFillPrice    The average fill price (double)
    // e->permId          The permenent order Id (long)
    // e->lastFilledPrice The price of the last partial fill (double)
    // e->clientId        The Id of the client who placed the order (long)
    this->tbStatus->Text = e->status;
    this->tbFilled->Text = Convert::ToString(e->filled);
    this->tbRemaining->Text = Convert::ToString(e->remaining);
    this->tbAveragePrice->Text = Convert::ToString(e->avgFillPrice);


	


}

	



private: System::Void btnSubmit_Click(System::Object^  sender, System::EventArgs^  e) {

  // Create a new ContractInfo object
    TWSLib::IContract^ ContractInfo = axTws1->createContract();
    // Create a new Order object
    TWSLib::IOrder^ OrderInfo = axTws1->createOrder();
    // Fill the ContractInfo object with the necessary information 
    // Contract identifier (set to 0 if unknown)
    ContractInfo->conId = 0;              
    // The ticker symbol for the order
    ContractInfo->symbol = this->tbSymbol->Text;
    // Type of instrument: Stock=STK,Option=OPT,Future=FUT, etc.
    ContractInfo->secType = "STK";        
    // The Options or Futures expiration data in the format YYYYMM
    ContractInfo->expiry = "";            
    // The Options Strike Price 
    ContractInfo->strike = 0;
    // The Options "PUT" or "CALL" 
    ContractInfo->right = ""; 
    // The contract multiplier for Futures or Options
    ContractInfo->multiplier = "";        
    // The destination of order or request. "SMART" =IB order router
    ContractInfo->exchange = this->tbExchange->Text;
    // The primary exchange where the instrument trades. 
    // NYSE, NASDAQ, AMEX, BATS, ARCA, PHLX etc.
    ContractInfo->primaryExchange = this->tbPrimaryExchange->Text;
    // The currency of the exchange USD or GBP or CAD or EUR, etc.
    ContractInfo->currency = "USD";                                         
    // Fill in the Order information:
    // orderId is a *Unique* order identifier
    OrderInfo->orderId = long::Parse(this->tbOrderId->Text);
    // Action will be BUY, SELL or SSHORT
    OrderInfo->action = this->tbAction->Text;
    // totalQuantity is the total number of shares (or contracts)
    OrderInfo->totalQuantity = long::Parse(this->tbQuantity->Text);
    // orderType is one of MKT, LMT, STP, etc.
    OrderInfo->orderType = this->tbOrderType->Text;
    // lmtPrice is the limit price for a limit order
    OrderInfo->lmtPrice = double::Parse(this->tbLimitPrice->Text);
    // timeInForce is either DAY, GTC, IOC, GTD etc.
    OrderInfo->timeInForce = "DAY";
    // There are about 40 other properties for different order types...
    // Submit the order
    this->axTws1->placeOrderEx(long::Parse(this->tbOrderId->Text), 
                                       ContractInfo, OrderInfo);





         } // end btnSubmit_Click

private: System::Void btnCancel_Click(System::Object^  sender, System::EventArgs^  e) {

			 // Cancel the order. Takes one parameter:
   //  - OrderID
   this->axTws1->cancelOrder(long::Parse(this->tbOrderId->Text) );







         } // end btnCancel_Click

		
		 	private: System::Void axTws1_nextValidId(System::Object^  sender,
                  AxTWSLib::_DTwsEvents_nextValidIdEvent^  e) {



    // New unique OrderId event handler
    // Unique Id will be in e->id (long)
    this->tbOrderId->Text = Convert::ToString(e->id);



}  // end axTws1_nextValidId 
private: System::Void tbOrderId_DoubleClick(System::Object^  sender, System::EventArgs^  e) {
     

			  // Request a new unique OrderId
     this->axTws1->reqIds(1);
} // end tbOrderId_DoubleClick



		 

private: System::Void tbOrderId_Click(System::Object^  sender, System::EventArgs^  e) {
			
		 }
private: System::Void tbOrderId_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		 }
};
}

