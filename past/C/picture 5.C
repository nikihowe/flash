void picture 5()
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
   
   Double_t _fx26[1] = {
   222.1162};
   Double_t _fy26[1] = {
   3.904387};
   TGraph *graph = new TGraph(1,_fx26,_fy26);
   graph->SetName("");
   graph->SetTitle("Event number: 5");
   graph->SetFillColor(1);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(20);
   
   TH1F *Graph_Graph26 = new TH1F("Graph_Graph26","Event number: 5",100,0,1200);
   Graph_Graph26->SetMinimum(-120);
   Graph_Graph26->SetMaximum(120);
   Graph_Graph26->SetDirectory(0);
   Graph_Graph26->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph26->SetLineColor(ci);
   Graph_Graph26->GetXaxis()->SetTitle("z flash data");
   Graph_Graph26->GetXaxis()->SetLabelFont(42);
   Graph_Graph26->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph26->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph26->GetXaxis()->SetTitleFont(42);
   Graph_Graph26->GetYaxis()->SetTitle("y flash data");
   Graph_Graph26->GetYaxis()->SetLabelFont(42);
   Graph_Graph26->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph26->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph26->GetYaxis()->SetTitleFont(42);
   Graph_Graph26->GetZaxis()->SetLabelFont(42);
   Graph_Graph26->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph26->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph26->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph26);
   
   graph->Draw("ap");
   
   Double_t _fx27[1] = {
   222.1162};
   Double_t _fy27[1] = {
   3.904387};
   graph = new TGraph(1,_fx27,_fy27);
   graph->SetName("");
   graph->SetTitle("Event number: 5");
   graph->SetFillColor(1);

   ci = TColor::GetColor("#0000ff");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(20);
   
   TH1F *Graph_Graph_Graph2627 = new TH1F("Graph_Graph_Graph2627","Event number: 5",100,0,1200);
   Graph_Graph_Graph2627->SetMinimum(-120);
   Graph_Graph_Graph2627->SetMaximum(120);
   Graph_Graph_Graph2627->SetDirectory(0);
   Graph_Graph_Graph2627->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_Graph2627->SetLineColor(ci);
   Graph_Graph_Graph2627->GetXaxis()->SetTitle("z flash data");
   Graph_Graph_Graph2627->GetXaxis()->SetLabelFont(42);
   Graph_Graph_Graph2627->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_Graph2627->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_Graph2627->GetXaxis()->SetTitleFont(42);
   Graph_Graph_Graph2627->GetYaxis()->SetTitle("y flash data");
   Graph_Graph_Graph2627->GetYaxis()->SetLabelFont(42);
   Graph_Graph_Graph2627->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_Graph2627->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_Graph2627->GetYaxis()->SetTitleFont(42);
   Graph_Graph_Graph2627->GetZaxis()->SetLabelFont(42);
   Graph_Graph_Graph2627->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_Graph2627->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_Graph2627->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph_Graph2627);
   
   graph->Draw("p");
   
   Double_t _fx28[1] = {
   167.4894};
   Double_t _fy28[1] = {
   -34.98942};
   graph = new TGraph(1,_fx28,_fy28);
   graph->SetName("");
   graph->SetTitle("");
   graph->SetFillColor(1);

   ci = TColor::GetColor("#00ff00");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(20);
   
   TH1F *Graph_Graph28 = new TH1F("Graph_Graph28","",100,167.3894,168.5894);
   Graph_Graph28->SetMinimum(-120);
   Graph_Graph28->SetMaximum(120);
   Graph_Graph28->SetDirectory(0);
   Graph_Graph28->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph28->SetLineColor(ci);
   Graph_Graph28->GetXaxis()->SetRange(0,101);
   Graph_Graph28->GetXaxis()->SetLabelFont(42);
   Graph_Graph28->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph28->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph28->GetXaxis()->SetTitleFont(42);
   Graph_Graph28->GetYaxis()->SetLabelFont(42);
   Graph_Graph28->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph28->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph28->GetYaxis()->SetTitleFont(42);
   Graph_Graph28->GetZaxis()->SetLabelFont(42);
   Graph_Graph28->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph28->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph28->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph28);
   
   graph->Draw("p");
   
   Double_t _fx29[1] = {
   167.4894};
   Double_t _fy29[1] = {
   -34.98942};
   graph = new TGraph(1,_fx29,_fy29);
   graph->SetName("");
   graph->SetTitle("");
   graph->SetFillColor(1);

   ci = TColor::GetColor("#00ff00");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(20);
   
   TH1F *Graph_Graph_Graph2829 = new TH1F("Graph_Graph_Graph2829","",100,167.3894,168.5894);
   Graph_Graph_Graph2829->SetMinimum(-120);
   Graph_Graph_Graph2829->SetMaximum(120);
   Graph_Graph_Graph2829->SetDirectory(0);
   Graph_Graph_Graph2829->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_Graph2829->SetLineColor(ci);
   Graph_Graph_Graph2829->GetXaxis()->SetRange(0,101);
   Graph_Graph_Graph2829->GetXaxis()->SetLabelFont(42);
   Graph_Graph_Graph2829->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_Graph2829->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_Graph2829->GetXaxis()->SetTitleFont(42);
   Graph_Graph_Graph2829->GetYaxis()->SetLabelFont(42);
   Graph_Graph_Graph2829->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_Graph2829->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_Graph2829->GetYaxis()->SetTitleFont(42);
   Graph_Graph_Graph2829->GetZaxis()->SetLabelFont(42);
   Graph_Graph_Graph2829->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_Graph2829->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_Graph2829->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph_Graph2829);
   
   graph->Draw("p");
   
   Double_t _fx30[1] = {
   284.2693};
   Double_t _fy30[1] = {
   117.47};
   graph = new TGraph(1,_fx30,_fy30);
   graph->SetName("");
   graph->SetTitle("");
   graph->SetFillColor(1);

   ci = TColor::GetColor("#ff0000");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(20);
   
   TH1F *Graph_Graph30 = new TH1F("Graph_Graph30","",100,284.1693,285.3693);
   Graph_Graph30->SetMinimum(-120);
   Graph_Graph30->SetMaximum(120);
   Graph_Graph30->SetDirectory(0);
   Graph_Graph30->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph30->SetLineColor(ci);
   Graph_Graph30->GetXaxis()->SetLabelFont(42);
   Graph_Graph30->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph30->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph30->GetXaxis()->SetTitleFont(42);
   Graph_Graph30->GetYaxis()->SetLabelFont(42);
   Graph_Graph30->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph30->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph30->GetYaxis()->SetTitleFont(42);
   Graph_Graph30->GetZaxis()->SetLabelFont(42);
   Graph_Graph30->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph30->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph30->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph30);
   
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
