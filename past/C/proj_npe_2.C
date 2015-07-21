void proj_npe_2()
{
//=========Macro generated from canvas: c/
//=========  (Wed Jul 15 16:16:05 2015) by ROOT version6.04/00
   TCanvas *c = new TCanvas("c", "",0,45,600,500);
   c->SetHighLightColor(2);
   c->Range(-2473.394,-52.78188,3996.184,475.0369);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t _fx3[42] = {
   -1395.131,
   -1075.981,
   -1049.5,
   -1036.461,
   -882.8334,
   -826.0547,
   -706.9823,
   -648.9611,
   -605.2245,
   -602.6197,
   -586.9669,
   -479.8748,
   -375.1982,
   -195.4487,
   0.2188904,
   209.6111,
   356.0539,
   505.8119,
   846.9215,
   881.8422,
   1032.936,
   1073.317,
   1116.045,
   1132.75,
   1143.951,
   1163.556,
   1296.182,
   1505.766,
   1548.03,
   1721.562,
   1733.53,
   1802.373,
   1827.352,
   1848.789,
   1961.138,
   2146.514,
   2330.809,
   2409.648,
   2465.599,
   2557.501,
   2861.461,
   2917.921};
   Double_t _fy3[42] = {
   2.7,
   2.3,
   2.5,
   2.5,
   2.35,
   2.8,
   2.6,
   2.15,
   2.6,
   2.65,
   2.6,
   3.55,
   2.55,
   2.3,
   384.05,
   2.25,
   2.55,
   2.75,
   2.2,
   2.6,
   2.65,
   2.55,
   2.6,
   2.7,
   2.65,
   2.55,
   2.4,
   2.7,
   2.45,
   2.55,
   2.25,
   2.55,
   2.7,
   2.2,
   2,
   2.7,
   2.65,
   2.7,
   2.65,
   2.65,
   2.55,
   2.45};
   TGraph *graph = new TGraph(42,_fx3,_fy3);
   graph->SetName("");
   graph->SetTitle("Event 2");
   graph->SetFillColor(1);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3 = new TH1F("Graph_Graph3","Event 2",100,-1826.437,3349.226);
   Graph_Graph3->SetMinimum(0);
   Graph_Graph3->SetMaximum(422.255);
   Graph_Graph3->SetDirectory(0);
   Graph_Graph3->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph3->SetLineColor(ci);
   Graph_Graph3->GetXaxis()->SetTitle("time wrt trigger [cm]");
   Graph_Graph3->GetXaxis()->SetLabelFont(42);
   Graph_Graph3->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph3->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph3->GetXaxis()->SetTitleFont(42);
   Graph_Graph3->GetYaxis()->SetTitle("#PE");
   Graph_Graph3->GetYaxis()->SetLabelFont(42);
   Graph_Graph3->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph3->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph3->GetYaxis()->SetTitleFont(42);
   Graph_Graph3->GetZaxis()->SetLabelFont(42);
   Graph_Graph3->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph3->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph3->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph3);
   
   graph->Draw("ap");
   
   TPaveText *pt = new TPaveText(0.4189298,0.94,0.5810702,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *AText = pt->AddText("Event 2");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
