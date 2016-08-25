#include <iomanip> 
#pragma once


namespace IbRealTimeDataVC {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Windows::Forms::DataVisualization::Charting;

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
			       lstPriceHistory = gcnew System::Collections::Generic::List<double>();

			//TODO: Add the constructor code here
			//
		}
		int NumberOfPrices ;
	private: System::Windows::Forms::DataVisualization::Charting::Chart^  chart1;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::TextBox^  textBox3;
	private: System::Windows::Forms::RadioButton^  rbNAS;
	private: System::Windows::Forms::RadioButton^  rbNYSE;
	private: System::Windows::Forms::RadioButton^  rbAMEX;
	private: System::Windows::Forms::RadioButton^  rbPHLX;




	private: System::Windows::Forms::RadioButton^  rbARCA;

	private: System::Windows::Forms::RadioButton^  rbBATS;





	public: 
		double dblPriceTotal ;

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
	private: System::Windows::Forms::ListBox^  listBox1;
	private: System::Windows::Forms::Button^  btn_start;


	private: System::Windows::Forms::Button^  btnStop;



	private: AxTWSLib::AxTws^  axTws1;
	private: System::Windows::Forms::Label^  box_lastTrade;


	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::TextBox^  textBox1;
			      System::Collections::Generic::List<double>^ lstPriceHistory;


	protected:

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
			System::Windows::Forms::DataVisualization::Charting::ChartArea^  chartArea1 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^  legend1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^  series1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Series^  series2 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->btn_start = (gcnew System::Windows::Forms::Button());
			this->btnStop = (gcnew System::Windows::Forms::Button());
			this->axTws1 = (gcnew AxTWSLib::AxTws());
			this->box_lastTrade = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->chart1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->rbNAS = (gcnew System::Windows::Forms::RadioButton());
			this->rbNYSE = (gcnew System::Windows::Forms::RadioButton());
			this->rbAMEX = (gcnew System::Windows::Forms::RadioButton());
			this->rbPHLX = (gcnew System::Windows::Forms::RadioButton());
			this->rbARCA = (gcnew System::Windows::Forms::RadioButton());
			this->rbBATS = (gcnew System::Windows::Forms::RadioButton());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->axTws1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->chart1))->BeginInit();
			this->SuspendLayout();
			// 
			// listBox1
			// 
			this->listBox1->FormattingEnabled = true;
			this->listBox1->Location = System::Drawing::Point(120, 241);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(151, 82);
			this->listBox1->TabIndex = 0;
			this->listBox1->TabStop = false;
			// 
			// btn_start
			// 
			this->btn_start->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->btn_start->Location = System::Drawing::Point(26, 403);
			this->btn_start->Name = L"btn_start";
			this->btn_start->Size = System::Drawing::Size(75, 23);
			this->btn_start->TabIndex = 1;
			this->btn_start->Text = L"Start";
			this->btn_start->UseVisualStyleBackColor = false;
			this->btn_start->Click += gcnew System::EventHandler(this, &Form1::btn_start_Click);
			// 
			// btnStop
			// 
			this->btnStop->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->btnStop->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->btnStop->Location = System::Drawing::Point(133, 403);
			this->btnStop->Name = L"btnStop";
			this->btnStop->Size = System::Drawing::Size(75, 23);
			this->btnStop->TabIndex = 4;
			this->btnStop->Text = L"Stop";
			this->btnStop->UseVisualStyleBackColor = false;
			this->btnStop->Click += gcnew System::EventHandler(this, &Form1::btnStop_Click);
			// 
			// axTws1
			// 
			this->axTws1->Enabled = true;
			this->axTws1->Location = System::Drawing::Point(29, 455);
			this->axTws1->Name = L"axTws1";
			this->axTws1->OcxState = (cli::safe_cast<System::Windows::Forms::AxHost::State^  >(resources->GetObject(L"axTws1.OcxState")));
			this->axTws1->Size = System::Drawing::Size(154, 50);
			this->axTws1->TabIndex = 6;
			this->axTws1->tickPrice += gcnew AxTWSLib::_DTwsEvents_tickPriceEventHandler(this, &Form1::axTws1_tickPrice_1);
			// 
			// box_lastTrade
			// 
			this->box_lastTrade->AutoSize = true;
			this->box_lastTrade->Location = System::Drawing::Point(13, 241);
			this->box_lastTrade->Name = L"box_lastTrade";
			this->box_lastTrade->Size = System::Drawing::Size(91, 13);
			this->box_lastTrade->TabIndex = 7;
			this->box_lastTrade->Text = L"Last Traded Price";
			this->box_lastTrade->Click += gcnew System::EventHandler(this, &Form1::label1_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(55, 347);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(49, 13);
			this->label1->TabIndex = 10;
			this->label1->Text = L"Bid Price";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(120, 344);
			this->textBox1->Name = L"textBox1";
			this->textBox1->ReadOnly = true;
			this->textBox1->Size = System::Drawing::Size(100, 20);
			this->textBox1->TabIndex = 11;
			// 
			// chart1
			// 
			chartArea1->Name = L"ChartArea1";
			this->chart1->ChartAreas->Add(chartArea1);
			legend1->Name = L"Legend1";
			this->chart1->Legends->Add(legend1);
			this->chart1->Location = System::Drawing::Point(293, 64);
			this->chart1->Name = L"chart1";
			series1->ChartArea = L"ChartArea1";
			series1->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Line;
			series1->Legend = L"Legend1";
			series1->Name = L"srsPrices";
			series2->ChartArea = L"ChartArea1";
			series2->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Line;
			series2->Legend = L"Legend1";
			series2->Name = L"srsAveragePrices";
			this->chart1->Series->Add(series1);
			this->chart1->Series->Add(series2);
			this->chart1->Size = System::Drawing::Size(300, 300);
			this->chart1->TabIndex = 12;
			this->chart1->Text = L"chart1";
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(120, 367);
			this->textBox2->Name = L"textBox2";
			this->textBox2->ReadOnly = true;
			this->textBox2->Size = System::Drawing::Size(100, 20);
			this->textBox2->TabIndex = 13;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(49, 370);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(52, 13);
			this->label2->TabIndex = 14;
			this->label2->Text = L"Ask Price";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->label3->Font = (gcnew System::Drawing::Font(L"Minion Pro", 26.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)), 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(17, 30);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(252, 49);
			this->label3->TabIndex = 15;
			this->label3->Text = L"Real Time Stock";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(26, 118);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(68, 13);
			this->label4->TabIndex = 16;
			this->label4->Text = L"Stock Ticker";
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(134, 118);
			this->textBox3->MaxLength = 4;
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(49, 20);
			this->textBox3->TabIndex = 17;
			// 
			// rbNAS
			// 
			this->rbNAS->AutoSize = true;
			this->rbNAS->Location = System::Drawing::Point(12, 151);
			this->rbNAS->Name = L"rbNAS";
			this->rbNAS->Size = System::Drawing::Size(62, 17);
			this->rbNAS->TabIndex = 18;
			this->rbNAS->TabStop = true;
			this->rbNAS->Text = L"Nasdaq";
			this->rbNAS->UseVisualStyleBackColor = true;
			// 
			// rbNYSE
			// 
			this->rbNYSE->AutoSize = true;
			this->rbNYSE->Location = System::Drawing::Point(98, 151);
			this->rbNYSE->Name = L"rbNYSE";
			this->rbNYSE->Size = System::Drawing::Size(54, 17);
			this->rbNYSE->TabIndex = 19;
			this->rbNYSE->TabStop = true;
			this->rbNYSE->Text = L"NYSE";
			this->rbNYSE->UseVisualStyleBackColor = true;
			// 
			// rbAMEX
			// 
			this->rbAMEX->AutoSize = true;
			this->rbAMEX->Location = System::Drawing::Point(184, 151);
			this->rbAMEX->Name = L"rbAMEX";
			this->rbAMEX->Size = System::Drawing::Size(55, 17);
			this->rbAMEX->TabIndex = 20;
			this->rbAMEX->TabStop = true;
			this->rbAMEX->Text = L"AMEX";
			this->rbAMEX->UseVisualStyleBackColor = true;
			// 
			// rbPHLX
			// 
			this->rbPHLX->AutoSize = true;
			this->rbPHLX->Location = System::Drawing::Point(16, 190);
			this->rbPHLX->Name = L"rbPHLX";
			this->rbPHLX->Size = System::Drawing::Size(53, 17);
			this->rbPHLX->TabIndex = 21;
			this->rbPHLX->TabStop = true;
			this->rbPHLX->Text = L"PHLX";
			this->rbPHLX->UseVisualStyleBackColor = true;
			// 
			// rbARCA
			// 
			this->rbARCA->AutoSize = true;
			this->rbARCA->Location = System::Drawing::Point(98, 190);
			this->rbARCA->Name = L"rbARCA";
			this->rbARCA->Size = System::Drawing::Size(54, 17);
			this->rbARCA->TabIndex = 22;
			this->rbARCA->TabStop = true;
			this->rbARCA->Text = L"ARCA";
			this->rbARCA->UseVisualStyleBackColor = true;
			// 
			// rbBATS
			// 
			this->rbBATS->AutoSize = true;
			this->rbBATS->Location = System::Drawing::Point(184, 190);
			this->rbBATS->Name = L"rbBATS";
			this->rbBATS->Size = System::Drawing::Size(53, 17);
			this->rbBATS->TabIndex = 23;
			this->rbBATS->TabStop = true;
			this->rbBATS->Text = L"BATS";
			this->rbBATS->UseVisualStyleBackColor = true;
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ButtonShadow;
			this->ClientSize = System::Drawing::Size(617, 578);
			this->Controls->Add(this->rbBATS);
			this->Controls->Add(this->rbARCA);
			this->Controls->Add(this->rbPHLX);
			this->Controls->Add(this->rbAMEX);
			this->Controls->Add(this->rbNYSE);
			this->Controls->Add(this->rbNAS);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->chart1);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->box_lastTrade);
			this->Controls->Add(this->axTws1);
			this->Controls->Add(this->btnStop);
			this->Controls->Add(this->btn_start);
			this->Controls->Add(this->listBox1);
			this->Name = L"Form1";
			this->Text = L"Form1";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->axTws1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->chart1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void btn_start_Click(System::Object^  sender, System::EventArgs^  e) {


				 NumberOfPrices=0 ;
    dblPriceTotal =0;
	

				 // Connect to the IB Data Server
				 // The First parameter is the IP address of the server. Leave this blank
				 // The Second parameter is the network port. Used the default of 7496
				 // The third parameter is the client application identifier
				 this->axTws1->connect("", 7496, 0);
				 // Create a new contract object
				 TWSLib::IContract^ ContractInfo = axTws1->createContract();
				 // Create an Empty TagValue List object. For API Version 9.71
				 TWSLib::ITagValueList^ mktDataOptions = axTws1->createTagValueList();
				 // Now fill the ContractInfo object with the necessary information 
				 // Contract identifier
				 ContractInfo->conId = 0;
				 // Stock symbol
				 ContractInfo->symbol = textBox3->Text;
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
				 ContractInfo->exchange = "SMART";
				 // The primary exchange where the instrument trades. 
				 // NYSE, NASDAQ, AMEX, BATS, ARCA, PHLX etc.
				 if(rbAMEX->Checked) 
				 ContractInfo->primaryExchange = "AMEX";
				 if(rbNYSE->Checked) 
				 ContractInfo->primaryExchange = "NYSE";
				 if(rbARCA->Checked) 
				 ContractInfo->primaryExchange = "ARCA";
				 if(rbNAS->Checked) 
				 ContractInfo->primaryExchange = "NASDAQ";
				 // The currency of the exchange USD or GBP or CAD or EUR, etc.
				 ContractInfo->currency = "USD";
				 // The local exchange symbol of the underlying asset.
				 ContractInfo->localSymbol = textBox3->Text;

				 //   TickerID - use a unique number for each request
				 //   ContractInfo - the Contract object containing the financial instrument
				 //   genericTicks - Can be used to get different tick types (use "" for now)
				 //   Snapshot (0 for streaming, 1 to get a single data point)
				 //   mktDataOptions - an empty TagValueList used for API version 9.71
				 axTws1->reqMktDataEx(0, ContractInfo, "", 0,mktDataOptions);
				 //   Note: If you receive an error asking for only 4 parameters, remove the
				 //   fifth parameter - mktDataOptions

	}//End of Start Button


private: System::Void btnStop_Click(System::Object^  sender, System::EventArgs^  e) {


			 // Cancel the request for market data
			 // Parameters are:
			 //  - OrderID  This should be the identifier used in the original call to reqMktData
			 this->axTws1->cancelMktData(0);
			 // Disconnect from the IB Data Server
			 this->axTws1->disconnect();







}//End of Stop Button
private: System::Void axTws1_tickPrice_1(System::Object^  sender, AxTWSLib::_DTwsEvents_tickPriceEvent^  e) {
			 // When this Event Handler is activated, price changes 
			 // will appear in the Events objects named "e" 
			 // Properties of "e" include:
			 // e->id()        The identifier that was set during the call to reqMktData
			 // e->price()     The latest Price
			 // e->tickType()  The tick type 1=bid,2=ask, 4=last, 6=high, 7=low, 9=close 
			 // e->canAutoExecute()   A flag 1= the order can be automatically executed
			 // If this is a last price change, then display it 

double dblMovingAverage=0;



			 
    chart1->Series["srsPrices"]->Points->AddY(e->price);


			  if (e->tickType == 4) {
				 // Add the latest price to the list box
				  this->listBox1->Items->Add("Last Price: "); 
				 this->listBox1->Items->Add(e->price);
				 
;}

			  		  if (e->tickType == 1) {
				 // Add the latest bid price to the list box
						   textBox1->Text=(Convert::ToString(e->price)); 

				 
;}

					    if (e->tickType == 2) {
				 // Add the latest bid price to the list box
						   textBox2->Text=(Convert::ToString(e->price)); 

				 
;}
				 				   double sum=0;


				   this->lstPriceHistory->Add(e->price); 



if(lstPriceHistory->Count>20) {this->lstPriceHistory->RemoveAt(0);   	   
 } 

for(int x=0;x<20;x++)  sum+=lstPriceHistory[x];


				   // MessageBox::Show(Convert::ToString(sum));
if(lstPriceHistory->Count<20) {
	  chart1->DataManipulator->InsertEmptyPoints(1, IntervalType::Number, "srsAveragePrices");
 }


				   dblMovingAverage=sum/20; 
				   chart1->Series["srsAveragePrices"]->Points->AddY(dblMovingAverage);


								 ++NumberOfPrices; dblPriceTotal+=e->price; 
			 

			  //if(e->tickType==5) {  this->listBox1->Items->Add("size = : "); 
			  //// this->listBox1->Items->Add(e->price) ;

			  //} 

			   this->listBox1->Items->Add("Average: ");  this->listBox1->Items->Add(dblMovingAverage); 

				 
				

			



}

		 
private: System::Void axTws1_tickSize(System::Object^  sender, AxTWSLib::_DTwsEvents_tickSizeEvent^  e) {
     // When this callback method/routine is activated, Size changes will 
     // appear in the Events objects named "e" 
     // Properties of "e" include:
     // e->id         The identifier that was set during the call to reqMktData
     // e->size       The latest Size
     // e->tickType   The type of tick 0=bid size, 3=ask size, 5=last size, 8=volume
} // end axTws1_tickSize





private: System::Void chart1_Click(System::Object^  sender, System::EventArgs^  e) {

			 



}
private: System::Void Form1_Load(System::Object^  sender, System::EventArgs^  e) {
		 }

private: System::Void label1_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
};
}


