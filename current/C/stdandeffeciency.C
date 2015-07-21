void stdandeffeciency()
{
//=========Macro generated from canvas: c/
//=========  (Wed Jul 15 16:45:00 2015) by ROOT version6.04/00
   TCanvas *c = new TCanvas("c", "",0,45,600,500);
   c->SetHighLightColor(2);
   c->Range(-13.6875,42.5,123.1875,117.5);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t _fx1[20] = {
   5,
   10,
   15,
   20,
   25,
   30,
   35,
   40,
   45,
   50,
   55,
   60,
   65,
   70,
   75,
   80,
   85,
   90,
   95,
   100};
   Double_t _fy1[20] = {
   99.31993,
   98.35984,
   97.36974,
   96.18962,
   95.11951,
   93.91939,
   92.66927,
   91.42914,
   90.009,
   88.63886,
   87.09871,
   85.88859,
   84.53845,
   83.31833,
   81.9682,
   80.71807,
   79.73797,
   78.59786,
   77.57776,
   76.37764};
   TGraph *graph = new TGraph(20,_fx1,_fy1);
   graph->SetName("");
   graph->SetTitle("Width of histogram and Efficiency wrt cut value; Cut Value [#PE]; STD (blue),  Efficiency (red)");
   graph->SetFillColor(1);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ff0000");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(20);
   
   TH1F *Graph_Graph1 = new TH1F("Graph_Graph1","Width of histogram and Efficiency wrt cut value",100,0,109.5);
   Graph_Graph1->SetMinimum(50);
   Graph_Graph1->SetMaximum(110);
   Graph_Graph1->SetDirectory(0);
   Graph_Graph1->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1->SetLineColor(ci);
   Graph_Graph1->GetXaxis()->SetTitle(" Cut Value [#PE]");
   Graph_Graph1->GetXaxis()->SetLabelFont(42);
   Graph_Graph1->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph1->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph1->GetXaxis()->SetTitleFont(42);
   Graph_Graph1->GetYaxis()->SetTitle(" STD (blue),  Efficiency (red)");
   Graph_Graph1->GetYaxis()->SetLabelFont(42);
   Graph_Graph1->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph1->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph1->GetYaxis()->SetTitleFont(42);
   Graph_Graph1->GetZaxis()->SetLabelFont(42);
   Graph_Graph1->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph1);
   
   graph->Draw("ap");
   
   Double_t _fx2[20] = {
   5,
   10,
   15,
   20,
   25,
   30,
   35,
   40,
   45,
   50,
   55,
   60,
   65,
   70,
   75,
   80,
   85,
   90,
   95,
   100};
   Double_t _fy2[20] = {
   61.07759,
   60.74877,
   60.54278,
   60.18873,
   59.90046,
   59.66052,
   59.46211,
   59.33448,
   59.21597,
   59.01884,
   59.1009,
   59.03297,
   59.00736,
   59.06697,
   59.29605,
   59.21464,
   59.21863,
   59.24578,
   59.28129,
   59.59935};
   graph = new TGraph(20,_fx2,_fy2);
   graph->SetName("");
   graph->SetTitle("");
   graph->SetFillColor(1);

   ci = TColor::GetColor("#0000ff");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(20);
   
   TH1F *Graph_Graph2 = new TH1F("Graph_Graph2","",100,0,109.5);
   Graph_Graph2->SetMinimum(58.80033);
   Graph_Graph2->SetMaximum(61.28461);
   Graph_Graph2->SetDirectory(0);
   Graph_Graph2->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph2->SetLineColor(ci);
   Graph_Graph2->GetXaxis()->SetLabelFont(42);
   Graph_Graph2->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph2->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph2->GetXaxis()->SetTitleFont(42);
   Graph_Graph2->GetYaxis()->SetLabelFont(42);
   Graph_Graph2->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph2->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph2->GetYaxis()->SetTitleFont(42);
   Graph_Graph2->GetZaxis()->SetLabelFont(42);
   Graph_Graph2->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph2->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph2->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph2);
   
   graph->Draw("p");
   
   TPaveText *pt = new TPaveText(0.15,0.9368947,0.85,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *AText = pt->AddText("Width of histogram and Efficiency wrt cut value");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
