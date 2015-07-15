void proj_npe_6()
{
//=========Macro generated from canvas: c/
//=========  (Wed Jul 15 10:08:15 2015) by ROOT version6.04/00
   TCanvas *c = new TCanvas("c", "",0,45,600,500);
   c->SetHighLightColor(2);
   c->Range(-2764.703,-123.9931,4325.712,1115.938);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t _fx7[31] = {
   -1582.967,
   -1521.969,
   -1481.461,
   -1329.946,
   -1075.638,
   -668.9287,
   -517.1811,
   -419.4057,
   -166.7592,
   -8.4375,
   0.6862484,
   5.09375,
   6.953125,
   19.14659,
   103.4465,
   528.9527,
   701.8053,
   907.5245,
   964.8889,
   1030.767,
   1042.217,
   1173.399,
   1599.803,
   1901.788,
   2123.867,
   2449.707,
   2515.052,
   2697.392,
   2743.361,
   2798.375,
   3143.976};
   Double_t _fy7[31] = {
   2.6,
   2.5,
   2.55,
   2.35,
   2.4,
   2.3,
   2.8,
   2.75,
   2.55,
   2.15,
   901.95,
   2,
   2.3,
   2.75,
   2.35,
   2.05,
   2.4,
   2.55,
   2.65,
   2.25,
   2.7,
   2.7,
   2.75,
   2.65,
   2.5,
   2.2,
   2.55,
   2.2,
   3.8,
   2.2,
   2.55};
   TGraph *graph = new TGraph(31,_fx7,_fy7);
   graph->SetName("");
   graph->SetTitle("npe values of flashes in event: 6");
   graph->SetFillColor(1);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(20);
   
   TH1F *Graph_Graph7 = new TH1F("Graph_Graph7","npe values of flashes in event: 6",100,-2055.662,3616.67);
   Graph_Graph7->SetMinimum(0);
   Graph_Graph7->SetMaximum(991.945);
   Graph_Graph7->SetDirectory(0);
   Graph_Graph7->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph7->SetLineColor(ci);
   Graph_Graph7->GetXaxis()->SetTitle("flash_t");
   Graph_Graph7->GetXaxis()->SetLabelFont(42);
   Graph_Graph7->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph7->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph7->GetXaxis()->SetTitleFont(42);
   Graph_Graph7->GetYaxis()->SetTitle("flash_npe");
   Graph_Graph7->GetYaxis()->SetLabelFont(42);
   Graph_Graph7->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph7->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph7->GetYaxis()->SetTitleFont(42);
   Graph_Graph7->GetZaxis()->SetLabelFont(42);
   Graph_Graph7->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph7->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph7->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph7);
   
   graph->Draw("ap");
   
   TPaveText *pt = new TPaveText(0.1823077,0.9368947,0.8176923,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *AText = pt->AddText("npe values of flashes in event: 6");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
