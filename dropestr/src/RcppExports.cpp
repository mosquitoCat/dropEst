// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include "../inst/include/dropestr.h"
#include <RcppEigen.h>
#include <Rcpp.h>

using namespace Rcpp;

// GetCrossmergedMask
std::vector<bool> GetCrossmergedMask(const s_vec_t& base_umis, const s_vec_t& target_umis);
RcppExport SEXP _dropestr_GetCrossmergedMask(SEXP base_umisSEXP, SEXP target_umisSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const s_vec_t& >::type base_umis(base_umisSEXP);
    Rcpp::traits::input_parameter< const s_vec_t& >::type target_umis(target_umisSEXP);
    rcpp_result_gen = Rcpp::wrap(GetCrossmergedMask(base_umis, target_umis));
    return rcpp_result_gen;
END_RCPP
}
// SubsetAdjacentUmis
List SubsetAdjacentUmis(const s_vec_t& umis);
RcppExport SEXP _dropestr_SubsetAdjacentUmis(SEXP umisSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const s_vec_t& >::type umis(umisSEXP);
    rcpp_result_gen = Rcpp::wrap(SubsetAdjacentUmis(umis));
    return rcpp_result_gen;
END_RCPP
}
// FillAdjacentUmisData
List FillAdjacentUmisData(const NumericVector& umi_probabilites, bool adjacent_only, bool show_progress);
RcppExport SEXP _dropestr_FillAdjacentUmisData(SEXP umi_probabilitesSEXP, SEXP adjacent_onlySEXP, SEXP show_progressSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const NumericVector& >::type umi_probabilites(umi_probabilitesSEXP);
    Rcpp::traits::input_parameter< bool >::type adjacent_only(adjacent_onlySEXP);
    Rcpp::traits::input_parameter< bool >::type show_progress(show_progressSEXP);
    rcpp_result_gen = Rcpp::wrap(FillAdjacentUmisData(umi_probabilites, adjacent_only, show_progress));
    return rcpp_result_gen;
END_RCPP
}
// GetAdjacentUmisNum
List GetAdjacentUmisNum(const IntegerVector& reads_per_umi_from, const IntegerVector& reads_per_umi_to, const List& neighbourhood, bool total, bool larger, bool smaller);
RcppExport SEXP _dropestr_GetAdjacentUmisNum(SEXP reads_per_umi_fromSEXP, SEXP reads_per_umi_toSEXP, SEXP neighbourhoodSEXP, SEXP totalSEXP, SEXP largerSEXP, SEXP smallerSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const IntegerVector& >::type reads_per_umi_from(reads_per_umi_fromSEXP);
    Rcpp::traits::input_parameter< const IntegerVector& >::type reads_per_umi_to(reads_per_umi_toSEXP);
    Rcpp::traits::input_parameter< const List& >::type neighbourhood(neighbourhoodSEXP);
    Rcpp::traits::input_parameter< bool >::type total(totalSEXP);
    Rcpp::traits::input_parameter< bool >::type larger(largerSEXP);
    Rcpp::traits::input_parameter< bool >::type smaller(smallerSEXP);
    rcpp_result_gen = Rcpp::wrap(GetAdjacentUmisNum(reads_per_umi_from, reads_per_umi_to, neighbourhood, total, larger, smaller));
    return rcpp_result_gen;
END_RCPP
}
// FillDpMatrix
NumericMatrix FillDpMatrix(double prior_prob, int neighbours_num, int max_umi_per_cell);
RcppExport SEXP _dropestr_FillDpMatrix(SEXP prior_probSEXP, SEXP neighbours_numSEXP, SEXP max_umi_per_cellSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< double >::type prior_prob(prior_probSEXP);
    Rcpp::traits::input_parameter< int >::type neighbours_num(neighbours_numSEXP);
    Rcpp::traits::input_parameter< int >::type max_umi_per_cell(max_umi_per_cellSEXP);
    rcpp_result_gen = Rcpp::wrap(FillDpMatrix(prior_prob, neighbours_num, max_umi_per_cell));
    return rcpp_result_gen;
END_RCPP
}
// GetSmallerNeighboursDistributionsBySizes
NumericMatrix GetSmallerNeighboursDistributionsBySizes(const List& dp_matrices, const IntegerVector& larger_neighbours_num, const s_vec_t& neighbour_prob_inds, int size_adj, int max_neighbour_num, const IntegerVector& smaller_neighbours_num);
RcppExport SEXP _dropestr_GetSmallerNeighboursDistributionsBySizes(SEXP dp_matricesSEXP, SEXP larger_neighbours_numSEXP, SEXP neighbour_prob_indsSEXP, SEXP size_adjSEXP, SEXP max_neighbour_numSEXP, SEXP smaller_neighbours_numSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const List& >::type dp_matrices(dp_matricesSEXP);
    Rcpp::traits::input_parameter< const IntegerVector& >::type larger_neighbours_num(larger_neighbours_numSEXP);
    Rcpp::traits::input_parameter< const s_vec_t& >::type neighbour_prob_inds(neighbour_prob_indsSEXP);
    Rcpp::traits::input_parameter< int >::type size_adj(size_adjSEXP);
    Rcpp::traits::input_parameter< int >::type max_neighbour_num(max_neighbour_numSEXP);
    Rcpp::traits::input_parameter< const IntegerVector& >::type smaller_neighbours_num(smaller_neighbours_numSEXP);
    rcpp_result_gen = Rcpp::wrap(GetSmallerNeighboursDistributionsBySizes(dp_matrices, larger_neighbours_num, neighbour_prob_inds, size_adj, max_neighbour_num, smaller_neighbours_num));
    return rcpp_result_gen;
END_RCPP
}
// GetSmallerNeighbourProbabilities
NumericVector GetSmallerNeighbourProbabilities(const NumericMatrix& small_neighs_dist, const IntegerVector& neighb_per_umi);
RcppExport SEXP _dropestr_GetSmallerNeighbourProbabilities(SEXP small_neighs_distSEXP, SEXP neighb_per_umiSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const NumericMatrix& >::type small_neighs_dist(small_neighs_distSEXP);
    Rcpp::traits::input_parameter< const IntegerVector& >::type neighb_per_umi(neighb_per_umiSEXP);
    rcpp_result_gen = Rcpp::wrap(GetSmallerNeighbourProbabilities(small_neighs_dist, neighb_per_umi));
    return rcpp_result_gen;
END_RCPP
}
// FilterUmisInGeneSimple
IntegerVector FilterUmisInGeneSimple(const IntegerVector& reads_per_umi, const std::vector<s_vec_t>& neighbourhood, double mult);
RcppExport SEXP _dropestr_FilterUmisInGeneSimple(SEXP reads_per_umiSEXP, SEXP neighbourhoodSEXP, SEXP multSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const IntegerVector& >::type reads_per_umi(reads_per_umiSEXP);
    Rcpp::traits::input_parameter< const std::vector<s_vec_t>& >::type neighbourhood(neighbourhoodSEXP);
    Rcpp::traits::input_parameter< double >::type mult(multSEXP);
    rcpp_result_gen = Rcpp::wrap(FilterUmisInGeneSimple(reads_per_umi, neighbourhood, mult));
    return rcpp_result_gen;
END_RCPP
}
// Quantize
IntegerVector Quantize(const NumericVector& values, const NumericVector& quant_borders);
RcppExport SEXP _dropestr_Quantize(SEXP valuesSEXP, SEXP quant_bordersSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const NumericVector& >::type values(valuesSEXP);
    Rcpp::traits::input_parameter< const NumericVector& >::type quant_borders(quant_bordersSEXP);
    rcpp_result_gen = Rcpp::wrap(Quantize(values, quant_borders));
    return rcpp_result_gen;
END_RCPP
}
// PredictLeftPart
NumericVector PredictLeftPart(const List& classifier, const DataFrame& predict_data, int gene_size);
RcppExport SEXP _dropestr_PredictLeftPart(SEXP classifierSEXP, SEXP predict_dataSEXP, SEXP gene_sizeSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const List& >::type classifier(classifierSEXP);
    Rcpp::traits::input_parameter< const DataFrame& >::type predict_data(predict_dataSEXP);
    Rcpp::traits::input_parameter< int >::type gene_size(gene_sizeSEXP);
    rcpp_result_gen = Rcpp::wrap(PredictLeftPart(classifier, predict_data, gene_size));
    return rcpp_result_gen;
END_RCPP
}
// ArrangePredictions
std::vector<int> ArrangePredictions(const std::vector<int>& target_umi_factors, const std::vector<double>& probs);
RcppExport SEXP _dropestr_ArrangePredictions(SEXP target_umi_factorsSEXP, SEXP probsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const std::vector<int>& >::type target_umi_factors(target_umi_factorsSEXP);
    Rcpp::traits::input_parameter< const std::vector<double>& >::type probs(probsSEXP);
    rcpp_result_gen = Rcpp::wrap(ArrangePredictions(target_umi_factors, probs));
    return rcpp_result_gen;
END_RCPP
}
// FilterPredictions
std::vector<bool> FilterPredictions(const s_vec_t& not_filtered_umis, const s_vec_t& base_umis, const s_vec_t& target_umis);
RcppExport SEXP _dropestr_FilterPredictions(SEXP not_filtered_umisSEXP, SEXP base_umisSEXP, SEXP target_umisSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const s_vec_t& >::type not_filtered_umis(not_filtered_umisSEXP);
    Rcpp::traits::input_parameter< const s_vec_t& >::type base_umis(base_umisSEXP);
    Rcpp::traits::input_parameter< const s_vec_t& >::type target_umis(target_umisSEXP);
    rcpp_result_gen = Rcpp::wrap(FilterPredictions(not_filtered_umis, base_umis, target_umis));
    return rcpp_result_gen;
END_RCPP
}
// PrepareClassifierData
DataFrame PrepareClassifierData(const List& reads_per_umi, const List& neighborhood, const NumericVector& umi_probabilities);
RcppExport SEXP _dropestr_PrepareClassifierData(SEXP reads_per_umiSEXP, SEXP neighborhoodSEXP, SEXP umi_probabilitiesSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const List& >::type reads_per_umi(reads_per_umiSEXP);
    Rcpp::traits::input_parameter< const List& >::type neighborhood(neighborhoodSEXP);
    Rcpp::traits::input_parameter< const NumericVector& >::type umi_probabilities(umi_probabilitiesSEXP);
    rcpp_result_gen = Rcpp::wrap(PrepareClassifierData(reads_per_umi, neighborhood, umi_probabilities));
    return rcpp_result_gen;
END_RCPP
}
// PrepareClassifierTrainingData
DataFrame PrepareClassifierTrainingData(const List& reads_per_umi_pairs);
RcppExport SEXP _dropestr_PrepareClassifierTrainingData(SEXP reads_per_umi_pairsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const List& >::type reads_per_umi_pairs(reads_per_umi_pairsSEXP);
    rcpp_result_gen = Rcpp::wrap(PrepareClassifierTrainingData(reads_per_umi_pairs));
    return rcpp_result_gen;
END_RCPP
}
// GetTrimCollisionsNum
List GetTrimCollisionsNum(const List& rpu_per_cell, int trim_length);
RcppExport SEXP _dropestr_GetTrimCollisionsNum(SEXP rpu_per_cellSEXP, SEXP trim_lengthSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const List& >::type rpu_per_cell(rpu_per_cellSEXP);
    Rcpp::traits::input_parameter< int >::type trim_length(trim_lengthSEXP);
    rcpp_result_gen = Rcpp::wrap(GetTrimCollisionsNum(rpu_per_cell, trim_length));
    return rcpp_result_gen;
END_RCPP
}
// GetBootstrapUmisMeanNum
double GetBootstrapUmisMeanNum(const std::vector<double>& umi_probabilities, size_t size, unsigned repeats_num, int seed);
RcppExport SEXP _dropestr_GetBootstrapUmisMeanNum(SEXP umi_probabilitiesSEXP, SEXP sizeSEXP, SEXP repeats_numSEXP, SEXP seedSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const std::vector<double>& >::type umi_probabilities(umi_probabilitiesSEXP);
    Rcpp::traits::input_parameter< size_t >::type size(sizeSEXP);
    Rcpp::traits::input_parameter< unsigned >::type repeats_num(repeats_numSEXP);
    Rcpp::traits::input_parameter< int >::type seed(seedSEXP);
    rcpp_result_gen = Rcpp::wrap(GetBootstrapUmisMeanNum(umi_probabilities, size, repeats_num, seed));
    return rcpp_result_gen;
END_RCPP
}
// AdjustGeneExpressionClassic
int AdjustGeneExpressionClassic(int value, int umis_number);
RcppExport SEXP _dropestr_AdjustGeneExpressionClassic(SEXP valueSEXP, SEXP umis_numberSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< int >::type value(valueSEXP);
    Rcpp::traits::input_parameter< int >::type umis_number(umis_numberSEXP);
    rcpp_result_gen = Rcpp::wrap(AdjustGeneExpressionClassic(value, umis_number));
    return rcpp_result_gen;
END_RCPP
}
// AdjustGeneExpression
int AdjustGeneExpression(int value, const std::vector<int>& observed_sizes, const std::vector<double>& adjusted_sizes);
RcppExport SEXP _dropestr_AdjustGeneExpression(SEXP valueSEXP, SEXP observed_sizesSEXP, SEXP adjusted_sizesSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< int >::type value(valueSEXP);
    Rcpp::traits::input_parameter< const std::vector<int>& >::type observed_sizes(observed_sizesSEXP);
    Rcpp::traits::input_parameter< const std::vector<double>& >::type adjusted_sizes(adjusted_sizesSEXP);
    rcpp_result_gen = Rcpp::wrap(AdjustGeneExpression(value, observed_sizes, adjusted_sizes));
    return rcpp_result_gen;
END_RCPP
}
// ValueCountsC
si_map_t ValueCountsC(const s_vec_t& values);
RcppExport SEXP _dropestr_ValueCountsC(SEXP valuesSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const s_vec_t& >::type values(valuesSEXP);
    rcpp_result_gen = Rcpp::wrap(ValueCountsC(values));
    return rcpp_result_gen;
END_RCPP
}
// ValueCounts
std::unordered_map<int, int> ValueCounts(const std::vector<int>& values);
RcppExport SEXP _dropestr_ValueCounts(SEXP valuesSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const std::vector<int>& >::type values(valuesSEXP);
    rcpp_result_gen = Rcpp::wrap(ValueCounts(values));
    return rcpp_result_gen;
END_RCPP
}
// BuildCountMatrix
SEXP BuildCountMatrix(const List& reads_per_umi_per_cell);
RcppExport SEXP _dropestr_BuildCountMatrix(SEXP reads_per_umi_per_cellSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const List& >::type reads_per_umi_per_cell(reads_per_umi_per_cellSEXP);
    rcpp_result_gen = Rcpp::wrap(BuildCountMatrix(reads_per_umi_per_cell));
    return rcpp_result_gen;
END_RCPP
}
// ParseUmisPerGene
List ParseUmisPerGene(const List& reads_per_umigs, int umi_length);
RcppExport SEXP _dropestr_ParseUmisPerGene(SEXP reads_per_umigsSEXP, SEXP umi_lengthSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const List& >::type reads_per_umigs(reads_per_umigsSEXP);
    Rcpp::traits::input_parameter< int >::type umi_length(umi_lengthSEXP);
    rcpp_result_gen = Rcpp::wrap(ParseUmisPerGene(reads_per_umigs, umi_length));
    return rcpp_result_gen;
END_RCPP
}
// TrimUmis
List TrimUmis(const List& rpu_per_cell, int trim_length);
RcppExport SEXP _dropestr_TrimUmis(SEXP rpu_per_cellSEXP, SEXP trim_lengthSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const List& >::type rpu_per_cell(rpu_per_cellSEXP);
    Rcpp::traits::input_parameter< int >::type trim_length(trim_lengthSEXP);
    rcpp_result_gen = Rcpp::wrap(TrimUmis(rpu_per_cell, trim_length));
    return rcpp_result_gen;
END_RCPP
}
// AddIndexesToRpU
List AddIndexesToRpU(const List& reads_per_umi_per_cb, const std::vector<std::string>& umis);
RcppExport SEXP _dropestr_AddIndexesToRpU(SEXP reads_per_umi_per_cbSEXP, SEXP umisSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const List& >::type reads_per_umi_per_cb(reads_per_umi_per_cbSEXP);
    Rcpp::traits::input_parameter< const std::vector<std::string>& >::type umis(umisSEXP);
    rcpp_result_gen = Rcpp::wrap(AddIndexesToRpU(reads_per_umi_per_cb, umis));
    return rcpp_result_gen;
END_RCPP
}
// GetUmisDistribution
si_map_t GetUmisDistribution(List umis_per_gene_per_cell, int smooth);
RcppExport SEXP _dropestr_GetUmisDistribution(SEXP umis_per_gene_per_cellSEXP, SEXP smoothSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< List >::type umis_per_gene_per_cell(umis_per_gene_per_cellSEXP);
    Rcpp::traits::input_parameter< int >::type smooth(smoothSEXP);
    rcpp_result_gen = Rcpp::wrap(GetUmisDistribution(umis_per_gene_per_cell, smooth));
    return rcpp_result_gen;
END_RCPP
}
// GetUmisList
s_vec_t GetUmisList(unsigned umi_len);
RcppExport SEXP _dropestr_GetUmisList(SEXP umi_lenSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< unsigned >::type umi_len(umi_lenSEXP);
    rcpp_result_gen = Rcpp::wrap(GetUmisList(umi_len));
    return rcpp_result_gen;
END_RCPP
}
// ConcatLists
List ConcatLists(const List& lists);
RcppExport SEXP _dropestr_ConcatLists(SEXP listsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const List& >::type lists(listsSEXP);
    rcpp_result_gen = Rcpp::wrap(ConcatLists(lists));
    return rcpp_result_gen;
END_RCPP
}
// GetMirrorPairs
std::unordered_set<int> GetMirrorPairs(const StringVector& pairs, const NumericVector& probs, double tol);
RcppExport SEXP _dropestr_GetMirrorPairs(SEXP pairsSEXP, SEXP probsSEXP, SEXP tolSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const StringVector& >::type pairs(pairsSEXP);
    Rcpp::traits::input_parameter< const NumericVector& >::type probs(probsSEXP);
    Rcpp::traits::input_parameter< double >::type tol(tolSEXP);
    rcpp_result_gen = Rcpp::wrap(GetMirrorPairs(pairs, probs, tol));
    return rcpp_result_gen;
END_RCPP
}
// NumberOfNucleotidePairs
unsigned NumberOfNucleotidePairs();
RcppExport SEXP _dropestr_NumberOfNucleotidePairs() {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    rcpp_result_gen = Rcpp::wrap(NumberOfNucleotidePairs());
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_dropestr_GetCrossmergedMask", (DL_FUNC) &_dropestr_GetCrossmergedMask, 2},
    {"_dropestr_SubsetAdjacentUmis", (DL_FUNC) &_dropestr_SubsetAdjacentUmis, 1},
    {"_dropestr_FillAdjacentUmisData", (DL_FUNC) &_dropestr_FillAdjacentUmisData, 3},
    {"_dropestr_GetAdjacentUmisNum", (DL_FUNC) &_dropestr_GetAdjacentUmisNum, 6},
    {"_dropestr_FillDpMatrix", (DL_FUNC) &_dropestr_FillDpMatrix, 3},
    {"_dropestr_GetSmallerNeighboursDistributionsBySizes", (DL_FUNC) &_dropestr_GetSmallerNeighboursDistributionsBySizes, 6},
    {"_dropestr_GetSmallerNeighbourProbabilities", (DL_FUNC) &_dropestr_GetSmallerNeighbourProbabilities, 2},
    {"_dropestr_FilterUmisInGeneSimple", (DL_FUNC) &_dropestr_FilterUmisInGeneSimple, 3},
    {"_dropestr_Quantize", (DL_FUNC) &_dropestr_Quantize, 2},
    {"_dropestr_PredictLeftPart", (DL_FUNC) &_dropestr_PredictLeftPart, 3},
    {"_dropestr_ArrangePredictions", (DL_FUNC) &_dropestr_ArrangePredictions, 2},
    {"_dropestr_FilterPredictions", (DL_FUNC) &_dropestr_FilterPredictions, 3},
    {"_dropestr_PrepareClassifierData", (DL_FUNC) &_dropestr_PrepareClassifierData, 3},
    {"_dropestr_PrepareClassifierTrainingData", (DL_FUNC) &_dropestr_PrepareClassifierTrainingData, 1},
    {"_dropestr_GetTrimCollisionsNum", (DL_FUNC) &_dropestr_GetTrimCollisionsNum, 2},
    {"_dropestr_GetBootstrapUmisMeanNum", (DL_FUNC) &_dropestr_GetBootstrapUmisMeanNum, 4},
    {"_dropestr_AdjustGeneExpressionClassic", (DL_FUNC) &_dropestr_AdjustGeneExpressionClassic, 2},
    {"_dropestr_AdjustGeneExpression", (DL_FUNC) &_dropestr_AdjustGeneExpression, 3},
    {"_dropestr_ValueCountsC", (DL_FUNC) &_dropestr_ValueCountsC, 1},
    {"_dropestr_ValueCounts", (DL_FUNC) &_dropestr_ValueCounts, 1},
    {"_dropestr_BuildCountMatrix", (DL_FUNC) &_dropestr_BuildCountMatrix, 1},
    {"_dropestr_ParseUmisPerGene", (DL_FUNC) &_dropestr_ParseUmisPerGene, 2},
    {"_dropestr_TrimUmis", (DL_FUNC) &_dropestr_TrimUmis, 2},
    {"_dropestr_AddIndexesToRpU", (DL_FUNC) &_dropestr_AddIndexesToRpU, 2},
    {"_dropestr_GetUmisDistribution", (DL_FUNC) &_dropestr_GetUmisDistribution, 2},
    {"_dropestr_GetUmisList", (DL_FUNC) &_dropestr_GetUmisList, 1},
    {"_dropestr_ConcatLists", (DL_FUNC) &_dropestr_ConcatLists, 1},
    {"_dropestr_GetMirrorPairs", (DL_FUNC) &_dropestr_GetMirrorPairs, 3},
    {"_dropestr_NumberOfNucleotidePairs", (DL_FUNC) &_dropestr_NumberOfNucleotidePairs, 0},
    {NULL, NULL, 0}
};

RcppExport void R_init_dropestr(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
