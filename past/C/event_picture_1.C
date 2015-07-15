void event_picture_1()
{
//=========Macro generated from canvas: c/
//=========  (Wed Jul 15 10:03:03 2015) by ROOT version6.04/00
   TCanvas *c = new TCanvas("c", "",0,45,600,500);
   c->SetHighLightColor(2);
   c->Range(-132.4812,-150,1192.33,150);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx4[39] = {
   813.4758,
   355.7989,
   826.7927,
   652.4006,
   463.5734,
   362.0778,
   582.4418,
   108.112,
   291.0459,
   87.8695,
   217.3084,
   489.7486,
   952.3211,
   540.1095,
   386.8767,
   528.5323,
   809.6397,
   971.1085,
   542.709,
   671.7447,
   971.4874,
   536.1364,
   230.1483,
   761.5249,
   350.5782,
   378.1331,
   824.0656,
   287.6395,
   751.283,
   208.5231,
   677.6837,
   646.261,
   388.2524,
   515.0589,
   637.3047,
   618.2818,
   208.8569,
   362.7577,
   529.9875};
   Double_t Graph0_fy4[39] = {
   -1.353608,
   -8.966826,
   55.71771,
   28.60481,
   43.7315,
   11.224,
   -12.01227,
   -0.683,
   6.43625,
   -56.615,
   -14.47291,
   27.81224,
   -12.73723,
   -0.6325,
   41.86435,
   -2.873259,
   -56.35947,
   13.344,
   27.611,
   -13.08002,
   -42.29608,
   -32.77398,
   -56.62023,
   -27.45525,
   27.53663,
   40.5882,
   5.144961,
   -56.261,
   -25.89164,
   -0.5709623,
   40.38342,
   -56.2445,
   27.97762,
   30.0054,
   -56.64453,
   54.98137,
   -14.92539,
   11.31084,
   22.56115};
   TGraph *graph = new TGraph(39,Graph0_fx4,Graph0_fy4);
   graph->SetName("Graph0");
   graph->SetTitle("Event number: 1");
   graph->SetFillColor(1);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(20);
   
   TH1F *Graph_Graph4 = new TH1F("Graph_Graph4","Event number: 1",100,0,1059.849);
   Graph_Graph4->SetMinimum(-120);
   Graph_Graph4->SetMaximum(120);
   Graph_Graph4->SetDirectory(0);
   Graph_Graph4->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph4->SetLineColor(ci);
   Graph_Graph4->GetXaxis()->SetTitle("z flash data");
   Graph_Graph4->GetXaxis()->SetLabelFont(42);
   Graph_Graph4->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph4->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph4->GetXaxis()->SetTitleFont(42);
   Graph_Graph4->GetYaxis()->SetTitle("y flash data");
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
   
   Double_t Graph1_fx5[1] = {
   217.003};
   Double_t Graph1_fy5[1] = {
   -105.0014};
   graph = new TGraph(1,Graph1_fx5,Graph1_fy5);
   graph->SetName("Graph1");
   graph->SetTitle("Graph");
   graph->SetFillColor(1);

   ci = TColor::GetColor("#00ff00");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(20);
   
   TH1F *Graph_Graph5 = new TH1F("Graph_Graph5","Graph",100,216.903,218.103);
   Graph_Graph5->SetMinimum(-120);
   Graph_Graph5->SetMaximum(120);
   Graph_Graph5->SetDirectory(0);
   Graph_Graph5->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph5->SetLineColor(ci);
   Graph_Graph5->GetXaxis()->SetLabelFont(42);
   Graph_Graph5->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph5->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph5->GetXaxis()->SetTitleFont(42);
   Graph_Graph5->GetYaxis()->SetLabelFont(42);
   Graph_Graph5->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph5->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph5->GetYaxis()->SetTitleFont(42);
   Graph_Graph5->GetZaxis()->SetLabelFont(42);
   Graph_Graph5->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph5->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph5->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph5);
   
   graph->Draw("p");
   
   Double_t Graph2_fx6[1] = {
   217.0507};
   Double_t Graph2_fy6[1] = {
   -116.6078};
   graph = new TGraph(1,Graph2_fx6,Graph2_fy6);
   graph->SetName("Graph2");
   graph->SetTitle("Graph");
   graph->SetFillColor(1);

   ci = TColor::GetColor("#ff0000");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(20);
   
   TH1F *Graph_Graph6 = new TH1F("Graph_Graph6","Graph",100,216.9507,218.1507);
   Graph_Graph6->SetMinimum(-120);
   Graph_Graph6->SetMaximum(120);
   Graph_Graph6->SetDirectory(0);
   Graph_Graph6->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph6->SetLineColor(ci);
   Graph_Graph6->GetXaxis()->SetLabelFont(42);
   Graph_Graph6->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph6->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph6->GetXaxis()->SetTitleFont(42);
   Graph_Graph6->GetYaxis()->SetLabelFont(42);
   Graph_Graph6->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph6->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph6->GetYaxis()->SetTitleFont(42);
   Graph_Graph6->GetZaxis()->SetLabelFont(42);
   Graph_Graph6->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph6->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph6->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph6);
   
   graph->Draw("p");
   
   TPaveText *pt = new TPaveText(0.3328094,0.94,0.6671906,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *AText = pt->AddText("Event number: 1");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
