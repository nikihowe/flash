void proj_npe_1()
{
//=========Macro generated from canvas: c/
//=========  (Wed Jul 15 16:16:05 2015) by ROOT version6.04/00
   TCanvas *c = new TCanvas("c", "",0,45,600,500);
   c->SetHighLightColor(2);
   c->Range(-2655.754,-5.755,4350.289,51.795);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t _fx2[39] = {
   -1488.08,
   -1403.181,
   -1178.164,
   -1033.78,
   -849.3154,
   -838.8983,
   -788.1957,
   -701.2156,
   -654.0264,
   -163.6875,
   1.142557,
   54.07047,
   256.5688,
   531.8203,
   632.5535,
   750.8472,
   835.9491,
   859.9519,
   970.3359,
   1013.975,
   1084.685,
   1488.872,
   1635.959,
   1867.579,
   1967.102,
   2022.346,
   2109.155,
   2234.388,
   2395.154,
   2415.658,
   2534.104,
   2547.086,
   2643.154,
   2683.775,
   2846.919,
   3002.304,
   3074.222,
   3131.044,
   3182.615};
   Double_t _fy2[39] = {
   2.55,
   2.3,
   2.55,
   2.7,
   2.4,
   2.65,
   2.75,
   2.5,
   2.4,
   2.45,
   42.05,
   2.55,
   2.6,
   2.6,
   2.85,
   2.7,
   2.55,
   2.6,
   2.6,
   2.6,
   2.55,
   2.25,
   2.65,
   2.6,
   2.55,
   2.25,
   2.55,
   2.45,
   2.65,
   2.65,
   2.65,
   2.6,
   2.6,
   2.35,
   2.55,
   2.15,
   2.45,
   2.75,
   2.3};
   TGraph *graph = new TGraph(39,_fx2,_fy2);
   graph->SetName("");
   graph->SetTitle("Event 1");
   graph->SetFillColor(1);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(20);
   
   TH1F *Graph_Graph2 = new TH1F("Graph_Graph2","Event 1",100,-1955.149,3649.684);
   Graph_Graph2->SetMinimum(0);
   Graph_Graph2->SetMaximum(46.04);
   Graph_Graph2->SetDirectory(0);
   Graph_Graph2->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph2->SetLineColor(ci);
   Graph_Graph2->GetXaxis()->SetTitle("time wrt trigger [cm]");
   Graph_Graph2->GetXaxis()->SetLabelFont(42);
   Graph_Graph2->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph2->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph2->GetXaxis()->SetTitleFont(42);
   Graph_Graph2->GetYaxis()->SetTitle("#PE");
   Graph_Graph2->GetYaxis()->SetLabelFont(42);
   Graph_Graph2->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph2->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph2->GetYaxis()->SetTitleFont(42);
   Graph_Graph2->GetZaxis()->SetLabelFont(42);
   Graph_Graph2->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph2->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph2->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph2);
   
   graph->Draw("ap");
   
   TPaveText *pt = new TPaveText(0.4189298,0.94,0.5810702,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *AText = pt->AddText("Event 1");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
