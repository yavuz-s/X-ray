
void onsekiz() {
   //Draw a graph with error bars
   // To see the output of this macro, click begin_html <a href="gif/gerrors.gif">here</a>. end_html
   //Author: Rene Brun

   TCanvas *c1 = new TCanvas("c1","A Simple Graph with error bars",200,10,700,500);

   c1->SetFillColor(42);
   c1->SetGrid();
   c1->GetFrame()->SetFillColor(21);
   c1->GetFrame()->SetBorderSize(12);

   const Int_t n = 23;
   Float_t x[n]  = {7,7.1,7.2,7.3,7.4,7.5,7.6,7.7,7.8,7.9,8,8.1,8.2,8.3,8.4,8.5,8.6,8.7,8.8,8.9,9,9.1,9.2};
   Float_t y[n]  = {3,4,4,9,11,12,14,25,23,31,31,32,36,40,32,46,41,41,40,43,50,47,48
};
   Float_t ex[n] = {0.1,0.1,0.1,0.1,0.1,0.1,0.1,0.1,0.1,0.1,0.1,0.1,0.1,0.1,0.1,0.1,0.1,0.1,0.1,0.1,0.1,0.1,0.1};
   Float_t ey[n] = {1.732050808,2,2,3,3.31662479,3.464101615,3.741657387,5,4.795831523,5.567764363,5.567764363,5.656854249,6,6.32455532,5.656854249,6.782329983,6.403124237,6.403124237,6.32455532,6.557438524,7.071067812,6.8556546,6.92820323
};
   TGraphErrors *gr = new TGraphErrors(n,x,y,ex,ey);
   gStyle->SetOptFit(1111);
   gr->SetTitle("TGraphErrors Example");
   gr->SetMarkerColor(4);
   gr->SetMarkerStyle(21);
   gr->Draw("ALP");

   c1->Update();
}
