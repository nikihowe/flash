void picture 7()
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
   
   Double_t _fx36[1] = {
   272.2725};
   Double_t _fy36[1] = {
   -15.28058};
   TGraph *graph = new TGraph(1,_fx36,_fy36);
   graph->SetName("");
   graph->SetTitle("Event number: 7");
   graph->SetFillColor(1);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(20);
   
   TH1F *Graph_Graph36 = new TH1F("Graph_Graph36","Event number: 7",100,0,1200);
   Graph_Graph36->SetMinimum(-120);
   Graph_Graph36->SetMaximum(120);
   Graph_Graph36->SetDirectory(0);
   Graph_Graph36->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph36->SetLineColor(ci);
   Graph_Graph36->GetXaxis()->SetTitle("z flash data");
   Graph_Graph36->GetXaxis()->SetLabelFont(42);
   Graph_Graph36->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph36->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph36->GetXaxis()->SetTitleFont(42);
   Graph_Graph36->GetYaxis()->SetTitle("y flash data");
   Graph_Graph36->GetYaxis()->SetLabelFont(42);
   Graph_Graph36->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph36->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph36->GetYaxis()->SetTitleFont(42);
   Graph_Graph36->GetZaxis()->SetLabelFont(42);
   Graph_Graph36->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph36->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph36->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph36);
   
   graph->Draw("ap");
   
   Double_t _fx37[1] = {
   272.2725};
   Double_t _fy37[1] = {
   -15.28058};
   graph = new TGraph(1,_fx37,_fy37);
   graph->SetName("");
   graph->SetTitle("Event number: 7");
   graph->SetFillColor(1);

   ci = TColor::GetColor("#0000ff");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(20);
   
   TH1F *Graph_Graph_Graph3637 = new TH1F("Graph_Graph_Graph3637","Event number: 7",100,0,1200);
   Graph_Graph_Graph3637->SetMinimum(-120);
   Graph_Graph_Graph3637->SetMaximum(120);
   Graph_Graph_Graph3637->SetDirectory(0);
   Graph_Graph_Graph3637->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_Graph3637->SetLineColor(ci);
   Graph_Graph_Graph3637->GetXaxis()->SetTitle("z flash data");
   Graph_Graph_Graph3637->GetXaxis()->SetLabelFont(42);
   Graph_Graph_Graph3637->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_Graph3637->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_Graph3637->GetXaxis()->SetTitleFont(42);
   Graph_Graph_Graph3637->GetYaxis()->SetTitle("y flash data");
   Graph_Graph_Graph3637->GetYaxis()->SetLabelFont(42);
   Graph_Graph_Graph3637->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_Graph3637->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_Graph3637->GetYaxis()->SetTitleFont(42);
   Graph_Graph_Graph3637->GetZaxis()->SetLabelFont(42);
   Graph_Graph_Graph3637->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_Graph3637->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_Graph3637->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph_Graph3637);
   
   graph->Draw("p");
   
   Double_t _fx38[1] = {
   203.6197};
   Double_t _fy38[1] = {
   -111.5895};
   graph = new TGraph(1,_fx38,_fy38);
   graph->SetName("");
   graph->SetTitle("");
   graph->SetFillColor(1);

   ci = TColor::GetColor("#00ff00");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(20);
   
   TH1F *Graph_Graph38 = new TH1F("Graph_Graph38","",100,203.5197,204.7197);
   Graph_Graph38->SetMinimum(-120);
   Graph_Graph38->SetMaximum(120);
   Graph_Graph38->SetDirectory(0);
   Graph_Graph38->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph38->SetLineColor(ci);
   Graph_Graph38->GetXaxis()->SetRange(0,101);
   Graph_Graph38->GetXaxis()->SetLabelFont(42);
   Graph_Graph38->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph38->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph38->GetXaxis()->SetTitleFont(42);
   Graph_Graph38->GetYaxis()->SetLabelFont(42);
   Graph_Graph38->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph38->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph38->GetYaxis()->SetTitleFont(42);
   Graph_Graph38->GetZaxis()->SetLabelFont(42);
   Graph_Graph38->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph38->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph38->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph38);
   
   graph->Draw("p");
   
   Double_t _fx39[1] = {
   203.6197};
   Double_t _fy39[1] = {
   -111.5895};
   graph = new TGraph(1,_fx39,_fy39);
   graph->SetName("");
   graph->SetTitle("");
   graph->SetFillColor(1);

   ci = TColor::GetColor("#00ff00");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(20);
   
   TH1F *Graph_Graph_Graph3839 = new TH1F("Graph_Graph_Graph3839","",100,203.5197,204.7197);
   Graph_Graph_Graph3839->SetMinimum(-120);
   Graph_Graph_Graph3839->SetMaximum(120);
   Graph_Graph_Graph3839->SetDirectory(0);
   Graph_Graph_Graph3839->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_Graph3839->SetLineColor(ci);
   Graph_Graph_Graph3839->GetXaxis()->SetRange(0,101);
   Graph_Graph_Graph3839->GetXaxis()->SetLabelFont(42);
   Graph_Graph_Graph3839->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_Graph3839->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_Graph3839->GetXaxis()->SetTitleFont(42);
   Graph_Graph_Graph3839->GetYaxis()->SetLabelFont(42);
   Graph_Graph_Graph3839->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_Graph3839->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_Graph3839->GetYaxis()->SetTitleFont(42);
   Graph_Graph_Graph3839->GetZaxis()->SetLabelFont(42);
   Graph_Graph_Graph3839->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_Graph3839->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_Graph3839->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph_Graph3839);
   
   graph->Draw("p");
   
   Double_t _fx40[1] = {
   309.9524};
   Double_t _fy40[1] = {
   -116.3448};
   graph = new TGraph(1,_fx40,_fy40);
   graph->SetName("");
   graph->SetTitle("");
   graph->SetFillColor(1);

   ci = TColor::GetColor("#ff0000");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(20);
   
   TH1F *Graph_Graph40 = new TH1F("Graph_Graph40","",100,309.8524,311.0524);
   Graph_Graph40->SetMinimum(-120);
   Graph_Graph40->SetMaximum(120);
   Graph_Graph40->SetDirectory(0);
   Graph_Graph40->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph40->SetLineColor(ci);
   Graph_Graph40->GetXaxis()->SetLabelFont(42);
   Graph_Graph40->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph40->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph40->GetXaxis()->SetTitleFont(42);
   Graph_Graph40->GetYaxis()->SetLabelFont(42);
   Graph_Graph40->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph40->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph40->GetYaxis()->SetTitleFont(42);
   Graph_Graph40->GetZaxis()->SetLabelFont(42);
   Graph_Graph40->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph40->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph40->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph40);
   
   graph->Draw("p");
   
   TPaveText *pt = new TPaveText(0.3328094,0.94,0.6671906,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *AText = pt->AddText("Event number: 7");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
