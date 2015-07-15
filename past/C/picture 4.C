void picture 4()
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
   
   Double_t _fx21[1] = {
   592.4704};
   Double_t _fy21[1] = {
   0.07680316};
   TGraph *graph = new TGraph(1,_fx21,_fy21);
   graph->SetName("");
   graph->SetTitle("Event number: 4");
   graph->SetFillColor(1);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(20);
   
   TH1F *Graph_Graph21 = new TH1F("Graph_Graph21","Event number: 4",100,0,1200);
   Graph_Graph21->SetMinimum(-120);
   Graph_Graph21->SetMaximum(120);
   Graph_Graph21->SetDirectory(0);
   Graph_Graph21->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph21->SetLineColor(ci);
   Graph_Graph21->GetXaxis()->SetTitle("z flash data");
   Graph_Graph21->GetXaxis()->SetLabelFont(42);
   Graph_Graph21->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph21->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph21->GetXaxis()->SetTitleFont(42);
   Graph_Graph21->GetYaxis()->SetTitle("y flash data");
   Graph_Graph21->GetYaxis()->SetLabelFont(42);
   Graph_Graph21->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph21->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph21->GetYaxis()->SetTitleFont(42);
   Graph_Graph21->GetZaxis()->SetLabelFont(42);
   Graph_Graph21->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph21->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph21->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph21);
   
   graph->Draw("ap");
   
   Double_t _fx22[1] = {
   592.4704};
   Double_t _fy22[1] = {
   0.07680316};
   graph = new TGraph(1,_fx22,_fy22);
   graph->SetName("");
   graph->SetTitle("Event number: 4");
   graph->SetFillColor(1);

   ci = TColor::GetColor("#0000ff");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(20);
   
   TH1F *Graph_Graph_Graph2122 = new TH1F("Graph_Graph_Graph2122","Event number: 4",100,0,1200);
   Graph_Graph_Graph2122->SetMinimum(-120);
   Graph_Graph_Graph2122->SetMaximum(120);
   Graph_Graph_Graph2122->SetDirectory(0);
   Graph_Graph_Graph2122->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_Graph2122->SetLineColor(ci);
   Graph_Graph_Graph2122->GetXaxis()->SetTitle("z flash data");
   Graph_Graph_Graph2122->GetXaxis()->SetLabelFont(42);
   Graph_Graph_Graph2122->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_Graph2122->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_Graph2122->GetXaxis()->SetTitleFont(42);
   Graph_Graph_Graph2122->GetYaxis()->SetTitle("y flash data");
   Graph_Graph_Graph2122->GetYaxis()->SetLabelFont(42);
   Graph_Graph_Graph2122->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_Graph2122->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_Graph2122->GetYaxis()->SetTitleFont(42);
   Graph_Graph_Graph2122->GetZaxis()->SetLabelFont(42);
   Graph_Graph_Graph2122->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_Graph2122->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_Graph2122->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph_Graph2122);
   
   graph->Draw("p");
   
   Double_t _fx23[1] = {
   658.8509};
   Double_t _fy23[1] = {
   -93.68142};
   graph = new TGraph(1,_fx23,_fy23);
   graph->SetName("");
   graph->SetTitle("");
   graph->SetFillColor(1);

   ci = TColor::GetColor("#00ff00");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(20);
   
   TH1F *Graph_Graph23 = new TH1F("Graph_Graph23","",100,658.7509,659.9509);
   Graph_Graph23->SetMinimum(-120);
   Graph_Graph23->SetMaximum(120);
   Graph_Graph23->SetDirectory(0);
   Graph_Graph23->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph23->SetLineColor(ci);
   Graph_Graph23->GetXaxis()->SetRange(0,101);
   Graph_Graph23->GetXaxis()->SetLabelFont(42);
   Graph_Graph23->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph23->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph23->GetXaxis()->SetTitleFont(42);
   Graph_Graph23->GetYaxis()->SetLabelFont(42);
   Graph_Graph23->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph23->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph23->GetYaxis()->SetTitleFont(42);
   Graph_Graph23->GetZaxis()->SetLabelFont(42);
   Graph_Graph23->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph23->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph23->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph23);
   
   graph->Draw("p");
   
   Double_t _fx24[1] = {
   658.8509};
   Double_t _fy24[1] = {
   -93.68142};
   graph = new TGraph(1,_fx24,_fy24);
   graph->SetName("");
   graph->SetTitle("");
   graph->SetFillColor(1);

   ci = TColor::GetColor("#00ff00");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(20);
   
   TH1F *Graph_Graph_Graph2324 = new TH1F("Graph_Graph_Graph2324","",100,658.7509,659.9509);
   Graph_Graph_Graph2324->SetMinimum(-120);
   Graph_Graph_Graph2324->SetMaximum(120);
   Graph_Graph_Graph2324->SetDirectory(0);
   Graph_Graph_Graph2324->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_Graph2324->SetLineColor(ci);
   Graph_Graph_Graph2324->GetXaxis()->SetRange(0,101);
   Graph_Graph_Graph2324->GetXaxis()->SetLabelFont(42);
   Graph_Graph_Graph2324->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_Graph2324->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_Graph2324->GetXaxis()->SetTitleFont(42);
   Graph_Graph_Graph2324->GetYaxis()->SetLabelFont(42);
   Graph_Graph_Graph2324->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_Graph2324->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_Graph2324->GetYaxis()->SetTitleFont(42);
   Graph_Graph_Graph2324->GetZaxis()->SetLabelFont(42);
   Graph_Graph_Graph2324->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_Graph2324->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_Graph2324->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph_Graph2324);
   
   graph->Draw("p");
   
   Double_t _fx25[1] = {
   632.9887};
   Double_t _fy25[1] = {
   -116.5575};
   graph = new TGraph(1,_fx25,_fy25);
   graph->SetName("");
   graph->SetTitle("");
   graph->SetFillColor(1);

   ci = TColor::GetColor("#ff0000");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(20);
   
   TH1F *Graph_Graph25 = new TH1F("Graph_Graph25","",100,632.8887,634.0887);
   Graph_Graph25->SetMinimum(-120);
   Graph_Graph25->SetMaximum(120);
   Graph_Graph25->SetDirectory(0);
   Graph_Graph25->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph25->SetLineColor(ci);
   Graph_Graph25->GetXaxis()->SetLabelFont(42);
   Graph_Graph25->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph25->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph25->GetXaxis()->SetTitleFont(42);
   Graph_Graph25->GetYaxis()->SetLabelFont(42);
   Graph_Graph25->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph25->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph25->GetYaxis()->SetTitleFont(42);
   Graph_Graph25->GetZaxis()->SetLabelFont(42);
   Graph_Graph25->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph25->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph25->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph25);
   
   graph->Draw("p");
   
   TPaveText *pt = new TPaveText(0.3328094,0.94,0.6671906,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *AText = pt->AddText("Event number: 4");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
