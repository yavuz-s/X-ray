
void otuz() {
   //Draw a graph with error bars
   // To see the output of this macro, click begin_html <a href="gif/gerrors.gif">here</a>. end_html
   //Author: Rene Brun

   TCanvas *c1 = new TCanvas("c1","A Simple Graph with error bars",200,10,700,500);

   c1->SetFillColor(42);
   c1->SetGrid();
   c1->GetFrame()->SetFillColor(21);
   c1->GetFrame()->SetBorderSize(12);

   const Int_t n = 8;
   Float_t x[n]  = {4.8,4.9,5,5.1,5.2,5.3,5.4,5.5};
   Float_t y[n]  = {49,58,68,75,84,94,111,110};
   Float_t ex[n] = {0.1,0.1,0.1,0.1,0.1,0.1,0.1,0.1};
   Float_t ey[n] = {7,7.615773106,8.246211251,8.660254038,9.16515139,9.695359715,10.53565375,10.48808848};
   TGraphErrors *gr = new TGraphErrors(n,x,y,ex,ey);
   gStyle->SetOptFit(1111);
   gr->SetTitle("TGraphErrors Example");
   gr->SetMarkerColor(4);
   gr->SetMarkerStyle(21);
   gr->Draw("ALP");

   c1->Update();
}
