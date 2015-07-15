void proj_npe_4()
{
//=========Macro generated from canvas: c/
//=========  (Wed Jul 15 10:08:14 2015) by ROOT version6.04/00
   TCanvas *c = new TCanvas("c", "",0,45,600,500);
   c->SetHighLightColor(2);
   c->Range(-2754.35,-3.885,4297.281,34.965);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t _fx5[53] = {
   -1579.078,
   -1402.292,
   -1312.819,
   -1277.455,
   -1055.698,
   -1030.9,
   -962.3008,
   -918.3906,
   -870.517,
   -855.6976,
   -668.9226,
   -521.4156,
   -458.5003,
   -423.8125,
   -373.7947,
   -217.9531,
   -154.0126,
   -55.43037,
   -52.375,
   -32.85142,
   1.25313,
   32.005,
   253.0086,
   373.0289,
   470.162,
   536.7344,
   854.7362,
   952.4344,
   1094.234,
   1117.554,
   1217.764,
   1503.602,
   1566.498,
   1600.962,
   1785.568,
   1803.823,
   1855.233,
   2068.038,
   2079.413,
   2088.826,
   2411.272,
   2500.986,
   2525.071,
   2544.085,
   2623.859,
   2667.889,
   2702.585,
   2751.337,
   3031.632,
   3070.009,
   3081.975,
   3110.551,
   3122.009};
   Double_t _fy5[53] = {
   2.6,
   2.4,
   2.7,
   2.7,
   2.5,
   2.65,
   2.6,
   2.75,
   2.25,
   2.55,
   2.15,
   2.6,
   2.35,
   2.6,
   2.55,
   2.35,
   2.55,
   2.3,
   2.7,
   2.65,
   28.45,
   2.5,
   3.8,
   2.65,
   2.6,
   2.55,
   2.6,
   2.55,
   2.5,
   2.65,
   2.45,
   2.85,
   2.6,
   2.6,
   2.55,
   2.35,
   2.7,
   2.75,
   2.8,
   2.5,
   2.8,
   2.3,
   2.9,
   2.55,
   2.4,
   2.7,
   2.6,
   2.3,
   2.65,
   2.2,
   2.45,
   2.5,
   2.35};
   TGraph *graph = new TGraph(53,_fx5,_fy5);
   graph->SetName("");
   graph->SetTitle("npe values of flashes in event: 4");
   graph->SetFillColor(1);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(20);
   
   TH1F *Graph_Graph5 = new TH1F("Graph_Graph5","npe values of flashes in event: 4",100,-2049.187,3592.118);
   Graph_Graph5->SetMinimum(0);
   Graph_Graph5->SetMaximum(31.08);
   Graph_Graph5->SetDirectory(0);
   Graph_Graph5->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph5->SetLineColor(ci);
   Graph_Graph5->GetXaxis()->SetTitle("flash_t");
   Graph_Graph5->GetXaxis()->SetLabelFont(42);
   Graph_Graph5->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph5->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph5->GetXaxis()->SetTitleFont(42);
   Graph_Graph5->GetYaxis()->SetTitle("flash_npe");
   Graph_Graph5->GetYaxis()->SetLabelFont(42);
   Graph_Graph5->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph5->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph5->GetYaxis()->SetTitleFont(42);
   Graph_Graph5->GetZaxis()->SetLabelFont(42);
   Graph_Graph5->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph5->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph5->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph5);
   
   graph->Draw("ap");
   
   TPaveText *pt = new TPaveText(0.1823077,0.9368947,0.8176923,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *AText = pt->AddText("npe values of flashes in event: 4");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
