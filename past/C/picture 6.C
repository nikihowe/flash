void picture 6()
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
   
   Double_t _fx31[1] = {
   160.8351};
   Double_t _fy31[1] = {
   -13.29982};
   TGraph *graph = new TGraph(1,_fx31,_fy31);
   graph->SetName("");
   graph->SetTitle("Event number: 6");
   graph->SetFillColor(1);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(20);
   
   TH1F *Graph_Graph31 = new TH1F("Graph_Graph31","Event number: 6",100,0,1200);
   Graph_Graph31->SetMinimum(-120);
   Graph_Graph31->SetMaximum(120);
   Graph_Graph31->SetDirectory(0);
   Graph_Graph31->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph31->SetLineColor(ci);
   Graph_Graph31->GetXaxis()->SetTitle("z flash data");
   Graph_Graph31->GetXaxis()->SetLabelFont(42);
   Graph_Graph31->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph31->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph31->GetXaxis()->SetTitleFont(42);
   Graph_Graph31->GetYaxis()->SetTitle("y flash data");
   Graph_Graph31->GetYaxis()->SetLabelFont(42);
   Graph_Graph31->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph31->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph31->GetYaxis()->SetTitleFont(42);
   Graph_Graph31->GetZaxis()->SetLabelFont(42);
   Graph_Graph31->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph31->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph31->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph31);
   
   graph->Draw("ap");
   
   Double_t _fx32[1] = {
   160.8351};
   Double_t _fy32[1] = {
   -13.29982};
   graph = new TGraph(1,_fx32,_fy32);
   graph->SetName("");
   graph->SetTitle("Event number: 6");
   graph->SetFillColor(1);

   ci = TColor::GetColor("#0000ff");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(20);
   
   TH1F *Graph_Graph_Graph3132 = new TH1F("Graph_Graph_Graph3132","Event number: 6",100,0,1200);
   Graph_Graph_Graph3132->SetMinimum(-120);
   Graph_Graph_Graph3132->SetMaximum(120);
   Graph_Graph_Graph3132->SetDirectory(0);
   Graph_Graph_Graph3132->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_Graph3132->SetLineColor(ci);
   Graph_Graph_Graph3132->GetXaxis()->SetTitle("z flash data");
   Graph_Graph_Graph3132->GetXaxis()->SetLabelFont(42);
   Graph_Graph_Graph3132->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_Graph3132->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_Graph3132->GetXaxis()->SetTitleFont(42);
   Graph_Graph_Graph3132->GetYaxis()->SetTitle("y flash data");
   Graph_Graph_Graph3132->GetYaxis()->SetLabelFont(42);
   Graph_Graph_Graph3132->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_Graph3132->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_Graph3132->GetYaxis()->SetTitleFont(42);
   Graph_Graph_Graph3132->GetZaxis()->SetLabelFont(42);
   Graph_Graph_Graph3132->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_Graph3132->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_Graph3132->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph_Graph3132);
   
   graph->Draw("p");
   
   Double_t _fx33[1] = {
   228.8381};
   Double_t _fy33[1] = {
   -34.35712};
   graph = new TGraph(1,_fx33,_fy33);
   graph->SetName("");
   graph->SetTitle("");
   graph->SetFillColor(1);

   ci = TColor::GetColor("#00ff00");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(20);
   
   TH1F *Graph_Graph33 = new TH1F("Graph_Graph33","",100,228.7381,229.9381);
   Graph_Graph33->SetMinimum(-120);
   Graph_Graph33->SetMaximum(120);
   Graph_Graph33->SetDirectory(0);
   Graph_Graph33->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph33->SetLineColor(ci);
   Graph_Graph33->GetXaxis()->SetRange(0,101);
   Graph_Graph33->GetXaxis()->SetLabelFont(42);
   Graph_Graph33->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph33->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph33->GetXaxis()->SetTitleFont(42);
   Graph_Graph33->GetYaxis()->SetLabelFont(42);
   Graph_Graph33->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph33->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph33->GetYaxis()->SetTitleFont(42);
   Graph_Graph33->GetZaxis()->SetLabelFont(42);
   Graph_Graph33->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph33->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph33->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph33);
   
   graph->Draw("p");
   
   Double_t _fx34[1] = {
   228.8381};
   Double_t _fy34[1] = {
   -34.35712};
   graph = new TGraph(1,_fx34,_fy34);
   graph->SetName("");
   graph->SetTitle("");
   graph->SetFillColor(1);

   ci = TColor::GetColor("#00ff00");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(20);
   
   TH1F *Graph_Graph_Graph3334 = new TH1F("Graph_Graph_Graph3334","",100,228.7381,229.9381);
   Graph_Graph_Graph3334->SetMinimum(-120);
   Graph_Graph_Graph3334->SetMaximum(120);
   Graph_Graph_Graph3334->SetDirectory(0);
   Graph_Graph_Graph3334->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_Graph3334->SetLineColor(ci);
   Graph_Graph_Graph3334->GetXaxis()->SetRange(0,101);
   Graph_Graph_Graph3334->GetXaxis()->SetLabelFont(42);
   Graph_Graph_Graph3334->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_Graph3334->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_Graph3334->GetXaxis()->SetTitleFont(42);
   Graph_Graph_Graph3334->GetYaxis()->SetLabelFont(42);
   Graph_Graph_Graph3334->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_Graph3334->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_Graph3334->GetYaxis()->SetTitleFont(42);
   Graph_Graph_Graph3334->GetZaxis()->SetLabelFont(42);
   Graph_Graph_Graph3334->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_Graph3334->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_Graph3334->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph_Graph3334);
   
   graph->Draw("p");
   
   Double_t _fx35[1] = {
   93.09053};
   Double_t _fy35[1] = {
   -34.45252};
   graph = new TGraph(1,_fx35,_fy35);
   graph->SetName("");
   graph->SetTitle("");
   graph->SetFillColor(1);

   ci = TColor::GetColor("#ff0000");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(20);
   
   TH1F *Graph_Graph35 = new TH1F("Graph_Graph35","",100,92.99053,94.19053);
   Graph_Graph35->SetMinimum(-120);
   Graph_Graph35->SetMaximum(120);
   Graph_Graph35->SetDirectory(0);
   Graph_Graph35->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph35->SetLineColor(ci);
   Graph_Graph35->GetXaxis()->SetLabelFont(42);
   Graph_Graph35->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph35->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph35->GetXaxis()->SetTitleFont(42);
   Graph_Graph35->GetYaxis()->SetLabelFont(42);
   Graph_Graph35->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph35->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph35->GetYaxis()->SetTitleFont(42);
   Graph_Graph35->GetZaxis()->SetLabelFont(42);
   Graph_Graph35->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph35->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph35->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph35);
   
   graph->Draw("p");
   
   TPaveText *pt = new TPaveText(0.3328094,0.94,0.6671906,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *AText = pt->AddText("Event number: 6");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
