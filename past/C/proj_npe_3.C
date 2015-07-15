void proj_npe_3()
{
//=========Macro generated from canvas: c/
//=========  (Wed Jul 15 10:08:14 2015) by ROOT version6.04/00
   TCanvas *c = new TCanvas("c", "",0,45,600,500);
   c->SetHighLightColor(2);
   c->Range(-2709.33,-98.81313,4267.041,889.3181);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t _fx4[41] = {
   -1546.602,
   -855.5742,
   -790.174,
   -716.8152,
   -523.2621,
   -322.5192,
   -268.2073,
   -205.0337,
   -175.3538,
   -162.2933,
   1.016135,
   2.015625,
   2.34375,
   146.0038,
   157.7175,
   273.606,
   285.561,
   581.7188,
   766.0081,
   788.2539,
   898.1578,
   905.4275,
   956.0303,
   1053.048,
   1064.476,
   1403.164,
   1472.756,
   1476.902,
   1556.973,
   1639.699,
   1652.101,
   1711.18,
   1764.425,
   2094.944,
   2163.436,
   2252.093,
   2495.273,
   2879.07,
   3003.858,
   3076.27,
   3104.312};
   Double_t _fy4[41] = {
   2.6,
   2.4,
   2.55,
   2.35,
   2.45,
   2.6,
   2.6,
   2.6,
   2.8,
   2.6,
   718.85,
   6.7,
   3.1,
   2.45,
   2.6,
   4.15,
   2.55,
   2.55,
   2.5,
   2.4,
   2.55,
   2.5,
   2.55,
   2.3,
   2.85,
   2.55,
   2.7,
   2.6,
   2.35,
   2.45,
   2.3,
   2.7,
   2.6,
   2.5,
   2.65,
   2.6,
   4.05,
   2.75,
   2.6,
   2.55,
   2.6};
   TGraph *graph = new TGraph(41,_fx4,_fy4);
   graph->SetName("");
   graph->SetTitle("npe values of flashes in event: 3");
   graph->SetFillColor(1);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(20);
   
   TH1F *Graph_Graph4 = new TH1F("Graph_Graph4","npe values of flashes in event: 3",100,-2011.693,3569.404);
   Graph_Graph4->SetMinimum(0);
   Graph_Graph4->SetMaximum(790.505);
   Graph_Graph4->SetDirectory(0);
   Graph_Graph4->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph4->SetLineColor(ci);
   Graph_Graph4->GetXaxis()->SetTitle("flash_t");
   Graph_Graph4->GetXaxis()->SetLabelFont(42);
   Graph_Graph4->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph4->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph4->GetXaxis()->SetTitleFont(42);
   Graph_Graph4->GetYaxis()->SetTitle("flash_npe");
   Graph_Graph4->GetYaxis()->SetLabelFont(42);
   Graph_Graph4->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph4->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph4->GetYaxis()->SetTitleFont(42);
   Graph_Graph4->GetZaxis()->SetLabelFont(42);
   Graph_Graph4->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph4->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph4->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph4);
   
   graph->Draw("ap");
   
   TPaveText *pt = new TPaveText(0.1823077,0.9368947,0.8176923,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *AText = pt->AddText("npe values of flashes in event: 3");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
