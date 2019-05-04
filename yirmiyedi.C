
void yirmiyedi() {
   //Draw a graph with error bars
   // To see the output of this macro, click begin_html <a href="gif/gerrors.gif">here</a>. end_html
   //Author: Rene Brun

   TCanvas *c1 = new TCanvas("c1","A Simple Graph with error bars",200,10,700,500);

   c1->SetFillColor(42);
   c1->SetGrid();
   c1->GetFrame()->SetFillColor(21);
   c1->GetFrame()->SetBorderSize(12);

   const Int_t n = 16;
   Float_t x[n]  = {5,5.1,5.2,5.3,5.4,5.5,5.6,5.7,5.8,5.9,6,6.1,6.2,6.3,6.4,6.5};
   Float_t y[n]  = {24,29,32,36,38,44,56,55,67,58,73,76,83,101,107,109};
   Float_t ex[n] = {0.1,0.1,0.1,0.1,0.1,0.1,0.1,0.1,0.1,0.1,0.1,0.1,0.1,0.1,0.1,0.1};
   Float_t ey[n] = {4.898979486,5.385164807,5.656854249,6,6.164414003,6.633249581,7.483314774,7.416198487,8.185352772,7.615773106,8.544003745,8.717797887,9.110433579,10.04987562,10.34408043,10.44030651};
   TGraphErrors *gr = new TGraphErrors(n,x,y,ex,ey);
   gStyle->SetOptFit(1111);
   gr->SetTitle("TGraphErrors Example");
   gr->SetMarkerColor(4);
   gr->SetMarkerStyle(21);
   gr->Draw("ALP");

   c1->Update();
}
