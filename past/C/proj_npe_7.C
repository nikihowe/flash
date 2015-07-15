void proj_npe_7()
{
//=========Macro generated from canvas: c/
//=========  (Wed Jul 15 10:08:15 2015) by ROOT version6.04/00
   TCanvas *c = new TCanvas("c", "",0,45,600,500);
   c->SetHighLightColor(2);
   c->Range(-2716.773,-19.2575,4381.788,173.3175);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t _fx8[40] = {
   -1533.68,
   -1080.366,
   -985.4475,
   -967.7257,
   -676.2766,
   -543.2768,
   0.5077484,
   1.609375,
   4,
   230.4228,
   298.6529,
   327.7793,
   383.4035,
   536.5637,
   668.7969,
   863.9145,
   907.8805,
   964.7188,
   971.6563,
   1075.914,
   1097.936,
   1215.826,
   1275.258,
   1308.524,
   1328.116,
   1732.736,
   2102.711,
   2197.457,
   2255.99,
   2286.444,
   2371.061,
   2594.067,
   2630.891,
   2704.654,
   2727.792,
   2773.388,
   2784.73,
   2845.592,
   2924.958,
   3198.695};
   Double_t _fy8[40] = {
   2.75,
   2.65,
   2.65,
   2.7,
   2.35,
   2.45,
   140.25,
   2.65,
   2.15,
   2.55,
   2.35,
   2.45,
   2.3,
   2.5,
   2.65,
   4.05,
   2.55,
   2.5,
   2.35,
   2.25,
   2.6,
   2.7,
   2.7,
   2.6,
   2.4,
   2.35,
   2.8,
   2.55,
   2.35,
   2.8,
   2.4,
   2.35,
   2.6,
   2.6,
   2.45,
   2.45,
   2.65,
   2.55,
   2.55,
   2.65};
   TGraph *graph = new TGraph(40,_fx8,_fy8);
   graph->SetName("");
   graph->SetTitle("npe values of flashes in event: 7");
   graph->SetFillColor(1);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(20);
   
   TH1F *Graph_Graph8 = new TH1F("Graph_Graph8","npe values of flashes in event: 7",100,-2006.917,3671.932);
   Graph_Graph8->SetMinimum(0);
   Graph_Graph8->SetMaximum(154.06);
   Graph_Graph8->SetDirectory(0);
   Graph_Graph8->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph8->SetLineColor(ci);
   Graph_Graph8->GetXaxis()->SetTitle("flash_t");
   Graph_Graph8->GetXaxis()->SetLabelFont(42);
   Graph_Graph8->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph8->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph8->GetXaxis()->SetTitleFont(42);
   Graph_Graph8->GetYaxis()->SetTitle("flash_npe");
   Graph_Graph8->GetYaxis()->SetLabelFont(42);
   Graph_Graph8->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph8->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph8->GetYaxis()->SetTitleFont(42);
   Graph_Graph8->GetZaxis()->SetLabelFont(42);
   Graph_Graph8->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph8->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph8->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph8);
   
   graph->Draw("ap");
   
   TPaveText *pt = new TPaveText(0.1823077,0.9368947,0.8176923,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *AText = pt->AddText("npe values of flashes in event: 7");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
