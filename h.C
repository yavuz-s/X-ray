
void h() {
   //Draw a graph with error bars
   // To see the output of this macro, click begin_html <a href="gif/gerrors.gif">here</a>. end_html
   //Author: Rene Brun

   TCanvas *c1 = new TCanvas("c1","A Simple Graph with error bars",200,10,700,500);

   c1->SetFillColor(42);
   c1->SetGrid();
   c1->GetFrame()->SetFillColor(21);
   c1->GetFrame()->SetBorderSize(12);

   const Int_t n = 6;
   Float_t x[n]  = {3.737400000000000000,4.629100000000000000,5.261600000000000000,5.934000000000000000,6.764300000000000000,7.402300000000000000};
   Float_t y[n]  = {15000,18000,21000,24000,27000,30000};
   Float_t ex[n] = {0.58711675,0.138107457,0.182144096,0.119973172,0.138819307,0.284065813};
   Float_t ey[n] = {0,0,0,0,0,0};
   TGraphErrors *gr = new TGraphErrors(n,x,y,ex,ey);
   gStyle->SetOptFit(1111);
   gr->SetTitle("TGraphErrors Example");
   gr->SetMarkerColor(4);
   gr->SetMarkerStyle(21);
   gr->Draw("ALP");

   c1->Update();
}
