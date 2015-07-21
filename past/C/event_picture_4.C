void event_picture_4()
{
//=========Macro generated from canvas: c/
//=========  (Wed Jul 15 12:43:36 2015) by ROOT version6.04/00
   TCanvas *c = new TCanvas("c", "",0,45,600,500);
   c->SetHighLightColor(2);
   c->Range(-132.7018,-150,1194.316,150);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx13[53] = {
   520.5315,
   427.3358,
   356.732,
   330.9361,
   151.049,
   144.7569,
   491.6379,
   338.2333,
   674.7427,
   607.774,
   435.5175,
   559.033,
   624.1915,
   275.3475,
   563.5419,
   911.0655,
   775.6031,
   311.926,
   228.196,
   110.9461,
   592.4704,
   70.22086,
   385.8033,
   567.0732,
   483.3251,
   971.4874,
   738.4944,
   853.8331,
   951.8615,
   582.8518,
   951.191,
   521.6051,
   542.3776,
   538.1553,
   334.3249,
   427.7574,
   308.6774,
   666.0889,
   386.1342,
   735.0754,
   327.4872,
   559.0743,
   749.9778,
   279.6761,
   496.7042,
   414.128,
   718.717,
   570.8681,
   623.9995,
   484.1322,
   548.3215,
   429.2354,
   460.0189};
   Double_t Graph0_fy13[53] = {
   55.7965,
   39.85206,
   -28.376,
   -27.27559,
   27.473,
   13.5676,
   26.18713,
   -1.491218,
   -56.73978,
   -1.418294,
   26.87579,
   41.428,
   55.81123,
   -42.4495,
   27.08384,
   55.822,
   12.70088,
   4.464348,
   -0.755,
   -14.70623,
   0.07680316,
   -16.27292,
   21.72307,
   -13.50734,
   26.24563,
   -42.29608,
   1.814308,
   55.46594,
   55.313,
   28.03094,
   41.42659,
   55.79784,
   -15.90973,
   0.5959423,
   -31.10414,
   5.742362,
   1.270704,
   -28.85989,
   26.48488,
   -56.42232,
   -56.26729,
   -56.28187,
   -43.36603,
   -0.5163529,
   -24.80563,
   -56.233,
   -2.345865,
   24.99837,
   -0.3046981,
   55.50945,
   -42.33439,
   16.89254,
   55.449};
   TGraph *graph = new TGraph(53,Graph0_fx13,Graph0_fy13);
   graph->SetName("Graph0");
   graph->SetTitle("Event 4");
   graph->SetFillColor(1);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(20);
   
   TH1F *Graph_Graph13 = new TH1F("Graph_Graph13","Event 4",100,0,1061.614);
   Graph_Graph13->SetMinimum(-120);
   Graph_Graph13->SetMaximum(120);
   Graph_Graph13->SetDirectory(0);
   Graph_Graph13->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph13->SetLineColor(ci);
   Graph_Graph13->GetXaxis()->SetTitle("Z [cm]");
   Graph_Graph13->GetXaxis()->SetLabelFont(42);
   Graph_Graph13->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph13->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph13->GetXaxis()->SetTitleFont(42);
   Graph_Graph13->GetYaxis()->SetTitle("Y [cm]");
   Graph_Graph13->GetYaxis()->SetLabelFont(42);
   Graph_Graph13->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph13->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph13->GetYaxis()->SetTitleFont(42);
   Graph_Graph13->GetZaxis()->SetLabelFont(42);
   Graph_Graph13->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph13->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph13->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph13);
   
   graph->Draw("ap");
   
   Double_t Graph1_fx14[1] = {
   658.8509};
   Double_t Graph1_fy14[1] = {
   -93.68142};
   graph = new TGraph(1,Graph1_fx14,Graph1_fy14);
   graph->SetName("Graph1");
   graph->SetTitle("Graph");
   graph->SetFillColor(1);

   ci = TColor::GetColor("#00ff00");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(20);
   
   TH1F *Graph_Graph14 = new TH1F("Graph_Graph14","Graph",100,658.7509,659.9509);
   Graph_Graph14->SetMinimum(-120);
   Graph_Graph14->SetMaximum(120);
   Graph_Graph14->SetDirectory(0);
   Graph_Graph14->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph14->SetLineColor(ci);
   Graph_Graph14->GetXaxis()->SetLabelFont(42);
   Graph_Graph14->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph14->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph14->GetXaxis()->SetTitleFont(42);
   Graph_Graph14->GetYaxis()->SetLabelFont(42);
   Graph_Graph14->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph14->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph14->GetYaxis()->SetTitleFont(42);
   Graph_Graph14->GetZaxis()->SetLabelFont(42);
   Graph_Graph14->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph14->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph14->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph14);
   
   graph->Draw("p");
   
   Double_t Graph2_fx15[1] = {
   632.9887};
   Double_t Graph2_fy15[1] = {
   -116.5575};
   graph = new TGraph(1,Graph2_fx15,Graph2_fy15);
   graph->SetName("Graph2");
   graph->SetTitle("Graph");
   graph->SetFillColor(1);

   ci = TColor::GetColor("#ff0000");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(20);
   
   TH1F *Graph_Graph15 = new TH1F("Graph_Graph15","Graph",100,632.8887,634.0887);
   Graph_Graph15->SetMinimum(-120);
   Graph_Graph15->SetMaximum(120);
   Graph_Graph15->SetDirectory(0);
   Graph_Graph15->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph15->SetLineColor(ci);
   Graph_Graph15->GetXaxis()->SetLabelFont(42);
   Graph_Graph15->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph15->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph15->GetXaxis()->SetTitleFont(42);
   Graph_Graph15->GetYaxis()->SetLabelFont(42);
   Graph_Graph15->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph15->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph15->GetYaxis()->SetTitleFont(42);
   Graph_Graph15->GetZaxis()->SetLabelFont(42);
   Graph_Graph15->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph15->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph15->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph15);
   
   graph->Draw("p");
   
   TPaveText *pt = new TPaveText(0.4189298,0.94,0.5810702,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *AText = pt->AddText("Event 4");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
