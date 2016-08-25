#pragma once

namespace IB_Historical_Data_VC {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;
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
	private: System::Windows::Forms::Button^  btnConnect;
	protected: 
	private: System::Windows::Forms::Button^  btnRetrieve;
	private: System::Windows::Forms::TextBox^  tbSymbol;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::TextBox^  tbDate;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::TextBox^  tbExchange;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::TextBox^  tbDuration;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::TextBox^  tbBars;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::ListBox^  lbData;
	private: System::IO::StreamWriter^ sw;

	private: AxTWSLib::AxTws^  axTws1;
	private: System::Windows::Forms::DataVisualization::Charting::Chart^  chtStocks;
	private: System::Windows::Forms::CheckBox^  chBoxOpen;
	private: System::Windows::Forms::CheckBox^  chkBoxClose;
	private: System::Windows::Forms::CheckBox^  chkBoxHigh;
	private: System::Windows::Forms::CheckBox^  chkBoxLow;
	private: System::Windows::Forms::CheckBox^  chkBoxWAP;
	private: System::Windows::Forms::Label^  label6;







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
			System::Windows::Forms::DataVisualization::Charting::Series^  series3 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Series^  series4 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Series^  series5 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			this->btnConnect = (gcnew System::Windows::Forms::Button());
			this->btnRetrieve = (gcnew System::Windows::Forms::Button());
			this->tbSymbol = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->tbDate = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->tbExchange = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->tbDuration = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->tbBars = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->lbData = (gcnew System::Windows::Forms::ListBox());
			this->axTws1 = (gcnew AxTWSLib::AxTws());
			this->chtStocks = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->chBoxOpen = (gcnew System::Windows::Forms::CheckBox());
			this->chkBoxClose = (gcnew System::Windows::Forms::CheckBox());
			this->chkBoxHigh = (gcnew System::Windows::Forms::CheckBox());
			this->chkBoxLow = (gcnew System::Windows::Forms::CheckBox());
			this->chkBoxWAP = (gcnew System::Windows::Forms::CheckBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->axTws1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->chtStocks))->BeginInit();
			this->SuspendLayout();
			// 
			// btnConnect
			// 
			this->btnConnect->Location = System::Drawing::Point(89, 12);
			this->btnConnect->Name = L"btnConnect";
			this->btnConnect->Size = System::Drawing::Size(75, 23);
			this->btnConnect->TabIndex = 0;
			this->btnConnect->Text = L"Connect";
			this->btnConnect->UseVisualStyleBackColor = true;
			this->btnConnect->Click += gcnew System::EventHandler(this, &Form1::btnConnect_Click);
			// 
			// btnRetrieve
			// 
			this->btnRetrieve->Location = System::Drawing::Point(274, 12);
			this->btnRetrieve->Name = L"btnRetrieve";
			this->btnRetrieve->Size = System::Drawing::Size(75, 23);
			this->btnRetrieve->TabIndex = 0;
			this->btnRetrieve->Text = L"Retrieve";
			this->btnRetrieve->UseVisualStyleBackColor = true;
			this->btnRetrieve->Click += gcnew System::EventHandler(this, &Form1::btnRetrieve_Click);
			// 
			// tbSymbol
			// 
			this->tbSymbol->Location = System::Drawing::Point(78, 55);
			this->tbSymbol->Name = L"tbSymbol";
			this->tbSymbol->Size = System::Drawing::Size(100, 20);
			this->tbSymbol->TabIndex = 1;
			this->tbSymbol->Text = L"MSFT";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(24, 58);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(41, 13);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Symbol";
			// 
			// tbDate
			// 
			this->tbDate->Location = System::Drawing::Point(274, 55);
			this->tbDate->Name = L"tbDate";
			this->tbDate->Size = System::Drawing::Size(117, 20);
			this->tbDate->TabIndex = 1;
			this->tbDate->Text = L"20160301 16:00";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(188, 58);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(80, 13);
			this->label2->TabIndex = 2;
			this->label2->Text = L"End Date/Time";
			// 
			// tbExchange
			// 
			this->tbExchange->Location = System::Drawing::Point(78, 81);
			this->tbExchange->Name = L"tbExchange";
			this->tbExchange->Size = System::Drawing::Size(100, 20);
			this->tbExchange->TabIndex = 1;
			this->tbExchange->Text = L"SMART";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(24, 84);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(55, 13);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Exchange";
			// 
			// tbDuration
			// 
			this->tbDuration->Location = System::Drawing::Point(274, 81);
			this->tbDuration->Name = L"tbDuration";
			this->tbDuration->Size = System::Drawing::Size(117, 20);
			this->tbDuration->TabIndex = 1;
			this->tbDuration->Text = L"1 M";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(188, 84);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(47, 13);
			this->label4->TabIndex = 2;
			this->label4->Text = L"Duration";
			// 
			// tbBars
			// 
			this->tbBars->Location = System::Drawing::Point(454, 55);
			this->tbBars->Name = L"tbBars";
			this->tbBars->Size = System::Drawing::Size(117, 20);
			this->tbBars->TabIndex = 1;
			this->tbBars->Text = L"1 Day";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(407, 58);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(28, 13);
			this->label5->TabIndex = 2;
			this->label5->Text = L"Bars";
			// 
			// lbData
			// 
			this->lbData->FormattingEnabled = true;
			this->lbData->Location = System::Drawing::Point(27, 131);
			this->lbData->Name = L"lbData";
			this->lbData->Size = System::Drawing::Size(615, 121);
			this->lbData->TabIndex = 3;
			// 
			// axTws1
			// 
			this->axTws1->Enabled = true;
			this->axTws1->Location = System::Drawing::Point(726, 55);
			this->axTws1->Name = L"axTws1";
			this->axTws1->OcxState = (cli::safe_cast<System::Windows::Forms::AxHost::State^  >(resources->GetObject(L"axTws1.OcxState")));
			this->axTws1->Size = System::Drawing::Size(100, 50);
			this->axTws1->TabIndex = 4;
			this->axTws1->tickPrice += gcnew AxTWSLib::_DTwsEvents_tickPriceEventHandler(this, &Form1::axTws1_tickPrice);
			this->axTws1->historicalData += gcnew AxTWSLib::_DTwsEvents_historicalDataEventHandler(this, &Form1::axTws1_historicalData);
			// 
			// chtStocks
			// 
			chartArea1->Name = L"ChartArea1";
			this->chtStocks->ChartAreas->Add(chartArea1);
			legend1->Name = L"Legend1";
			this->chtStocks->Legends->Add(legend1);
			this->chtStocks->Location = System::Drawing::Point(692, 131);
			this->chtStocks->Name = L"chtStocks";
			series1->ChartArea = L"ChartArea1";
			series1->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Line;
			series1->Legend = L"Legend1";
			series1->Name = L"Closing Price";
			series2->ChartArea = L"ChartArea1";
			series2->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Line;
			series2->Legend = L"Legend1";
			series2->Name = L"High Price";
			series3->ChartArea = L"ChartArea1";
			series3->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Line;
			series3->Legend = L"Legend1";
			series3->Name = L"Low Price";
			series4->ChartArea = L"ChartArea1";
			series4->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Line;
			series4->Legend = L"Legend1";
			series4->Name = L"Weighted Average";
			series5->ChartArea = L"ChartArea1";
			series5->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Line;
			series5->Legend = L"Legend1";
			series5->Name = L"Open";
			this->chtStocks->Series->Add(series1);
			this->chtStocks->Series->Add(series2);
			this->chtStocks->Series->Add(series3);
			this->chtStocks->Series->Add(series4);
			this->chtStocks->Series->Add(series5);
			this->chtStocks->Size = System::Drawing::Size(300, 300);
			this->chtStocks->TabIndex = 5;
			this->chtStocks->Text = L"chart1";
			// 
			// chBoxOpen
			// 
			this->chBoxOpen->AutoSize = true;
			this->chBoxOpen->Location = System::Drawing::Point(60, 347);
			this->chBoxOpen->Name = L"chBoxOpen";
			this->chBoxOpen->Size = System::Drawing::Size(52, 17);
			this->chBoxOpen->TabIndex = 6;
			this->chBoxOpen->Text = L"Open";
			this->chBoxOpen->UseVisualStyleBackColor = true;
			// 
			// chkBoxClose
			// 
			this->chkBoxClose->AutoSize = true;
			this->chkBoxClose->Location = System::Drawing::Point(189, 347);
			this->chkBoxClose->Name = L"chkBoxClose";
			this->chkBoxClose->Size = System::Drawing::Size(52, 17);
			this->chkBoxClose->TabIndex = 7;
			this->chkBoxClose->Text = L"Close";
			this->chkBoxClose->UseVisualStyleBackColor = true;
			// 
			// chkBoxHigh
			// 
			this->chkBoxHigh->AutoSize = true;
			this->chkBoxHigh->Location = System::Drawing::Point(337, 347);
			this->chkBoxHigh->Name = L"chkBoxHigh";
			this->chkBoxHigh->Size = System::Drawing::Size(48, 17);
			this->chkBoxHigh->TabIndex = 8;
			this->chkBoxHigh->Text = L"High";
			this->chkBoxHigh->UseVisualStyleBackColor = true;
			// 
			// chkBoxLow
			// 
			this->chkBoxLow->AutoSize = true;
			this->chkBoxLow->Location = System::Drawing::Point(455, 347);
			this->chkBoxLow->Name = L"chkBoxLow";
			this->chkBoxLow->Size = System::Drawing::Size(46, 17);
			this->chkBoxLow->TabIndex = 9;
			this->chkBoxLow->Text = L"Low";
			this->chkBoxLow->UseVisualStyleBackColor = true;
			// 
			// chkBoxWAP
			// 
			this->chkBoxWAP->AutoSize = true;
			this->chkBoxWAP->Location = System::Drawing::Point(252, 387);
			this->chkBoxWAP->Name = L"chkBoxWAP";
			this->chkBoxWAP->Size = System::Drawing::Size(115, 17);
			this->chkBoxWAP->TabIndex = 10;
			this->chkBoxWAP->Text = L"Weighted Average";
			this->chkBoxWAP->UseVisualStyleBackColor = true;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Minion Pro", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(53, 286);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(178, 39);
			this->label6->TabIndex = 11;
			this->label6->Text = L"Chart Display";
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->ClientSize = System::Drawing::Size(1079, 503);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->chkBoxWAP);
			this->Controls->Add(this->chkBoxLow);
			this->Controls->Add(this->chkBoxHigh);
			this->Controls->Add(this->chkBoxClose);
			this->Controls->Add(this->chBoxOpen);
			this->Controls->Add(this->chtStocks);
			this->Controls->Add(this->axTws1);
			this->Controls->Add(this->lbData);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->tbDuration);
			this->Controls->Add(this->tbBars);
			this->Controls->Add(this->tbDate);
			this->Controls->Add(this->tbExchange);
			this->Controls->Add(this->tbSymbol);
			this->Controls->Add(this->btnRetrieve);
			this->Controls->Add(this->btnConnect);
			this->ForeColor = System::Drawing::SystemColors::ControlText;
			this->Name = L"Form1";
			this->Text = L"Form1";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->axTws1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->chtStocks))->EndInit();
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



private: System::Void btnRetrieve_Click(System::Object^  sender, System::EventArgs^  e) {

			  // Make a call to start the historical data retrieval. 
    // Reference fields on the form
    // First clear out the list box
    this->lbData->Items->Clear();
    // Create a new contract object
    TWSLib::IContract^ ContractInfo = axTws1->createContract();
    // Create an Empty TagValue List object. For API Version 9.71 and higher
    TWSLib::ITagValueList^ ChartOptions = axTws1->createTagValueList();

    // Now fill the ContractInfo object with the necessary information 
    // Contract identifier (set to 0 if unknown)
    ContractInfo->conId = 0;
    // Get the Stock symbol from the text box
    ContractInfo->symbol = this->tbSymbol->Text;  
    // Type of instrument: Stock=STK,Option=OPT,Future=FUT, etc.
    ContractInfo->secType = "STK";        
    // The destination of order or request. "SMART" =IB order router
    ContractInfo->exchange = this->tbExchange->Text;     
    // The primary exchange where the instrument trades. 
    // NYSE, NASDAQ, AMEX, BATS, ARCA, PHLX etc.
    ContractInfo->primaryExchange = "NASDAQ";
    // The currency of the exchange USD or GBP or CAD or EUR, etc.
    ContractInfo->currency = "USD";       
    // Call the reqHistoricalDataEx method with the parameters:
    // tickerId, Contract, endDateTime, durationStr, 
    // barSize, WhatToShow, formatDate
    this->axTws1->reqHistoricalDataEx(1, ContractInfo, 
                                 this->tbDate->Text, 
                                 this->tbDuration->Text,
                                 this->tbBars->Text, "TRADES", 1, 1,ChartOptions);
    // For API Version 9.71, add the TagValueList object named ChartOptions 
    // to the last parameter on the call to reqHistoricalDataEx







          } // end btnRetrieve_Click

private: System::Void axTws1_tickPrice(System::Object^  sender, AxTWSLib::_DTwsEvents_tickPriceEvent^  e) {













		 }
		 
		private: System::Void axTws1_historicalData(System::Object^  sender, 
                                   AxTWSLib::_DTwsEvents_historicalDataEvent^  e) {

   // Handle the incoming historical data records. 
   // Parameter e contains:
   //    e->date    Date (and time) of the historical data bar
   //    e->open    The opening price of the bar/interval
   //    e->high    The high price for the bar/interval
   //    e->low     The low price for the bar/interval
   //    e->close   The closing price of the bar/interval
   //    e->volume  The volume (number of shares/contract) for the bar/interval
   //    e->wAP     The average price during the bar/interval
   // Define an output string

									   if (chkBoxClose->Checked) if(e->close > 0.0 ) {
         chtStocks->Series["Closing Price"]->Points->AddXY(e->date, e->close);
    }

									   if (chkBoxHigh->Checked) if(e->high > 0.0 ) {
         chtStocks->Series["High Price"]->Points->AddXY(e->date, e->high);
    }
									   if (chkBoxWAP->Checked) if(e->wAP > 0.0 ) {
         chtStocks->Series["Weighted Average"]->Points->AddXY(e->date, e->wAP);
    }
									   if (chkBoxLow->Checked) if(e->low > 0.0 ) {
         chtStocks->Series["Low Price"]->Points->AddXY(e->date, e->low);
    }


   System::String^ strOutput;                    
   //  Concatenate all of the required fields into the OutputString
   strOutput = e->date + " " + e->open + " " + e->close + " " + e->volume;
                               
   //  Add the output string to the ListBox
   lbData->Items->Add(strOutput);


   // Write out the OutputString to the streamwriter
sw->Write(strOutput);
// Put a newline at the end of this record
sw->WriteLine();
// Flush the output buffer
sw->Flush();



 
 
				 
				(lbData->Items->Add(strOutput)); 
 } // end axTws1_historicalData
};
}

