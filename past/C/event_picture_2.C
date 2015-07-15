void event_picture_2()
{
//=========Macro generated from canvas: c/
//=========  (Wed Jul 15 10:03:04 2015) by ROOT version6.04/00
   TCanvas *c = new TCanvas("c", "",0,45,600,500);
   c->SetHighLightColor(2);
   c->Range(-132.6545,-150,1193.891,150);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx7[42] = {
   688.5065,
   223.41,
   557.6054,
   232.1967,
   398.6266,
   731.4785,
   689.5494,
   351.556,
   563.107,
   864.3819,
   380.774,
   698.235,
   478.044,
   820.9985,
   792.688,
   664.6583,
   770.0486,
   290.6233,
   676.1567,
   831.568,
   623.6778,
   511.969,
   748.175,
   540.1095,
   852.9822,
   338.6869,
   442.2553,
   642.3482,
   649.4626,
   907.8858,
   474.7717,
   381.6868,
   971.1085,
   929.1785,
   500.1335,
   774.046,
   69.83237,
   705.643,
   842.4409,
   144.4375,
   426.333,
   625.5865};
   Double_t Graph0_fy7[42] = {
   28.90878,
   23.58787,
   -29.42612,
   1.46292,
   55.425,
   55.7125,
   -30.39708,
   26.34933,
   27.6365,
   -43.2373,
   13.612,
   -3.24993,
   -30.22982,
   55.57767,
   20.02759,
   -25.31133,
   12.77059,
   6.563036,
   30.09136,
   -0.5475,
   -1.405113,
   55.25694,
   27.6365,
   -0.6325,
   -27.87902,
   55.54112,
   -0.6656667,
   -56.24304,
   28.20049,
   -28.07102,
   -6.713778,
   -27.77845,
   13.344,
   -8.108591,
   55.771,
   27.5615,
   -15.38489,
   -0.2505,
   4.845075,
   -14.96426,
   55.44069,
   55.26902};
   TGraph *graph = new TGraph(42,Graph0_fx7,Graph0_fy7);
   graph->SetName("Graph0");
   graph->SetTitle("Event number: 2");
   graph->SetFillColor(1);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(20);
   
   TH1F *Graph_Graph7 = new TH1F("Graph_Graph7","Event number: 2",100,0,1061.236);
   Graph_Graph7->SetMinimum(-120);
   Graph_Graph7->SetMaximum(120);
   Graph_Graph7->SetDirectory(0);
   Graph_Graph7->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph7->SetLineColor(ci);
   Graph_Graph7->GetXaxis()->SetTitle("z flash data");
   Graph_Graph7->GetXaxis()->SetLabelFont(42);
   Graph_Graph7->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph7->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph7->GetXaxis()->SetTitleFont(42);
   Graph_Graph7->GetYaxis()->SetTitle("y flash data");
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
   
   Double_t Graph1_fx8[1] = {
   801.6865};
   Double_t Graph1_fy8[1] = {
   111.6076};
   graph = new TGraph(1,Graph1_fx8,Graph1_fy8);
   graph->SetName("Graph1");
   graph->SetTitle("Graph");
   graph->SetFillColor(1);

   ci = TColor::GetColor("#00ff00");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(20);
   
   TH1F *Graph_Graph8 = new TH1F("Graph_Graph8","Graph",100,801.5865,802.7865);
   Graph_Graph8->SetMinimum(-120);
   Graph_Graph8->SetMaximum(120);
   Graph_Graph8->SetDirectory(0);
   Graph_Graph8->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph8->SetLineColor(ci);
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
   
   Double_t Graph2_fx9[1] = {
   823.7501};
   Double_t Graph2_fy9[1] = {
   86.87169};
   graph = new TGraph(1,Graph2_fx9,Graph2_fy9);
   graph->SetName("Graph2");
   graph->SetTitle("Graph");
   graph->SetFillColor(1);

   ci = TColor::GetColor("#ff0000");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(20);
   
   TH1F *Graph_Graph9 = new TH1F("Graph_Graph9","Graph",100,823.6501,824.8501);
   Graph_Graph9->SetMinimum(-120);
   Graph_Graph9->SetMaximum(120);
   Graph_Graph9->SetDirectory(0);
   Graph_Graph9->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph9->SetLineColor(ci);
   Graph_Graph9->GetXaxis()->SetLabelFont(42);
   Graph_Graph9->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph9->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph9->GetXaxis()->SetTitleFont(42);
   Graph_Graph9->GetYaxis()->SetLabelFont(42);
   Graph_Graph9->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph9->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph9->GetYaxis()->SetTitleFont(42);
   Graph_Graph9->GetZaxis()->SetLabelFont(42);
   Graph_Graph9->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph9->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph9->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph9);
   
   graph->Draw("p");
   
   TPaveText *pt = new TPaveText(0.3328094,0.94,0.6671906,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *AText = pt->AddText("Event number: 2");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
