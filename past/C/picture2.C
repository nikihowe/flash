void picture2()
{
//=========Macro generated from canvas: c/
//=========  (Wed Jul 15 12:53:51 2015) by ROOT version6.04/00
   TCanvas *c = new TCanvas("c", "",0,45,600,500);
   c->SetHighLightColor(2);
   c->Range(-150,-150,1350,150);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t _fx11[1] = {
   792.688};
   Double_t _fy11[1] = {
   20.02759};
   TGraph *graph = new TGraph(1,_fx11,_fy11);
   graph->SetName("");
   graph->SetTitle("Event 2");
   graph->SetFillColor(1);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(20);
   
   TH1F *Graph_Graph11 = new TH1F("Graph_Graph11","Event 2",100,0,1200);
   Graph_Graph11->SetMinimum(-120);
   Graph_Graph11->SetMaximum(120);
   Graph_Graph11->SetDirectory(0);
   Graph_Graph11->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph11->SetLineColor(ci);
   Graph_Graph11->GetXaxis()->SetTitle("Z [cm]");
   Graph_Graph11->GetXaxis()->SetLabelFont(42);
   Graph_Graph11->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph11->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph11->GetXaxis()->SetTitleFont(42);
   Graph_Graph11->GetYaxis()->SetTitle("Y [cm]");
   Graph_Graph11->GetYaxis()->SetLabelFont(42);
   Graph_Graph11->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph11->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph11->GetYaxis()->SetTitleFont(42);
   Graph_Graph11->GetZaxis()->SetLabelFont(42);
   Graph_Graph11->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph11->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph11->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph11);
   
   graph->Draw("ap");
   
   Double_t _fx12[1] = {
   792.688};
   Double_t _fy12[1] = {
   20.02759};
   graph = new TGraph(1,_fx12,_fy12);
   graph->SetName("");
   graph->SetTitle("Event 2");
   graph->SetFillColor(1);

   ci = TColor::GetColor("#0000ff");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(20);
   
   TH1F *Graph_Graph_Graph1112 = new TH1F("Graph_Graph_Graph1112","Event 2",100,0,1200);
   Graph_Graph_Graph1112->SetMinimum(-120);
   Graph_Graph_Graph1112->SetMaximum(120);
   Graph_Graph_Graph1112->SetDirectory(0);
   Graph_Graph_Graph1112->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_Graph1112->SetLineColor(ci);
   Graph_Graph_Graph1112->GetXaxis()->SetTitle("Z [cm]");
   Graph_Graph_Graph1112->GetXaxis()->SetLabelFont(42);
   Graph_Graph_Graph1112->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_Graph1112->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_Graph1112->GetXaxis()->SetTitleFont(42);
   Graph_Graph_Graph1112->GetYaxis()->SetTitle("Y [cm]");
   Graph_Graph_Graph1112->GetYaxis()->SetLabelFont(42);
   Graph_Graph_Graph1112->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_Graph1112->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_Graph1112->GetYaxis()->SetTitleFont(42);
   Graph_Graph_Graph1112->GetZaxis()->SetLabelFont(42);
   Graph_Graph_Graph1112->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_Graph1112->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_Graph1112->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph_Graph1112);
   
   graph->Draw("p");
   
   Double_t _fx13[1] = {
   801.6865};
   Double_t _fy13[1] = {
   111.6076};
   graph = new TGraph(1,_fx13,_fy13);
   graph->SetName("");
   graph->SetTitle("");
   graph->SetFillColor(1);

   ci = TColor::GetColor("#00ff00");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(20);
   
   TH1F *Graph_Graph13 = new TH1F("Graph_Graph13","",100,801.5865,802.7865);
   Graph_Graph13->SetMinimum(-120);
   Graph_Graph13->SetMaximum(120);
   Graph_Graph13->SetDirectory(0);
   Graph_Graph13->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph13->SetLineColor(ci);
   Graph_Graph13->GetXaxis()->SetRange(0,101);
   Graph_Graph13->GetXaxis()->SetLabelFont(42);
   Graph_Graph13->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph13->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph13->GetXaxis()->SetTitleFont(42);
   Graph_Graph13->GetYaxis()->SetLabelFont(42);
   Graph_Graph13->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph13->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph13->GetYaxis()->SetTitleFont(42);
   Graph_Graph13->GetZaxis()->SetLabelFont(42);
   Graph_Graph13->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph13->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph13->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph13);
   
   graph->Draw("p");
   
   Double_t _fx14[1] = {
   801.6865};
   Double_t _fy14[1] = {
   111.6076};
   graph = new TGraph(1,_fx14,_fy14);
   graph->SetName("");
   graph->SetTitle("");
   graph->SetFillColor(1);

   ci = TColor::GetColor("#00ff00");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(20);
   
   TH1F *Graph_Graph_Graph1314 = new TH1F("Graph_Graph_Graph1314","",100,801.5865,802.7865);
   Graph_Graph_Graph1314->SetMinimum(-120);
   Graph_Graph_Graph1314->SetMaximum(120);
   Graph_Graph_Graph1314->SetDirectory(0);
   Graph_Graph_Graph1314->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_Graph1314->SetLineColor(ci);
   Graph_Graph_Graph1314->GetXaxis()->SetRange(0,101);
   Graph_Graph_Graph1314->GetXaxis()->SetLabelFont(42);
   Graph_Graph_Graph1314->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_Graph1314->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_Graph1314->GetXaxis()->SetTitleFont(42);
   Graph_Graph_Graph1314->GetYaxis()->SetLabelFont(42);
   Graph_Graph_Graph1314->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_Graph1314->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_Graph1314->GetYaxis()->SetTitleFont(42);
   Graph_Graph_Graph1314->GetZaxis()->SetLabelFont(42);
   Graph_Graph_Graph1314->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_Graph1314->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_Graph1314->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph_Graph1314);
   
   graph->Draw("p");
   
   Double_t _fx15[1] = {
   823.7501};
   Double_t _fy15[1] = {
   86.87169};
   graph = new TGraph(1,_fx15,_fy15);
   graph->SetName("");
   graph->SetTitle("");
   graph->SetFillColor(1);

   ci = TColor::GetColor("#ff0000");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(20);
   
   TH1F *Graph_Graph15 = new TH1F("Graph_Graph15","",100,823.6501,824.8501);
   Graph_Graph15->SetMinimum(-120);
   Graph_Graph15->SetMaximum(120);
   Graph_Graph15->SetDirectory(0);
   Graph_Graph15->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph15->SetLineColor(ci);
   Graph_Graph15->GetXaxis()->SetLabelFont(42);
   Graph_Graph15->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph15->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph15->GetXaxis()->SetTitleFont(42);
   Graph_Graph15->GetYaxis()->SetLabelFont(42);
   Graph_Graph15->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph15->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph15->GetYaxis()->SetTitleFont(42);
   Graph_Graph15->GetZaxis()->SetLabelFont(42);
   Graph_Graph15->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph15->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph15->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph15);
   
   graph->Draw("p");
   
   TPaveText *pt = new TPaveText(0.4189298,0.94,0.5810702,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *AText = pt->AddText("Event 2");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
