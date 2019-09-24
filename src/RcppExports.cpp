// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppEigen.h>
#include <Rcpp.h>

using namespace Rcpp;

// crossprodCpp
SEXP crossprodCpp(SEXP A, SEXP B);
RcppExport SEXP _netgsacpp_crossprodCpp(SEXP ASEXP, SEXP BSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type A(ASEXP);
    Rcpp::traits::input_parameter< SEXP >::type B(BSEXP);
    rcpp_result_gen = Rcpp::wrap(crossprodCpp(A, B));
    return rcpp_result_gen;
END_RCPP
}
// matMult
SEXP matMult(SEXP A, SEXP B);
RcppExport SEXP _netgsacpp_matMult(SEXP ASEXP, SEXP BSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type A(ASEXP);
    Rcpp::traits::input_parameter< SEXP >::type B(BSEXP);
    rcpp_result_gen = Rcpp::wrap(matMult(A, B));
    return rcpp_result_gen;
END_RCPP
}
// solveCpp
SEXP solveCpp(SEXP A, SEXP B);
RcppExport SEXP _netgsacpp_solveCpp(SEXP ASEXP, SEXP BSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type A(ASEXP);
    Rcpp::traits::input_parameter< SEXP >::type B(BSEXP);
    rcpp_result_gen = Rcpp::wrap(solveCpp(A, B));
    return rcpp_result_gen;
END_RCPP
}
// cholCpp
SEXP cholCpp(SEXP A);
RcppExport SEXP _netgsacpp_cholCpp(SEXP ASEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type A(ASEXP);
    rcpp_result_gen = Rcpp::wrap(cholCpp(A));
    return rcpp_result_gen;
END_RCPP
}
// pseudoinverseCpp
SEXP pseudoinverseCpp(SEXP A);
RcppExport SEXP _netgsacpp_pseudoinverseCpp(SEXP ASEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type A(ASEXP);
    rcpp_result_gen = Rcpp::wrap(pseudoinverseCpp(A));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_netgsacpp_crossprodCpp", (DL_FUNC) &_netgsacpp_crossprodCpp, 2},
    {"_netgsacpp_matMult", (DL_FUNC) &_netgsacpp_matMult, 2},
    {"_netgsacpp_solveCpp", (DL_FUNC) &_netgsacpp_solveCpp, 2},
    {"_netgsacpp_cholCpp", (DL_FUNC) &_netgsacpp_cholCpp, 1},
    {"_netgsacpp_pseudoinverseCpp", (DL_FUNC) &_netgsacpp_pseudoinverseCpp, 1},
    {NULL, NULL, 0}
};

RcppExport void R_init_netgsacpp(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
