void event_picture_8()
{
//=========Macro generated from canvas: c/
//=========  (Wed Jul 15 10:03:13 2015) by ROOT version6.04/00
   TCanvas *c = new TCanvas("c", "",0,45,600,500);
   c->SetHighLightColor(2);
   c->Range(-108.8037,-150,1196.817,150);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx25[40] = {
   270.3503,
   523.9931,
   740.4828,
   607.774,
   200.2448,
   368.6792,
   577.1234,
   711.2745,
   751.9055,
   405.8392,
   475.6671,
   638.6036,
   194.7511,
   483.0036,
   916.5236,
   979.2134,
   796.7844,
   951.8615,
   359.0855,
   108.7997,
   438.5607,
   844.8197,
   428.1673,
   874.035,
   521.0628,
   638.844,
   953.3535,
   664.2035,
   500.2205,
   871.2277,
   559.355,
   540.935,
   265.6719,
   443.3288,
   205.0473,
   403.1295,
   523.0152,
   309.7393,
   350.5852,
   307.9265};
   Double_t Graph0_fy25[40] = {
   -42.1412,
   -56.27271,
   -42.74555,
   -1.418294,
   -6.212275,
   -29.13316,
   26.3726,
   -56.408,
   -56.284,
   30.21794,
   -56.471,
   3.921074,
   -43.34604,
   -2.64524,
   -22.87701,
   -36.69813,
   55.80943,
   55.313,
   -29.99665,
   -56.40108,
   -56.59779,
   42.26736,
   2.505706,
   27.4055,
   -43.1798,
   41.1265,
   10.7836,
   -0.051,
   -56.323,
   -8.144064,
   13.312,
   28.78433,
   -29.57152,
   -17.05809,
   1.559,
   -3.371396,
   -7.519783,
   23.06117,
   -30.64717,
   -0.7675};
   TGraph *graph = new TGraph(40,Graph0_fx25,Graph0_fy25);
   graph->SetName("Graph0");
   graph->SetTitle("Event number: 8");
   graph->SetFillColor(1);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(20);
   
   TH1F *Graph_Graph25 = new TH1F("Graph_Graph25","Event number: 8",100,21.75832,1066.255);
   Graph_Graph25->SetMinimum(-120);
   Graph_Graph25->SetMaximum(120);
   Graph_Graph25->SetDirectory(0);
   Graph_Graph25->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph25->SetLineColor(ci);
   Graph_Graph25->GetXaxis()->SetTitle("z flash data");
   Graph_Graph25->GetXaxis()->SetLabelFont(42);
   Graph_Graph25->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph25->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph25->GetXaxis()->SetTitleFont(42);
   Graph_Graph25->GetYaxis()->SetTitle("y flash data");
   Graph_Graph25->GetYaxis()->SetLabelFont(42);
   Graph_Graph25->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph25->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph25->GetYaxis()->SetTitleFont(42);
   Graph_Graph25->GetZaxis()->SetLabelFont(42);
   Graph_Graph25->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph25->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph25->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph25);
   
   graph->Draw("ap");
   
   Double_t Graph1_fx26[1] = {
   964.4661};
   Double_t Graph1_fy26[1] = {
   -62.83803};
   graph = new TGraph(1,Graph1_fx26,Graph1_fy26);
   graph->SetName("Graph1");
   graph->SetTitle("Graph");
   graph->SetFillColor(1);

   ci = TColor::GetColor("#00ff00");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(20);
   
   TH1F *Graph_Graph26 = new TH1F("Graph_Graph26","Graph",100,964.3661,965.5661);
   Graph_Graph26->SetMinimum(-120);
   Graph_Graph26->SetMaximum(120);
   Graph_Graph26->SetDirectory(0);
   Graph_Graph26->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph26->SetLineColor(ci);
   Graph_Graph26->GetXaxis()->SetLabelFont(42);
   Graph_Graph26->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph26->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph26->GetXaxis()->SetTitleFont(42);
   Graph_Graph26->GetYaxis()->SetLabelFont(42);
   Graph_Graph26->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph26->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph26->GetYaxis()->SetTitleFont(42);
   Graph_Graph26->GetZaxis()->SetLabelFont(42);
   Graph_Graph26->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph26->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph26->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph26);
   
   graph->Draw("p");
   
   Double_t Graph2_fx27[1] = {
   1000.714};
   Double_t Graph2_fy27[1] = {
   -117.158};
   graph = new TGraph(1,Graph2_fx27,Graph2_fy27);
   graph->SetName("Graph2");
   graph->SetTitle("Graph");
   graph->SetFillColor(1);

   ci = TColor::GetColor("#ff0000");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(20);
   
   TH1F *Graph_Graph27 = new TH1F("Graph_Graph27","Graph",100,1000.614,1001.814);
   Graph_Graph27->SetMinimum(-120);
   Graph_Graph27->SetMaximum(120);
   Graph_Graph27->SetDirectory(0);
   Graph_Graph27->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph27->SetLineColor(ci);
   Graph_Graph27->GetXaxis()->SetLabelFont(42);
   Graph_Graph27->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph27->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph27->GetXaxis()->SetTitleFont(42);
   Graph_Graph27->GetYaxis()->SetLabelFont(42);
   Graph_Graph27->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph27->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph27->GetYaxis()->SetTitleFont(42);
   Graph_Graph27->GetZaxis()->SetLabelFont(42);
   Graph_Graph27->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph27->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph27->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph27);
   
   graph->Draw("p");
   
   TPaveText *pt = new TPaveText(0.3328094,0.94,0.6671906,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *AText = pt->AddText("Event number: 8");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
