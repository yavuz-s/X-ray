
void yirmidort() {
   //Draw a graph with error bars
   // To see the output of this macro, click begin_html <a href="gif/gerrors.gif">here</a>. end_html
   //Author: Rene Brun

   TCanvas *c1 = new TCanvas("c1","A Simple Graph with error bars",200,10,700,500);

   c1->SetFillColor(42);
   c1->SetGrid();
   c1->GetFrame()->SetFillColor(21);
   c1->GetFrame()->SetBorderSize(12);

   const Int_t n = 19;
   Float_t x[n]  = {5.4,5.5,5.6,5.7,5.8,5.9,6,6.1,6.2,6.3,6.4,6.5,6.6,6.7,6.8,6.9,7,7.1,7.2};
   Float_t y[n]  = {9,16,20,22,20,28,30,34,39,47,59,55,64,64,71,86,82,100,104};
   Float_t ex[n] = {0.1,0.1,0.1,0.1,0.1,0.1,0.1,0.1,0.1,0.1,0.1,0.1,0.1,0.1,0.1,0.1,0.1,0.1,0.1};
   Float_t ey[n] = {3,4,4.472135955,4.69041576,4.472135955,5.291502622,5.477225575,5.830951895,6.244997998,6.8556546,7.681145748,7.416198487,8,8,8.426149773,9.273618495,9.055385138,10,10.19803903};
   TGraphErrors *gr = new TGraphErrors(n,x,y,ex,ey);
   gStyle->SetOptFit(1111);
   gr->SetTitle("TGraphErrors Example");
   gr->SetMarkerColor(4);
   gr->SetMarkerStyle(21);
   gr->Draw("ALP");

   c1->Update();
}
