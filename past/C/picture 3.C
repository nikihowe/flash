void picture 3()
{
//=========Macro generated from canvas: c/
//=========  (Wed Jul 15 10:06:45 2015) by ROOT version6.04/00
   TCanvas *c = new TCanvas("c", "",0,45,600,500);
   c->SetHighLightColor(2);
   c->Range(-150,-150,1350,150);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t _fx16[2] = {
   146.3171,
   173.7435};
   Double_t _fy16[2] = {
   1.236199,
   -0.303};
   TGraph *graph = new TGraph(2,_fx16,_fy16);
   graph->SetName("");
   graph->SetTitle("Event number: 3");
   graph->SetFillColor(1);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(20);
   
   TH1F *Graph_Graph16 = new TH1F("Graph_Graph16","Event number: 3",100,0,1200);
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
   
   Double_t _fx17[2] = {
   146.3171,
   173.7435};
   Double_t _fy17[2] = {
   1.236199,
   -0.303};
   graph = new TGraph(2,_fx17,_fy17);
   graph->SetName("");
   graph->SetTitle("Event number: 3");
   graph->SetFillColor(1);

   ci = TColor::GetColor("#0000ff");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(20);
   
   TH1F *Graph_Graph_Graph1617 = new TH1F("Graph_Graph_Graph1617","Event number: 3",100,0,1200);
   Graph_Graph_Graph1617->SetMinimum(-120);
   Graph_Graph_Graph1617->SetMaximum(120);
   Graph_Graph_Graph1617->SetDirectory(0);
   Graph_Graph_Graph1617->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_Graph1617->SetLineColor(ci);
   Graph_Graph_Graph1617->GetXaxis()->SetTitle("z flash data");
   Graph_Graph_Graph1617->GetXaxis()->SetLabelFont(42);
   Graph_Graph_Graph1617->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_Graph1617->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_Graph1617->GetXaxis()->SetTitleFont(42);
   Graph_Graph_Graph1617->GetYaxis()->SetTitle("y flash data");
   Graph_Graph_Graph1617->GetYaxis()->SetLabelFont(42);
   Graph_Graph_Graph1617->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_Graph1617->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_Graph1617->GetYaxis()->SetTitleFont(42);
   Graph_Graph_Graph1617->GetZaxis()->SetLabelFont(42);
   Graph_Graph_Graph1617->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_Graph1617->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_Graph1617->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph_Graph1617);
   
   graph->Draw("p");
   
   Double_t _fx18[1] = {
   172.5915};
   Double_t _fy18[1] = {
   -38.32926};
   graph = new TGraph(1,_fx18,_fy18);
   graph->SetName("");
   graph->SetTitle("");
   graph->SetFillColor(1);

   ci = TColor::GetColor("#00ff00");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(20);
   
   TH1F *Graph_Graph18 = new TH1F("Graph_Graph18","",100,172.4915,173.6915);
   Graph_Graph18->SetMinimum(-120);
   Graph_Graph18->SetMaximum(120);
   Graph_Graph18->SetDirectory(0);
   Graph_Graph18->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph18->SetLineColor(ci);
   Graph_Graph18->GetXaxis()->SetRange(0,101);
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
   
   Double_t _fx19[1] = {
   172.5915};
   Double_t _fy19[1] = {
   -38.32926};
   graph = new TGraph(1,_fx19,_fy19);
   graph->SetName("");
   graph->SetTitle("");
   graph->SetFillColor(1);

   ci = TColor::GetColor("#00ff00");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(20);
   
   TH1F *Graph_Graph_Graph1819 = new TH1F("Graph_Graph_Graph1819","",100,172.4915,173.6915);
   Graph_Graph_Graph1819->SetMinimum(-120);
   Graph_Graph_Graph1819->SetMaximum(120);
   Graph_Graph_Graph1819->SetDirectory(0);
   Graph_Graph_Graph1819->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_Graph1819->SetLineColor(ci);
   Graph_Graph_Graph1819->GetXaxis()->SetRange(0,101);
   Graph_Graph_Graph1819->GetXaxis()->SetLabelFont(42);
   Graph_Graph_Graph1819->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_Graph1819->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_Graph1819->GetXaxis()->SetTitleFont(42);
   Graph_Graph_Graph1819->GetYaxis()->SetLabelFont(42);
   Graph_Graph_Graph1819->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_Graph1819->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_Graph1819->GetYaxis()->SetTitleFont(42);
   Graph_Graph_Graph1819->GetZaxis()->SetLabelFont(42);
   Graph_Graph_Graph1819->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_Graph1819->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_Graph1819->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph_Graph1819);
   
   graph->Draw("p");
   
   Double_t _fx20[1] = {
   2.256222};
   Double_t _fy20[1] = {
   116.7235};
   graph = new TGraph(1,_fx20,_fy20);
   graph->SetName("");
   graph->SetTitle("");
   graph->SetFillColor(1);

   ci = TColor::GetColor("#ff0000");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(20);
   
   TH1F *Graph_Graph20 = new TH1F("Graph_Graph20","",100,2.156222,3.356222);
   Graph_Graph20->SetMinimum(-120);
   Graph_Graph20->SetMaximum(120);
   Graph_Graph20->SetDirectory(0);
   Graph_Graph20->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph20->SetLineColor(ci);
   Graph_Graph20->GetXaxis()->SetLabelFont(42);
   Graph_Graph20->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph20->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph20->GetXaxis()->SetTitleFont(42);
   Graph_Graph20->GetYaxis()->SetLabelFont(42);
   Graph_Graph20->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph20->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph20->GetYaxis()->SetTitleFont(42);
   Graph_Graph20->GetZaxis()->SetLabelFont(42);
   Graph_Graph20->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph20->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph20->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph20);
   
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
