#include <fmt/core.h>
#include <fmt/ostream.h>
R__LOAD_LIBRARY(libfmt.so)

#include "nlohmann/json.hpp"
#include <cmath>
#include <iostream>

#include "ROOT/RDataFrame.hxx"
#include "ROOT/RVec.hxx"

#include "Math/Vector3D.h"
#include "Math/Vector4D.h"
#include "Math/VectorUtil.h"
#include "TCanvas.h"
#include "TLatex.h"
#include "TStyle.h"
#include "TSystem.h"
R__LOAD_LIBRARY(libMathMore.so)
R__LOAD_LIBRARY(libGenVector.so)

#ifdef __cpp_lib_filesystem
#include <filesystem>
namespace fs = std::filesystem;
#else
#include <experimental/filesystem>
namespace fs = std::experimental::filesystem;
#endif


#include "TObject.h"

#include "ROOT/RDataFrame.hxx"
#include "ROOT/RVec.hxx"
#include "TCanvas.h"
#include "TH1.h"
#include "TMath.h"
#include "TF1.h"
#include "TLine.h"
#include "TGraphErrors.h"
#include "TMultiGraph.h"

#include <iostream>
#include <fstream>
#include <vector>
#include <string>

int readroot_d(){
 std::string rootfile = std::string("Cal_gain.root");
 ROOT::RDataFrame d0("T",rootfile);
 auto d = d0;
 //.Define("pos_0", "pos_0" );
 //auto h = d.Histo1D({"","",100,0,100},"pos_0");
 auto g = d.Graph("momentum","arr_7_7");
  auto *c = new TCanvas;
 g->DrawCopy();
  return 0;
}
