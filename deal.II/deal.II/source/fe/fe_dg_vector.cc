//---------------------------------------------------------------------------
//    $Id$
//
//    Copyright (C) 2010 by the deal.II authors
//
//    This file is subject to QPL and may not be  distributed
//    without copyright and license information. Please refer
//    to the file deal.II/doc/license.html for the  text  and
//    further information on this license.
//
//---------------------------------------------------------------------------

#include <fe/fe_dg_vector.templates.h>
#include <base/polynomials_abf.h>
#include <base/polynomials_bdm.h>
#include <base/polynomials_nedelec.h>
#include <base/polynomials_raviart_thomas.h>

DEAL_II_NAMESPACE_OPEN

template class FE_DGVector<PolynomialsABF<deal_II_dimension>, deal_II_dimension>;
template class FE_DGVector<PolynomialsBDM<deal_II_dimension>, deal_II_dimension>;
template class FE_DGVector<PolynomialsNedelec<deal_II_dimension>, deal_II_dimension>;
template class FE_DGVector<PolynomialsRaviartThomas<deal_II_dimension>, deal_II_dimension>;

DEAL_II_NAMESPACE_CLOSE

