void event_picture_0()
{
//=========Macro generated from canvas: c/
//=========  (Wed Jul 15 12:45:22 2015) by ROOT version6.04/00
   TCanvas *c = new TCanvas("c", "",277,106,600,502);
   c->SetHighLightColor(2);
   c->Range(-123.9199,-150,1115.279,150);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1[32] = {
   805.2599,
   748.175,
   735.0401,
   834.7908,
   368.6389,
   563.3719,
   751.8945,
   884.0102,
   838.8805,
   334.398,
   773.2366,
   907.3764,
   875.1086,
   651.6768,
   453.0955,
   665.4473,
   67.54613,
   788.4365,
   426.3977,
   407.8073,
   849.7465,
   681.775,
   503.8656,
   496.214,
   500.1779,
   401.9639,
   427.6484,
   613.782,
   323.5444,
   332.6247,
   338.6923,
   542.456};
   Double_t Graph0_fy1[32] = {
   29.17641,
   27.6365,
   -9.988435,
   55.7276,
   26.93704,
   -27.85194,
   -0.3295,
   40.05944,
   -56.29759,
   -56.204,
   -29.426,
   -10.48222,
   14.36766,
   -12.77389,
   -0.875,
   40.88445,
   -41.37641,
   -28.565,
   -56.44625,
   -42.6914,
   0.7484681,
   13.4505,
   -2.723741,
   26.95807,
   -1.374961,
   -43.38026,
   55.42948,
   42.09218,
   -56.20395,
   25.86296,
   -1.615286,
   27.547};
   TGraph *graph = new TGraph(32,Graph0_fx1,Graph0_fy1);
   graph->SetName("Graph0");
   graph->SetTitle("Event 0");
   graph->SetFillColor(1);
   graph->SetMarkerColor(4);
   graph->SetMarkerStyle(20);
   
   TH1F *Graph_Graph_Graph11 = new TH1F("Graph_Graph_Graph11","Event 0",100,0,991.3595);
   Graph_Graph_Graph11->SetMinimum(-120);
   Graph_Graph_Graph11->SetMaximum(120);
   Graph_Graph_Graph11->SetDirectory(0);
   Graph_Graph_Graph11->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph_Graph11->SetLineColor(ci);
   Graph_Graph_Graph11->GetXaxis()->SetTitle("Z [cm]");
   Graph_Graph_Graph11->GetXaxis()->SetLabelFont(22);
   Graph_Graph_Graph11->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph_Graph11->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph_Graph11->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph_Graph11->GetXaxis()->SetTitleFont(22);
   Graph_Graph_Graph11->GetYaxis()->SetTitle("Y [cm]");
   Graph_Graph_Graph11->GetYaxis()->SetLabelFont(22);
   Graph_Graph_Graph11->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph_Graph11->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph_Graph11->GetYaxis()->SetTitleOffset(0.96);
   Graph_Graph_Graph11->GetYaxis()->SetTitleFont(22);
   Graph_Graph_Graph11->GetZaxis()->SetLabelFont(42);
   Graph_Graph_Graph11->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_Graph11->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_Graph11->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph_Graph11);
   
   graph->Draw("ap");
   
   Double_t Graph1_fx2[1] = {
   904.8542};
   Double_t Graph1_fy2[1] = {
   31.89681};
   graph = new TGraph(1,Graph1_fx2,Graph1_fy2);
   graph->SetName("Graph1");
   graph->SetTitle("Graph");
   graph->SetFillColor(1);
   graph->SetMarkerColor(3);
   graph->SetMarkerStyle(20);
   
   TH1F *Graph_Graph_Graph22 = new TH1F("Graph_Graph_Graph22","Graph",100,904.7542,905.9542);
   Graph_Graph_Graph22->SetMinimum(-120);
   Graph_Graph_Graph22->SetMaximum(120);
   Graph_Graph_Graph22->SetDirectory(0);
   Graph_Graph_Graph22->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_Graph22->SetLineColor(ci);
   Graph_Graph_Graph22->GetXaxis()->SetLabelFont(42);
   Graph_Graph_Graph22->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_Graph22->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_Graph22->GetXaxis()->SetTitleFont(42);
   Graph_Graph_Graph22->GetYaxis()->SetLabelFont(42);
   Graph_Graph_Graph22->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_Graph22->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_Graph22->GetYaxis()->SetTitleFont(42);
   Graph_Graph_Graph22->GetZaxis()->SetLabelFont(42);
   Graph_Graph_Graph22->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_Graph22->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_Graph22->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph_Graph22);
   
   graph->Draw("p");
   
   Double_t Graph2_fx3[1] = {
   933.4657};
   Double_t Graph2_fy3[1] = {
   -117.8781};
   graph = new TGraph(1,Graph2_fx3,Graph2_fy3);
   graph->SetName("Graph2");
   graph->SetTitle("Graph");
   graph->SetFillColor(1);
   graph->SetMarkerColor(2);
   graph->SetMarkerStyle(20);
   
   TH1F *Graph_Graph_Graph33 = new TH1F("Graph_Graph_Graph33","Graph",100,933.3657,934.5657);
   Graph_Graph_Graph33->SetMinimum(-120);
   Graph_Graph_Graph33->SetMaximum(120);
   Graph_Graph_Graph33->SetDirectory(0);
   Graph_Graph_Graph33->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_Graph33->SetLineColor(ci);
   Graph_Graph_Graph33->GetXaxis()->SetLabelFont(42);
   Graph_Graph_Graph33->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_Graph33->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_Graph33->GetXaxis()->SetTitleFont(42);
   Graph_Graph_Graph33->GetYaxis()->SetLabelFont(42);
   Graph_Graph_Graph33->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_Graph33->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_Graph33->GetYaxis()->SetTitleFont(42);
   Graph_Graph_Graph33->GetZaxis()->SetLabelFont(42);
   Graph_Graph_Graph33->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_Graph33->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_Graph33->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph_Graph33);
   
   graph->Draw("p");
   
   TPaveText *pt = new TPaveText(0.4189298,0.94,0.5810702,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(22);
   pt->SetTextSize(0.06315789);
   TText *AText = pt->AddText("Event 0");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
