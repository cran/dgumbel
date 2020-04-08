// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppEigen.h>
#include <Rcpp.h>

using namespace Rcpp;

// dgumbel
Rcpp::NumericVector dgumbel(Rcpp::NumericVector x, double location, double scale, bool log_dens);
RcppExport SEXP _dgumbel_dgumbel(SEXP xSEXP, SEXP locationSEXP, SEXP scaleSEXP, SEXP log_densSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< double >::type location(locationSEXP);
    Rcpp::traits::input_parameter< double >::type scale(scaleSEXP);
    Rcpp::traits::input_parameter< bool >::type log_dens(log_densSEXP);
    rcpp_result_gen = Rcpp::wrap(dgumbel(x, location, scale, log_dens));
    return rcpp_result_gen;
END_RCPP
}
// ddgumbel
Rcpp::NumericVector ddgumbel(Rcpp::NumericVector x, double location, double scale, bool log_dens);
RcppExport SEXP _dgumbel_ddgumbel(SEXP xSEXP, SEXP locationSEXP, SEXP scaleSEXP, SEXP log_densSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< double >::type location(locationSEXP);
    Rcpp::traits::input_parameter< double >::type scale(scaleSEXP);
    Rcpp::traits::input_parameter< bool >::type log_dens(log_densSEXP);
    rcpp_result_gen = Rcpp::wrap(ddgumbel(x, location, scale, log_dens));
    return rcpp_result_gen;
END_RCPP
}
// pgumbel
Rcpp::NumericVector pgumbel(Rcpp::NumericVector q, double location, double scale, bool lower_tail, bool log_p);
RcppExport SEXP _dgumbel_pgumbel(SEXP qSEXP, SEXP locationSEXP, SEXP scaleSEXP, SEXP lower_tailSEXP, SEXP log_pSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type q(qSEXP);
    Rcpp::traits::input_parameter< double >::type location(locationSEXP);
    Rcpp::traits::input_parameter< double >::type scale(scaleSEXP);
    Rcpp::traits::input_parameter< bool >::type lower_tail(lower_tailSEXP);
    Rcpp::traits::input_parameter< bool >::type log_p(log_pSEXP);
    rcpp_result_gen = Rcpp::wrap(pgumbel(q, location, scale, lower_tail, log_p));
    return rcpp_result_gen;
END_RCPP
}
// dpgumbel
Rcpp::NumericMatrix dpgumbel(Rcpp::NumericVector q, double location, double scale, bool lower_tail, bool log_p);
RcppExport SEXP _dgumbel_dpgumbel(SEXP qSEXP, SEXP locationSEXP, SEXP scaleSEXP, SEXP lower_tailSEXP, SEXP log_pSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type q(qSEXP);
    Rcpp::traits::input_parameter< double >::type location(locationSEXP);
    Rcpp::traits::input_parameter< double >::type scale(scaleSEXP);
    Rcpp::traits::input_parameter< bool >::type lower_tail(lower_tailSEXP);
    Rcpp::traits::input_parameter< bool >::type log_p(log_pSEXP);
    rcpp_result_gen = Rcpp::wrap(dpgumbel(q, location, scale, lower_tail, log_p));
    return rcpp_result_gen;
END_RCPP
}
// qgumbel
Rcpp::NumericVector qgumbel(Rcpp::NumericVector p, double location, double scale, bool lower_tail);
RcppExport SEXP _dgumbel_qgumbel(SEXP pSEXP, SEXP locationSEXP, SEXP scaleSEXP, SEXP lower_tailSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type p(pSEXP);
    Rcpp::traits::input_parameter< double >::type location(locationSEXP);
    Rcpp::traits::input_parameter< double >::type scale(scaleSEXP);
    Rcpp::traits::input_parameter< bool >::type lower_tail(lower_tailSEXP);
    rcpp_result_gen = Rcpp::wrap(qgumbel(p, location, scale, lower_tail));
    return rcpp_result_gen;
END_RCPP
}
// dqgumbel
Rcpp::NumericMatrix dqgumbel(Rcpp::NumericVector p, double location, double scale, bool lower_tail);
RcppExport SEXP _dgumbel_dqgumbel(SEXP pSEXP, SEXP locationSEXP, SEXP scaleSEXP, SEXP lower_tailSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type p(pSEXP);
    Rcpp::traits::input_parameter< double >::type location(locationSEXP);
    Rcpp::traits::input_parameter< double >::type scale(scaleSEXP);
    Rcpp::traits::input_parameter< bool >::type lower_tail(lower_tailSEXP);
    rcpp_result_gen = Rcpp::wrap(dqgumbel(p, location, scale, lower_tail));
    return rcpp_result_gen;
END_RCPP
}
// rgumbel
Rcpp::NumericVector rgumbel(int n, double location, double scale);
RcppExport SEXP _dgumbel_rgumbel(SEXP nSEXP, SEXP locationSEXP, SEXP scaleSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< int >::type n(nSEXP);
    Rcpp::traits::input_parameter< double >::type location(locationSEXP);
    Rcpp::traits::input_parameter< double >::type scale(scaleSEXP);
    rcpp_result_gen = Rcpp::wrap(rgumbel(n, location, scale));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_dgumbel_dgumbel", (DL_FUNC) &_dgumbel_dgumbel, 4},
    {"_dgumbel_ddgumbel", (DL_FUNC) &_dgumbel_ddgumbel, 4},
    {"_dgumbel_pgumbel", (DL_FUNC) &_dgumbel_pgumbel, 5},
    {"_dgumbel_dpgumbel", (DL_FUNC) &_dgumbel_dpgumbel, 5},
    {"_dgumbel_qgumbel", (DL_FUNC) &_dgumbel_qgumbel, 4},
    {"_dgumbel_dqgumbel", (DL_FUNC) &_dgumbel_dqgumbel, 4},
    {"_dgumbel_rgumbel", (DL_FUNC) &_dgumbel_rgumbel, 3},
    {NULL, NULL, 0}
};

RcppExport void R_init_dgumbel(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
