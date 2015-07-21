void proj_npe_0()
{
//=========Macro generated from canvas: c/
//=========  (Wed Jul 15 16:16:05 2015) by ROOT version6.04/00
   TCanvas *c = new TCanvas("c", "",0,45,600,500);
   c->SetHighLightColor(2);
   c->Range(-2716.916,-117.9125,4020.756,1061.213);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t _fx1[32] = {
   -1593.971,
   -1573.144,
   -1516.09,
   -1310.111,
   -1291.847,
   -1044.853,
   -654.092,
   -414.9965,
   -227.7109,
   -161.1516,
   -83.06539,
   1.535061,
   1.890625,
   57.34346,
   103.3594,
   683.7457,
   1025.117,
   1161.281,
   1252.195,
   1323.687,
   1346.21,
   1592.206,
   1736.102,
   1914.749,
   2110.663,
   2241.117,
   2337.74,
   2568.249,
   2690.249,
   2773.125,
   2858.312,
   2897.811};
   Double_t _fy1[32] = {
   2.45,
   2.5,
   2.3,
   2.4,
   2.65,
   2.65,
   2.7,
   2.25,
   2.3,
   2.7,
   2.7,
   857.75,
   6.75,
   2.7,
   2.35,
   2.55,
   2.3,
   2.6,
   2.55,
   2.65,
   2.35,
   2.6,
   2.7,
   2.75,
   2.55,
   2.35,
   2.5,
   2.8,
   2.85,
   2.5,
   2.45,
   2.4};
   TGraph *graph = new TGraph(32,_fx1,_fy1);
   graph->SetName("");
   graph->SetTitle("Event 0");
   graph->SetFillColor(1);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(20);
   
   TH1F *Graph_Graph1 = new TH1F("Graph_Graph1","Event 0",100,-2043.149,3346.989);
   Graph_Graph1->SetMinimum(0);
   Graph_Graph1->SetMaximum(943.3);
   Graph_Graph1->SetDirectory(0);
   Graph_Graph1->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1->SetLineColor(ci);
   Graph_Graph1->GetXaxis()->SetTitle("time wrt trigger [cm]");
   Graph_Graph1->GetXaxis()->SetLabelFont(42);
   Graph_Graph1->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph1->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph1->GetXaxis()->SetTitleFont(42);
   Graph_Graph1->GetYaxis()->SetTitle("#PE");
   Graph_Graph1->GetYaxis()->SetLabelFont(42);
   Graph_Graph1->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph1->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph1->GetYaxis()->SetTitleFont(42);
   Graph_Graph1->GetZaxis()->SetLabelFont(42);
   Graph_Graph1->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph1);
   
   graph->Draw("ap");
   
   TPaveText *pt = new TPaveText(0.4189298,0.94,0.5810702,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *AText = pt->AddText("Event 0");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
