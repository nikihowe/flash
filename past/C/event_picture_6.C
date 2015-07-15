void event_picture_6()
{
//=========Macro generated from canvas: c/
//=========  (Wed Jul 15 10:03:12 2015) by ROOT version6.04/00
   TCanvas *c = new TCanvas("c", "",0,45,600,500);
   c->SetHighLightColor(2);
   c->Range(-123.6949,-150,1188.446,150);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx19[31] = {
   164.942,
   318.193,
   745.4095,
   728.5643,
   911.4297,
   468.5647,
   834.7802,
   493.2187,
   515.796,
   328.3405,
   160.8351,
   364.6624,
   287.9765,
   521.6441,
   951.8629,
   567.4713,
   935.4121,
   415.9212,
   229.617,
   564.4394,
   911.5025,
   542.2586,
   969.7558,
   832.9762,
   350.0411,
   94.99525,
   613.9248,
   520.415,
   554.4949,
   705.643,
   491.8254};
   Double_t Graph0_fy19[31] = {
   -28.722,
   13.441,
   -27.88233,
   -56.35523,
   9.10075,
   -7.496478,
   -56.29695,
   -29.05442,
   -56.34935,
   -57.022,
   -13.29982,
   -27.18865,
   54.646,
   55.79789,
   2.968447,
   28.14646,
   15.21306,
   0.4803137,
   -27.75409,
   -26.5218,
   -0.2435,
   -0.7774815,
   -16.74771,
   55.72536,
   -30.5538,
   43.23668,
   55.24643,
   -28.6005,
   0.6751053,
   -0.2505,
   -56.465};
   TGraph *graph = new TGraph(31,Graph0_fx19,Graph0_fy19);
   graph->SetName("Graph0");
   graph->SetTitle("Event number: 6");
   graph->SetFillColor(1);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(20);
   
   TH1F *Graph_Graph19 = new TH1F("Graph_Graph19","Event number: 6",100,7.519194,1057.232);
   Graph_Graph19->SetMinimum(-120);
   Graph_Graph19->SetMaximum(120);
   Graph_Graph19->SetDirectory(0);
   Graph_Graph19->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph19->SetLineColor(ci);
   Graph_Graph19->GetXaxis()->SetTitle("z flash data");
   Graph_Graph19->GetXaxis()->SetLabelFont(42);
   Graph_Graph19->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph19->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph19->GetXaxis()->SetTitleFont(42);
   Graph_Graph19->GetYaxis()->SetTitle("y flash data");
   Graph_Graph19->GetYaxis()->SetLabelFont(42);
   Graph_Graph19->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph19->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph19->GetYaxis()->SetTitleFont(42);
   Graph_Graph19->GetZaxis()->SetLabelFont(42);
   Graph_Graph19->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph19->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph19->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph19);
   
   graph->Draw("ap");
   
   Double_t Graph1_fx20[1] = {
   228.8381};
   Double_t Graph1_fy20[1] = {
   -34.35712};
   graph = new TGraph(1,Graph1_fx20,Graph1_fy20);
   graph->SetName("Graph1");
   graph->SetTitle("Graph");
   graph->SetFillColor(1);

   ci = TColor::GetColor("#00ff00");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(20);
   
   TH1F *Graph_Graph20 = new TH1F("Graph_Graph20","Graph",100,228.7381,229.9381);
   Graph_Graph20->SetMinimum(-120);
   Graph_Graph20->SetMaximum(120);
   Graph_Graph20->SetDirectory(0);
   Graph_Graph20->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph20->SetLineColor(ci);
   Graph_Graph20->GetXaxis()->SetLabelFont(42);
   Graph_Graph20->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph20->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph20->GetXaxis()->SetTitleFont(42);
   Graph_Graph20->GetYaxis()->SetLabelFont(42);
   Graph_Graph20->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph20->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph20->GetYaxis()->SetTitleFont(42);
   Graph_Graph20->GetZaxis()->SetLabelFont(42);
   Graph_Graph20->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph20->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph20->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph20);
   
   graph->Draw("p");
   
   Double_t Graph2_fx21[1] = {
   93.09053};
   Double_t Graph2_fy21[1] = {
   -34.45252};
   graph = new TGraph(1,Graph2_fx21,Graph2_fy21);
   graph->SetName("Graph2");
   graph->SetTitle("Graph");
   graph->SetFillColor(1);

   ci = TColor::GetColor("#ff0000");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(20);
   
   TH1F *Graph_Graph21 = new TH1F("Graph_Graph21","Graph",100,92.99053,94.19053);
   Graph_Graph21->SetMinimum(-120);
   Graph_Graph21->SetMaximum(120);
   Graph_Graph21->SetDirectory(0);
   Graph_Graph21->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph21->SetLineColor(ci);
   Graph_Graph21->GetXaxis()->SetLabelFont(42);
   Graph_Graph21->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph21->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph21->GetXaxis()->SetTitleFont(42);
   Graph_Graph21->GetYaxis()->SetLabelFont(42);
   Graph_Graph21->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph21->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph21->GetYaxis()->SetTitleFont(42);
   Graph_Graph21->GetZaxis()->SetLabelFont(42);
   Graph_Graph21->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph21->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph21->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph21);
   
   graph->Draw("p");
   
   TPaveText *pt = new TPaveText(0.3328094,0.94,0.6671906,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *AText = pt->AddText("Event number: 6");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
