void event_picture_3()
{
//=========Macro generated from canvas: c/
//=========  (Wed Jul 15 10:03:06 2015) by ROOT version6.04/00
   TCanvas *c = new TCanvas("c", "",0,45,600,500);
   c->SetHighLightColor(2);
   c->Range(-132.6361,-150,1193.725,150);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx10[41] = {
   811.17,
   771.2757,
   581.1,
   621.4643,
   499.5352,
   483.2853,
   287.795,
   795.2754,
   749.2926,
   383.4492,
   146.3171,
   173.7435,
   130.511,
   485.9226,
   608.8505,
   517.1849,
   515.8895,
   373.8385,
   599.9383,
   502.3261,
   210.3973,
   328.2791,
   468.4815,
   177.6671,
   191.8449,
   972.2421,
   437.0295,
   288.4977,
   405.0671,
   83.77664,
   443.878,
   539.1125,
   719.2997,
   538.8777,
   480.9691,
   807.2235,
   544.756,
   454.4115,
   293.9905,
   740.4384,
   411.5082};
   Double_t Graph0_fy10[41] = {
   -0.293,
   31.06944,
   28.61535,
   -56.37183,
   -30.23378,
   29.42654,
   -5.073154,
   14.07046,
   42.72218,
   30.11485,
   1.236199,
   -0.303,
   -36.86681,
   28.99684,
   1.326654,
   -22.71259,
   55.23565,
   -0.706,
   -29.25108,
   -31.99812,
   0.1302549,
   -3.3988,
   28.20931,
   -11.12363,
   -43.04853,
   -41.74924,
   -28.5145,
   -31.08677,
   5.090106,
   -40.41614,
   4.306261,
   -42.62,
   1.912865,
   0.63916,
   28.01974,
   55.81058,
   0.000691358,
   27.5742,
   -0.537,
   14.40041,
   -2.72675};
   TGraph *graph = new TGraph(41,Graph0_fx10,Graph0_fy10);
   graph->SetName("Graph0");
   graph->SetTitle("Event number: 3");
   graph->SetFillColor(1);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(20);
   
   TH1F *Graph_Graph10 = new TH1F("Graph_Graph10","Event number: 3",100,0,1061.089);
   Graph_Graph10->SetMinimum(-120);
   Graph_Graph10->SetMaximum(120);
   Graph_Graph10->SetDirectory(0);
   Graph_Graph10->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph10->SetLineColor(ci);
   Graph_Graph10->GetXaxis()->SetTitle("z flash data");
   Graph_Graph10->GetXaxis()->SetLabelFont(42);
   Graph_Graph10->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph10->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph10->GetXaxis()->SetTitleFont(42);
   Graph_Graph10->GetYaxis()->SetTitle("y flash data");
   Graph_Graph10->GetYaxis()->SetLabelFont(42);
   Graph_Graph10->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph10->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph10->GetYaxis()->SetTitleFont(42);
   Graph_Graph10->GetZaxis()->SetLabelFont(42);
   Graph_Graph10->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph10->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph10->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph10);
   
   graph->Draw("ap");
   
   Double_t Graph1_fx11[1] = {
   172.5915};
   Double_t Graph1_fy11[1] = {
   -38.32926};
   graph = new TGraph(1,Graph1_fx11,Graph1_fy11);
   graph->SetName("Graph1");
   graph->SetTitle("Graph");
   graph->SetFillColor(1);

   ci = TColor::GetColor("#00ff00");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(20);
   
   TH1F *Graph_Graph11 = new TH1F("Graph_Graph11","Graph",100,172.4915,173.6915);
   Graph_Graph11->SetMinimum(-120);
   Graph_Graph11->SetMaximum(120);
   Graph_Graph11->SetDirectory(0);
   Graph_Graph11->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph11->SetLineColor(ci);
   Graph_Graph11->GetXaxis()->SetLabelFont(42);
   Graph_Graph11->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph11->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph11->GetXaxis()->SetTitleFont(42);
   Graph_Graph11->GetYaxis()->SetLabelFont(42);
   Graph_Graph11->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph11->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph11->GetYaxis()->SetTitleFont(42);
   Graph_Graph11->GetZaxis()->SetLabelFont(42);
   Graph_Graph11->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph11->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph11->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph11);
   
   graph->Draw("p");
   
   Double_t Graph2_fx12[1] = {
   2.256222};
   Double_t Graph2_fy12[1] = {
   116.7235};
   graph = new TGraph(1,Graph2_fx12,Graph2_fy12);
   graph->SetName("Graph2");
   graph->SetTitle("Graph");
   graph->SetFillColor(1);

   ci = TColor::GetColor("#ff0000");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(20);
   
   TH1F *Graph_Graph12 = new TH1F("Graph_Graph12","Graph",100,2.156222,3.356222);
   Graph_Graph12->SetMinimum(-120);
   Graph_Graph12->SetMaximum(120);
   Graph_Graph12->SetDirectory(0);
   Graph_Graph12->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph12->SetLineColor(ci);
   Graph_Graph12->GetXaxis()->SetLabelFont(42);
   Graph_Graph12->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph12->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph12->GetXaxis()->SetTitleFont(42);
   Graph_Graph12->GetYaxis()->SetLabelFont(42);
   Graph_Graph12->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph12->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph12->GetYaxis()->SetTitleFont(42);
   Graph_Graph12->GetZaxis()->SetLabelFont(42);
   Graph_Graph12->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph12->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph12->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph12);
   
   graph->Draw("p");
   
   TPaveText *pt = new TPaveText(0.3328094,0.94,0.6671906,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *AText = pt->AddText("Event number: 3");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
