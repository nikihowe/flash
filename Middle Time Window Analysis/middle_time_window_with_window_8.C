void middle_time_window_with_window_8()
{
//=========Macro generated from canvas: c/
//=========  (Thu Jul  2 16:28:28 2015) by ROOT version6.04/00
   TCanvas *c = new TCanvas("c", "",0,45,600,500);
   c->SetHighLightColor(2);
   c->Range(-150,-15.62344,150,253.1109);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   TH1D *hist__4 = new TH1D("hist__4","Centered time window with window size 8 and cut at 5",100,-120,120);
   hist__4->SetBinContent(0,492);
   hist__4->SetBinContent(1,21);
   hist__4->SetBinContent(2,23);
   hist__4->SetBinContent(3,22);
   hist__4->SetBinContent(4,27);
   hist__4->SetBinContent(5,40);
   hist__4->SetBinContent(6,27);
   hist__4->SetBinContent(7,34);
   hist__4->SetBinContent(8,33);
   hist__4->SetBinContent(9,41);
   hist__4->SetBinContent(10,32);
   hist__4->SetBinContent(11,51);
   hist__4->SetBinContent(12,45);
   hist__4->SetBinContent(13,53);
   hist__4->SetBinContent(14,63);
   hist__4->SetBinContent(15,64);
   hist__4->SetBinContent(16,53);
   hist__4->SetBinContent(17,54);
   hist__4->SetBinContent(18,43);
   hist__4->SetBinContent(19,58);
   hist__4->SetBinContent(20,67);
   hist__4->SetBinContent(21,63);
   hist__4->SetBinContent(22,72);
   hist__4->SetBinContent(23,54);
   hist__4->SetBinContent(24,70);
   hist__4->SetBinContent(25,74);
   hist__4->SetBinContent(26,73);
   hist__4->SetBinContent(27,77);
   hist__4->SetBinContent(28,90);
   hist__4->SetBinContent(29,83);
   hist__4->SetBinContent(30,98);
   hist__4->SetBinContent(31,106);
   hist__4->SetBinContent(32,111);
   hist__4->SetBinContent(33,100);
   hist__4->SetBinContent(34,114);
   hist__4->SetBinContent(35,117);
   hist__4->SetBinContent(36,118);
   hist__4->SetBinContent(37,125);
   hist__4->SetBinContent(38,126);
   hist__4->SetBinContent(39,159);
   hist__4->SetBinContent(40,149);
   hist__4->SetBinContent(41,181);
   hist__4->SetBinContent(42,183);
   hist__4->SetBinContent(43,161);
   hist__4->SetBinContent(44,189);
   hist__4->SetBinContent(45,141);
   hist__4->SetBinContent(46,174);
   hist__4->SetBinContent(47,196);
   hist__4->SetBinContent(48,197);
   hist__4->SetBinContent(49,203);
   hist__4->SetBinContent(50,216);
   hist__4->SetBinContent(51,187);
   hist__4->SetBinContent(52,188);
   hist__4->SetBinContent(53,199);
   hist__4->SetBinContent(54,180);
   hist__4->SetBinContent(55,201);
   hist__4->SetBinContent(56,199);
   hist__4->SetBinContent(57,180);
   hist__4->SetBinContent(58,178);
   hist__4->SetBinContent(59,157);
   hist__4->SetBinContent(60,157);
   hist__4->SetBinContent(61,138);
   hist__4->SetBinContent(62,128);
   hist__4->SetBinContent(63,153);
   hist__4->SetBinContent(64,111);
   hist__4->SetBinContent(65,128);
   hist__4->SetBinContent(66,124);
   hist__4->SetBinContent(67,108);
   hist__4->SetBinContent(68,103);
   hist__4->SetBinContent(69,104);
   hist__4->SetBinContent(70,99);
   hist__4->SetBinContent(71,101);
   hist__4->SetBinContent(72,87);
   hist__4->SetBinContent(73,83);
   hist__4->SetBinContent(74,84);
   hist__4->SetBinContent(75,83);
   hist__4->SetBinContent(76,68);
   hist__4->SetBinContent(77,77);
   hist__4->SetBinContent(78,68);
   hist__4->SetBinContent(79,64);
   hist__4->SetBinContent(80,60);
   hist__4->SetBinContent(81,54);
   hist__4->SetBinContent(82,70);
   hist__4->SetBinContent(83,57);
   hist__4->SetBinContent(84,60);
   hist__4->SetBinContent(85,54);
   hist__4->SetBinContent(86,45);
   hist__4->SetBinContent(87,46);
   hist__4->SetBinContent(88,59);
   hist__4->SetBinContent(89,43);
   hist__4->SetBinContent(90,40);
   hist__4->SetBinContent(91,37);
   hist__4->SetBinContent(92,38);
   hist__4->SetBinContent(93,41);
   hist__4->SetBinContent(94,37);
   hist__4->SetBinContent(95,25);
   hist__4->SetBinContent(96,39);
   hist__4->SetBinContent(97,32);
   hist__4->SetBinContent(98,28);
   hist__4->SetBinContent(99,25);
   hist__4->SetBinContent(100,26);
   hist__4->SetBinContent(101,421);
   hist__4->SetEntries(10237);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *AText = ptstats->AddText("hist");
   AText->SetTextSize(0.0368);
   AText = ptstats->AddText("Entries = 10237  ");
   AText = ptstats->AddText("Mean  = 0.1255");
   AText = ptstats->AddText("Std Dev   =  50.68");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   hist__4->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(hist__4);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   hist__4->SetLineColor(ci);
   hist__4->GetXaxis()->SetTitle("mc_start_z - highest-npe flash_z per window");
   hist__4->GetXaxis()->SetLabelFont(42);
   hist__4->GetXaxis()->SetLabelSize(0.035);
   hist__4->GetXaxis()->SetTitleSize(0.035);
   hist__4->GetXaxis()->SetTitleFont(42);
   hist__4->GetYaxis()->SetLabelFont(42);
   hist__4->GetYaxis()->SetLabelSize(0.035);
   hist__4->GetYaxis()->SetTitleSize(0.035);
   hist__4->GetYaxis()->SetTitleFont(42);
   hist__4->GetZaxis()->SetLabelFont(42);
   hist__4->GetZaxis()->SetLabelSize(0.035);
   hist__4->GetZaxis()->SetTitleSize(0.035);
   hist__4->GetZaxis()->SetTitleFont(42);
   hist__4->Draw("");
   
   TPaveText *pt = new TPaveText(0.15,0.94,0.85,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   AText = pt->AddText("Centered time window with window size 8 and cut at 5");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
