void picture 1()
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
   
   Double_t _fx6[1] = {
   217.3084};
   Double_t _fy6[1] = {
   -14.47291};
   TGraph *graph = new TGraph(1,_fx6,_fy6);
   graph->SetName("");
   graph->SetTitle("Event number: 1");
   graph->SetFillColor(1);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(20);
   
   TH1F *Graph_Graph6 = new TH1F("Graph_Graph6","Event number: 1",100,0,1200);
   Graph_Graph6->SetMinimum(-120);
   Graph_Graph6->SetMaximum(120);
   Graph_Graph6->SetDirectory(0);
   Graph_Graph6->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph6->SetLineColor(ci);
   Graph_Graph6->GetXaxis()->SetTitle("z flash data");
   Graph_Graph6->GetXaxis()->SetLabelFont(42);
   Graph_Graph6->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph6->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph6->GetXaxis()->SetTitleFont(42);
   Graph_Graph6->GetYaxis()->SetTitle("y flash data");
   Graph_Graph6->GetYaxis()->SetLabelFont(42);
   Graph_Graph6->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph6->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph6->GetYaxis()->SetTitleFont(42);
   Graph_Graph6->GetZaxis()->SetLabelFont(42);
   Graph_Graph6->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph6->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph6->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph6);
   
   graph->Draw("ap");
   
   Double_t _fx7[1] = {
   217.3084};
   Double_t _fy7[1] = {
   -14.47291};
   graph = new TGraph(1,_fx7,_fy7);
   graph->SetName("");
   graph->SetTitle("Event number: 1");
   graph->SetFillColor(1);

   ci = TColor::GetColor("#0000ff");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(20);
   
   TH1F *Graph_Graph_Graph67 = new TH1F("Graph_Graph_Graph67","Event number: 1",100,0,1200);
   Graph_Graph_Graph67->SetMinimum(-120);
   Graph_Graph_Graph67->SetMaximum(120);
   Graph_Graph_Graph67->SetDirectory(0);
   Graph_Graph_Graph67->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_Graph67->SetLineColor(ci);
   Graph_Graph_Graph67->GetXaxis()->SetTitle("z flash data");
   Graph_Graph_Graph67->GetXaxis()->SetLabelFont(42);
   Graph_Graph_Graph67->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_Graph67->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_Graph67->GetXaxis()->SetTitleFont(42);
   Graph_Graph_Graph67->GetYaxis()->SetTitle("y flash data");
   Graph_Graph_Graph67->GetYaxis()->SetLabelFont(42);
   Graph_Graph_Graph67->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_Graph67->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_Graph67->GetYaxis()->SetTitleFont(42);
   Graph_Graph_Graph67->GetZaxis()->SetLabelFont(42);
   Graph_Graph_Graph67->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_Graph67->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_Graph67->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph_Graph67);
   
   graph->Draw("p");
   
   Double_t _fx8[1] = {
   217.003};
   Double_t _fy8[1] = {
   -105.0014};
   graph = new TGraph(1,_fx8,_fy8);
   graph->SetName("");
   graph->SetTitle("");
   graph->SetFillColor(1);

   ci = TColor::GetColor("#00ff00");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(20);
   
   TH1F *Graph_Graph8 = new TH1F("Graph_Graph8","",100,216.903,218.103);
   Graph_Graph8->SetMinimum(-120);
   Graph_Graph8->SetMaximum(120);
   Graph_Graph8->SetDirectory(0);
   Graph_Graph8->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph8->SetLineColor(ci);
   Graph_Graph8->GetXaxis()->SetRange(0,101);
   Graph_Graph8->GetXaxis()->SetLabelFont(42);
   Graph_Graph8->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph8->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph8->GetXaxis()->SetTitleFont(42);
   Graph_Graph8->GetYaxis()->SetLabelFont(42);
   Graph_Graph8->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph8->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph8->GetYaxis()->SetTitleFont(42);
   Graph_Graph8->GetZaxis()->SetLabelFont(42);
   Graph_Graph8->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph8->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph8->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph8);
   
   graph->Draw("p");
   
   Double_t _fx9[1] = {
   217.003};
   Double_t _fy9[1] = {
   -105.0014};
   graph = new TGraph(1,_fx9,_fy9);
   graph->SetName("");
   graph->SetTitle("");
   graph->SetFillColor(1);

   ci = TColor::GetColor("#00ff00");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(20);
   
   TH1F *Graph_Graph_Graph89 = new TH1F("Graph_Graph_Graph89","",100,216.903,218.103);
   Graph_Graph_Graph89->SetMinimum(-120);
   Graph_Graph_Graph89->SetMaximum(120);
   Graph_Graph_Graph89->SetDirectory(0);
   Graph_Graph_Graph89->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_Graph89->SetLineColor(ci);
   Graph_Graph_Graph89->GetXaxis()->SetRange(0,101);
   Graph_Graph_Graph89->GetXaxis()->SetLabelFont(42);
   Graph_Graph_Graph89->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_Graph89->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_Graph89->GetXaxis()->SetTitleFont(42);
   Graph_Graph_Graph89->GetYaxis()->SetLabelFont(42);
   Graph_Graph_Graph89->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_Graph89->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_Graph89->GetYaxis()->SetTitleFont(42);
   Graph_Graph_Graph89->GetZaxis()->SetLabelFont(42);
   Graph_Graph_Graph89->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_Graph89->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_Graph89->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph_Graph89);
   
   graph->Draw("p");
   
   Double_t _fx10[1] = {
   217.0507};
   Double_t _fy10[1] = {
   -116.6078};
   graph = new TGraph(1,_fx10,_fy10);
   graph->SetName("");
   graph->SetTitle("");
   graph->SetFillColor(1);

   ci = TColor::GetColor("#ff0000");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(20);
   
   TH1F *Graph_Graph10 = new TH1F("Graph_Graph10","",100,216.9507,218.1507);
   Graph_Graph10->SetMinimum(-120);
   Graph_Graph10->SetMaximum(120);
   Graph_Graph10->SetDirectory(0);
   Graph_Graph10->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph10->SetLineColor(ci);
   Graph_Graph10->GetXaxis()->SetLabelFont(42);
   Graph_Graph10->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph10->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph10->GetXaxis()->SetTitleFont(42);
   Graph_Graph10->GetYaxis()->SetLabelFont(42);
   Graph_Graph10->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph10->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph10->GetYaxis()->SetTitleFont(42);
   Graph_Graph10->GetZaxis()->SetLabelFont(42);
   Graph_Graph10->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph10->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph10->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph10);
   
   graph->Draw("p");
   
   TPaveText *pt = new TPaveText(0.3328094,0.94,0.6671906,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *AText = pt->AddText("Event number: 1");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
