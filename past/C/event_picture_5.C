void event_picture_5()
{
//=========Macro generated from canvas: c/
//=========  (Wed Jul 15 10:03:08 2015) by ROOT version6.04/00
   TCanvas *c = new TCanvas("c", "",0,45,600,500);
   c->SetHighLightColor(2);
   c->Range(-76.10438,-150,1154.716,150);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx16[39] = {
   637.6135,
   547.7926,
   627.5161,
   749.5874,
   411.2155,
   129.0323,
   851.874,
   434.635,
   868.3819,
   287.6395,
   222.1162,
   308.5087,
   249.5263,
   469.9341,
   542.2029,
   841.1006,
   949.5792,
   208.0505,
   751.8835,
   563.5789,
   928.9215,
   266.7097,
   731.9006,
   470.9899,
   453.109,
   712.0702,
   828.7218,
   527.0673,
   833.9267,
   729.897,
   536.0673,
   845.1384,
   729.781,
   630.4952,
   210.3665,
   571.3648,
   521.2184,
   318.3202,
   790.0552};
   Double_t Graph0_fy16[39] = {
   -27.96237,
   -56.36143,
   0.8955882,
   -42.23104,
   0.5723415,
   28.58404,
   -0.4445,
   -0.6,
   -15.19453,
   -56.261,
   3.904387,
   41.40965,
   -28.10643,
   -31.218,
   -0.651875,
   -4.84956,
   -43.02068,
   -0.8865,
   55.625,
   27.03681,
   13.73157,
   -10.38651,
   43.81562,
   30.7327,
   -0.44,
   28.29954,
   -56.296,
   1.558654,
   0.5478039,
   -56.35117,
   -27.48581,
   -16.01617,
   -56.25798,
   16.65652,
   -21.08455,
   -28.9964,
   -2.549833,
   55.54053,
   -24.75356};
   TGraph *graph = new TGraph(39,Graph0_fx16,Graph0_fy16);
   graph->SetName("Graph0");
   graph->SetTitle("Event number: 5");
   graph->SetFillColor(1);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(20);
   
   TH1F *Graph_Graph16 = new TH1F("Graph_Graph16","Event number: 5",100,46.97766,1031.634);
   Graph_Graph16->SetMinimum(-120);
   Graph_Graph16->SetMaximum(120);
   Graph_Graph16->SetDirectory(0);
   Graph_Graph16->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph16->SetLineColor(ci);
   Graph_Graph16->GetXaxis()->SetTitle("z flash data");
   Graph_Graph16->GetXaxis()->SetLabelFont(42);
   Graph_Graph16->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph16->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph16->GetXaxis()->SetTitleFont(42);
   Graph_Graph16->GetYaxis()->SetTitle("y flash data");
   Graph_Graph16->GetYaxis()->SetLabelFont(42);
   Graph_Graph16->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph16->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph16->GetYaxis()->SetTitleFont(42);
   Graph_Graph16->GetZaxis()->SetLabelFont(42);
   Graph_Graph16->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph16->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph16->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph16);
   
   graph->Draw("ap");
   
   Double_t Graph1_fx17[1] = {
   167.4894};
   Double_t Graph1_fy17[1] = {
   -34.98942};
   graph = new TGraph(1,Graph1_fx17,Graph1_fy17);
   graph->SetName("Graph1");
   graph->SetTitle("Graph");
   graph->SetFillColor(1);

   ci = TColor::GetColor("#00ff00");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(20);
   
   TH1F *Graph_Graph17 = new TH1F("Graph_Graph17","Graph",100,167.3894,168.5894);
   Graph_Graph17->SetMinimum(-120);
   Graph_Graph17->SetMaximum(120);
   Graph_Graph17->SetDirectory(0);
   Graph_Graph17->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph17->SetLineColor(ci);
   Graph_Graph17->GetXaxis()->SetLabelFont(42);
   Graph_Graph17->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph17->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph17->GetXaxis()->SetTitleFont(42);
   Graph_Graph17->GetYaxis()->SetLabelFont(42);
   Graph_Graph17->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph17->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph17->GetYaxis()->SetTitleFont(42);
   Graph_Graph17->GetZaxis()->SetLabelFont(42);
   Graph_Graph17->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph17->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph17->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph17);
   
   graph->Draw("p");
   
   Double_t Graph2_fx18[1] = {
   284.2693};
   Double_t Graph2_fy18[1] = {
   117.47};
   graph = new TGraph(1,Graph2_fx18,Graph2_fy18);
   graph->SetName("Graph2");
   graph->SetTitle("Graph");
   graph->SetFillColor(1);

   ci = TColor::GetColor("#ff0000");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(20);
   
   TH1F *Graph_Graph18 = new TH1F("Graph_Graph18","Graph",100,284.1693,285.3693);
   Graph_Graph18->SetMinimum(-120);
   Graph_Graph18->SetMaximum(120);
   Graph_Graph18->SetDirectory(0);
   Graph_Graph18->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph18->SetLineColor(ci);
   Graph_Graph18->GetXaxis()->SetLabelFont(42);
   Graph_Graph18->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph18->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph18->GetXaxis()->SetTitleFont(42);
   Graph_Graph18->GetYaxis()->SetLabelFont(42);
   Graph_Graph18->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph18->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph18->GetYaxis()->SetTitleFont(42);
   Graph_Graph18->GetZaxis()->SetLabelFont(42);
   Graph_Graph18->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph18->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph18->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph18);
   
   graph->Draw("p");
   
   TPaveText *pt = new TPaveText(0.3328094,0.94,0.6671906,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *AText = pt->AddText("Event number: 5");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
