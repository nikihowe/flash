void proj_npe_5()
{
//=========Macro generated from canvas: c/
//=========  (Wed Jul 15 10:08:14 2015) by ROOT version6.04/00
   TCanvas *c = new TCanvas("c", "",0,45,600,500);
   c->SetHighLightColor(2);
   c->Range(-2711.075,-90.40813,4288.331,813.6731);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t _fx6[39] = {
   -1544.507,
   -1360.57,
   -1018.597,
   -893.634,
   -791.3369,
   -366.1731,
   -352.8906,
   -237.2188,
   -201.7047,
   -101.4558,
   0.844275,
   1.640625,
   32.07567,
   42.54369,
   179.9505,
   462.1106,
   477.6556,
   647.8125,
   685.8074,
   936.2334,
   972.9933,
   1015.403,
   1146.154,
   1282.669,
   1450.428,
   1560.401,
   1570.016,
   1589.484,
   1744.19,
   1868.311,
   1979.693,
   2120,
   2240.084,
   2276.861,
   2516.132,
   2551.774,
   2710.762,
   3084.789,
   3121.763};
   Double_t _fy6[39] = {
   2.55,
   2.65,
   2.55,
   2.85,
   2.05,
   2.5,
   2.6,
   2.7,
   2.45,
   2.35,
   657.7,
   2.3,
   2.55,
   2.45,
   2.4,
   2.5,
   2.5,
   2.8,
   2.45,
   2.35,
   2.45,
   3.85,
   2.35,
   2.35,
   2.6,
   2.6,
   2.5,
   2.6,
   2.55,
   2.4,
   2.6,
   2.6,
   2.65,
   2.3,
   2.35,
   2.75,
   2.4,
   2.85,
   2.4};
   TGraph *graph = new TGraph(39,_fx6,_fy6);
   graph->SetName("");
   graph->SetTitle("npe values of flashes in event: 5");
   graph->SetFillColor(1);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(20);
   
   TH1F *Graph_Graph6 = new TH1F("Graph_Graph6","npe values of flashes in event: 5",100,-2011.134,3588.39);
   Graph_Graph6->SetMinimum(0);
   Graph_Graph6->SetMaximum(723.265);
   Graph_Graph6->SetDirectory(0);
   Graph_Graph6->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph6->SetLineColor(ci);
   Graph_Graph6->GetXaxis()->SetTitle("flash_t");
   Graph_Graph6->GetXaxis()->SetLabelFont(42);
   Graph_Graph6->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph6->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph6->GetXaxis()->SetTitleFont(42);
   Graph_Graph6->GetYaxis()->SetTitle("flash_npe");
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
   
   TPaveText *pt = new TPaveText(0.1823077,0.9368947,0.8176923,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *AText = pt->AddText("npe values of flashes in event: 5");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
