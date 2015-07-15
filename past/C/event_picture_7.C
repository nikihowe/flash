void event_picture_7()
{
//=========Macro generated from canvas: c/
//=========  (Wed Jul 15 10:03:12 2015) by ROOT version6.04/00
   TCanvas *c = new TCanvas("c", "",0,45,600,500);
   c->SetHighLightColor(2);
   c->Range(-107.8653,-150,1066.543,150);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx22[40] = {
   566.309,
   351.5491,
   394.5619,
   487.507,
   868.2786,
   774.5091,
   272.2725,
   173.7435,
   392.1686,
   550.5883,
   713.4793,
   351.0765,
   545.5025,
   410.7346,
   287.6395,
   337.8322,
   838.6457,
   646.25,
   490.3385,
   336.9373,
   198.7383,
   205.0473,
   255.6425,
   638.6323,
   456.247,
   252.1496,
   419.8765,
   752.9088,
   791.797,
   870.8085,
   205.0344,
   684.1482,
   187.923,
   671.7992,
   731.1754,
   87.8695,
   547.7911,
   280.0641,
   309.8043,
   511.6056};
   Double_t Graph0_fy22[40] = {
   -29.00025,
   -14.5826,
   12.73015,
   26.35256,
   -15.23096,
   -27.8238,
   -15.28058,
   -0.303,
   -28.29563,
   41.699,
   -26.69277,
   -14.60457,
   -56.28083,
   55.21044,
   -56.261,
   -0.431,
   -56.46412,
   -0.29,
   -24.41968,
   24.64144,
   54.99238,
   1.559,
   26.2353,
   -0.7146154,
   -7.558062,
   -24.49706,
   -0.495,
   -29.0031,
   38.99245,
   -14.3385,
   -0.5440833,
   23.71538,
   -0.9845,
   -29.48833,
   -56.34727,
   -56.615,
   0.6070377,
   -15.26712,
   -56.41402,
   -4.024038};
   TGraph *graph = new TGraph(40,Graph0_fx22,Graph0_fy22);
   graph->SetName("Graph0");
   graph->SetTitle("Event number: 7");
   graph->SetFillColor(1);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(20);
   
   TH1F *Graph_Graph22 = new TH1F("Graph_Graph22","Event number: 7",100,9.5756,949.1024);
   Graph_Graph22->SetMinimum(-120);
   Graph_Graph22->SetMaximum(120);
   Graph_Graph22->SetDirectory(0);
   Graph_Graph22->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph22->SetLineColor(ci);
   Graph_Graph22->GetXaxis()->SetTitle("z flash data");
   Graph_Graph22->GetXaxis()->SetLabelFont(42);
   Graph_Graph22->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph22->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph22->GetXaxis()->SetTitleFont(42);
   Graph_Graph22->GetYaxis()->SetTitle("y flash data");
   Graph_Graph22->GetYaxis()->SetLabelFont(42);
   Graph_Graph22->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph22->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph22->GetYaxis()->SetTitleFont(42);
   Graph_Graph22->GetZaxis()->SetLabelFont(42);
   Graph_Graph22->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph22->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph22->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph22);
   
   graph->Draw("ap");
   
   Double_t Graph1_fx23[1] = {
   203.6197};
   Double_t Graph1_fy23[1] = {
   -111.5895};
   graph = new TGraph(1,Graph1_fx23,Graph1_fy23);
   graph->SetName("Graph1");
   graph->SetTitle("Graph");
   graph->SetFillColor(1);

   ci = TColor::GetColor("#00ff00");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(20);
   
   TH1F *Graph_Graph23 = new TH1F("Graph_Graph23","Graph",100,203.5197,204.7197);
   Graph_Graph23->SetMinimum(-120);
   Graph_Graph23->SetMaximum(120);
   Graph_Graph23->SetDirectory(0);
   Graph_Graph23->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph23->SetLineColor(ci);
   Graph_Graph23->GetXaxis()->SetLabelFont(42);
   Graph_Graph23->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph23->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph23->GetXaxis()->SetTitleFont(42);
   Graph_Graph23->GetYaxis()->SetLabelFont(42);
   Graph_Graph23->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph23->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph23->GetYaxis()->SetTitleFont(42);
   Graph_Graph23->GetZaxis()->SetLabelFont(42);
   Graph_Graph23->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph23->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph23->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph23);
   
   graph->Draw("p");
   
   Double_t Graph2_fx24[1] = {
   309.9524};
   Double_t Graph2_fy24[1] = {
   -116.3448};
   graph = new TGraph(1,Graph2_fx24,Graph2_fy24);
   graph->SetName("Graph2");
   graph->SetTitle("Graph");
   graph->SetFillColor(1);

   ci = TColor::GetColor("#ff0000");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(20);
   
   TH1F *Graph_Graph24 = new TH1F("Graph_Graph24","Graph",100,309.8524,311.0524);
   Graph_Graph24->SetMinimum(-120);
   Graph_Graph24->SetMaximum(120);
   Graph_Graph24->SetDirectory(0);
   Graph_Graph24->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph24->SetLineColor(ci);
   Graph_Graph24->GetXaxis()->SetLabelFont(42);
   Graph_Graph24->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph24->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph24->GetXaxis()->SetTitleFont(42);
   Graph_Graph24->GetYaxis()->SetLabelFont(42);
   Graph_Graph24->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph24->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph24->GetYaxis()->SetTitleFont(42);
   Graph_Graph24->GetZaxis()->SetLabelFont(42);
   Graph_Graph24->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph24->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph24->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph24);
   
   graph->Draw("p");
   
   TPaveText *pt = new TPaveText(0.3328094,0.94,0.6671906,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *AText = pt->AddText("Event number: 7");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
