
void onbes() {
   //Draw a graph with error bars
   // To see the output of this macro, click begin_html <a href="gif/gerrors.gif">here</a>. end_html
   //Author: Rene Brun

   TCanvas *c1 = new TCanvas("c1","A Simple Graph with error bars",200,10,700,500);

   c1->SetFillColor(42);
   c1->SetGrid();
   c1->GetFrame()->SetFillColor(21);
   c1->GetFrame()->SetBorderSize(12);

   const Int_t n = 9;
   Float_t x[n]  = {8.5,8.6,8.7,8.8,8.9,9.0,9.1,9.2,9.3};
   Float_t y[n]  = {2,3,7,6,6,11,14,16,16};
   Float_t ex[n] = {0.1,0.1,0.1,0.1,0.1,0.1,0.1,0.1,0.1};
   Float_t ey[n] = {1.414213562,1.732050808,2.645751311,2.449489743,2.449489743,3.31662479,3.741657387,4,4};
   TGraphErrors *gr = new TGraphErrors(n,x,y,ex,ey);
   gStyle->SetOptFit(1111);
   gr->SetTitle("TGraphErrors Example");
   gr->SetMarkerColor(4);
   gr->SetMarkerStyle(21);
   gr->Draw("ALP");

   c1->Update();
}
