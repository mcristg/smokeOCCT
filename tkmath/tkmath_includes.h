#include <BSplCLib.hxx>
#include <BSplCLib_Cache.hxx>
#include <BSplCLib_CacheParams.hxx>
#include <BSplCLib_EvaluatorFunction.hxx>
#include <BSplSLib.hxx>
#include <BSplSLib_Cache.hxx>
#include <BSplSLib_EvaluatorFunction.hxx>
#include <BVH_BinaryTree.hxx>
#include <BVH_BinnedBuilder.hxx>
#include <BVH_Box.hxx>
#include <BVH_Builder.hxx>
#include <BVH_BuildQueue.hxx>
#include <BVH_BuildThread.hxx>
#include <BVH_Distance.hxx>
#include <BVH_DistanceField.hxx>
#include <BVH_Geometry.hxx>
#include <BVH_IndexedBoxSet.hxx>
#include <BVH_LinearBuilder.hxx>
#include <BVH_Object.hxx>
#include <BVH_ObjectSet.hxx>
#include <BVH_PairDistance.hxx>
#include <BVH_PrimitiveSet.hxx>
#include <BVH_Properties.hxx>
#include <BVH_QuadTree.hxx>
#include <BVH_QueueBuilder.hxx>
#include <BVH_QuickSorter.hxx>
#include <BVH_RadixSorter.hxx>
#include <BVH_Ray.hxx>
#include <BVH_Set.hxx>
#include <BVH_Sorter.hxx>
#include <BVH_SpatialMedianBuilder.hxx>
#include <BVH_SweepPlaneBuilder.hxx>
#include <BVH_Tools.hxx>
#include <BVH_Traverse.hxx>
#include <BVH_Tree.hxx>
#include <BVH_Triangulation.hxx>
#include <Bnd_B2d.hxx>
#include <Bnd_B2f.hxx>
#include <Bnd_B3d.hxx>
#include <Bnd_B3f.hxx>
#include <Bnd_BoundSortBox.hxx>
#include <Bnd_Box.hxx>
#include <Bnd_Box2d.hxx>
#include <Bnd_OBB.hxx>
#include <Bnd_Range.hxx>
#include <Bnd_Sphere.hxx>
#include <CSLib.hxx>
#include <CSLib_Class2d.hxx>
#include <CSLib_NormalPolyDef.hxx>
#include <Convert_CircleToBSplineCurve.hxx>
#include <Convert_CompBezierCurves2dToBSplineCurve2d.hxx>
#include <Convert_CompBezierCurvesToBSplineCurve.hxx>
#include <Convert_CompPolynomialToPoles.hxx>
#include <Convert_ConeToBSplineSurface.hxx>
#include <Convert_ConicToBSplineCurve.hxx>
#include <Convert_CylinderToBSplineSurface.hxx>
#include <Convert_ElementarySurfaceToBSplineSurface.hxx>
#include <Convert_EllipseToBSplineCurve.hxx>
#include <Convert_GridPolynomialToPoles.hxx>
#include <Convert_HyperbolaToBSplineCurve.hxx>
#include <Convert_ParabolaToBSplineCurve.hxx>
#include <Convert_SphereToBSplineSurface.hxx>
#include <Convert_TorusToBSplineSurface.hxx>
#include <ElCLib.hxx>
#include <ElSLib.hxx>
#include <Expr.hxx>
#include <Expr_Absolute.hxx>
#include <Expr_ArcCosine.hxx>
#include <Expr_ArcSine.hxx>
#include <Expr_ArcTangent.hxx>
#include <Expr_ArgCosh.hxx>
#include <Expr_ArgSinh.hxx>
#include <Expr_ArgTanh.hxx>
#include <Expr_BinaryExpression.hxx>
#include <Expr_BinaryFunction.hxx>
#include <Expr_Cosh.hxx>
#include <Expr_Cosine.hxx>
#include <Expr_Difference.hxx>
#include <Expr_Different.hxx>
#include <Expr_Division.hxx>
#include <Expr_Equal.hxx>
#include <Expr_Exponential.hxx>
#include <Expr_Exponentiate.hxx>
#include <Expr_FunctionDerivative.hxx>
#include <Expr_GeneralExpression.hxx>
#include <Expr_GeneralFunction.hxx>
#include <Expr_GeneralRelation.hxx>
#include <Expr_GreaterThan.hxx>
#include <Expr_GreaterThanOrEqual.hxx>
#include <Expr_LessThan.hxx>
#include <Expr_LessThanOrEqual.hxx>
#include <Expr_LogOf10.hxx>
#include <Expr_LogOfe.hxx>
#include <Expr_NamedConstant.hxx>
#include <Expr_NamedExpression.hxx>
#include <Expr_NamedFunction.hxx>
#include <Expr_NamedUnknown.hxx>
#include <Expr_NumericValue.hxx>
#include <Expr_PolyExpression.hxx>
#include <Expr_PolyFunction.hxx>
#include <Expr_Product.hxx>
#include <Expr_RelationIterator.hxx>
#include <Expr_RUIterator.hxx>
#include <Expr_Sign.hxx>
#include <Expr_Sine.hxx>
#include <Expr_SingleRelation.hxx>
#include <Expr_Sinh.hxx>
#include <Expr_Square.hxx>
#include <Expr_SquareRoot.hxx>
#include <Expr_Sum.hxx>
#include <Expr_SystemRelation.hxx>
#include <Expr_Tangent.hxx>
#include <Expr_Tanh.hxx>
#include <Expr_UnaryExpression.hxx>
#include <Expr_UnaryFunction.hxx>
#include <Expr_UnaryMinus.hxx>
#include <Expr_UnknownIterator.hxx>
#include <ExprIntrp.hxx>
#include <ExprIntrp_Analysis.hxx>
#include <ExprIntrp_Generator.hxx>
#include <ExprIntrp_GenExp.hxx>
#include <ExprIntrp_GenFct.hxx>
#include <ExprIntrp_GenRel.hxx>
#include <PLib.hxx>
#include <PLib_Base.hxx>
#include <PLib_DoubleJacobiPolynomial.hxx>
#include <PLib_HermitJacobi.hxx>
#include <PLib_JacobiPolynomial.hxx>
#include <Poly.hxx>
#include <Poly_ArrayOfNodes.hxx>
#include <Poly_ArrayOfUVNodes.hxx>
#include <Poly_CoherentLink.hxx>
#include <Poly_CoherentNode.hxx>
#include <Poly_CoherentTriangle.hxx>
#include <Poly_CoherentTriangulation.hxx>
#include <Poly_CoherentTriPtr.hxx>
#include <Poly_Connect.hxx>
#include <Poly_MakeLoops.hxx>
#include <Poly_MergeNodesTool.hxx>
#include <Poly_Polygon2D.hxx>
#include <Poly_Polygon3D.hxx>
#include <Poly_PolygonOnTriangulation.hxx>
#include <Poly_Triangle.hxx>
#include <Poly_Triangulation.hxx>
#include <Poly_TriangulationParameters.hxx>
#include <Precision.hxx>
#include <TopLoc_Datum3D.hxx>
#include <TopLoc_ItemLocation.hxx>
#include <TopLoc_Location.hxx>
#include <TopLoc_SListNodeOfItemLocation.hxx>
#include <TopLoc_SListOfItemLocation.hxx>
#include <gp.hxx>
#include <gp_Ax1.hxx>
#include <gp_Ax2.hxx>
#include <gp_Ax22d.hxx>
#include <gp_Ax2d.hxx>
#include <gp_Ax3.hxx>
#include <gp_Circ.hxx>
#include <gp_Circ2d.hxx>
#include <gp_Cone.hxx>
#include <gp_Cylinder.hxx>
#include <gp_Dir.hxx>
#include <gp_Dir2d.hxx>
#include <gp_Elips.hxx>
#include <gp_Elips2d.hxx>
#include <gp_GTrsf.hxx>
#include <gp_GTrsf2d.hxx>
#include <gp_Hypr.hxx>
#include <gp_Hypr2d.hxx>
#include <gp_Lin.hxx>
#include <gp_Lin2d.hxx>
#include <gp_Mat.hxx>
#include <gp_Mat2d.hxx>
#include <gp_Parab.hxx>
#include <gp_Parab2d.hxx>
#include <gp_Pln.hxx>
#include <gp_Pnt.hxx>
#include <gp_Pnt2d.hxx>
#include <gp_Quaternion.hxx>
#include <gp_QuaternionNLerp.hxx>
#include <gp_QuaternionSLerp.hxx>
#include <gp_Sphere.hxx>
#include <gp_Torus.hxx>
#include <gp_Trsf.hxx>
#include <gp_Trsf2d.hxx>
#include <gp_Vec.hxx>
#include <gp_Vec2d.hxx>
#include <gp_XY.hxx>
#include <gp_XYZ.hxx>
#include <math.hxx>
#include <math_BFGS.hxx>
#include <math_BracketedRoot.hxx>
#include <math_BracketMinimum.hxx>
#include <math_BrentMinimum.hxx>
#include <math_BullardGenerator.hxx>
#include <math_ComputeGaussPointsAndWeights.hxx>
#include <math_ComputeKronrodPointsAndWeights.hxx>
#include <math_Crout.hxx>
#include <math_DirectPolynomialRoots.hxx>
#include <math_DoubleTab.hxx>
#include <math_EigenValuesSearcher.hxx>
#include <math_FRPR.hxx>
#include <math_Function.hxx>
#include <math_FunctionAllRoots.hxx>
#include <math_FunctionRoot.hxx>
#include <math_FunctionRoots.hxx>
#include <math_FunctionSample.hxx>
#include <math_FunctionSet.hxx>
#include <math_FunctionSetRoot.hxx>
#include <math_FunctionSetWithDerivatives.hxx>
#include <math_FunctionWithDerivative.hxx>
#include <math_Gauss.hxx>
#include <math_GaussLeastSquare.hxx>
#include <math_GaussMultipleIntegration.hxx>
#include <math_GaussSetIntegration.hxx>
#include <math_GaussSingleIntegration.hxx>
#include <math_GlobOptMin.hxx>
#include <math_Householder.hxx>
#include <math_IntegerVector.hxx>
#include <math_Jacobi.hxx>
#include <math_KronrodSingleIntegration.hxx>
#include <math_Matrix.hxx>
#include <math_MultipleVarFunction.hxx>
#include <math_MultipleVarFunctionWithGradient.hxx>
#include <math_MultipleVarFunctionWithHessian.hxx>
#include <math_NewtonFunctionRoot.hxx>
#include <math_NewtonFunctionSetRoot.hxx>
#include <math_NewtonMinimum.hxx>
#include <math_Powell.hxx>
#include <math_PSO.hxx>
#include <math_PSOParticlesPool.hxx>
#include <math_SVD.hxx>
#include <math_TrigonometricEquationFunction.hxx>
#include <math_TrigonometricFunctionRoots.hxx>
#include <math_Uzawa.hxx>
#include <math_ValueAndWeight.hxx>
#include <math_Vector.hxx>

#include <Expr_ExprFailure.hxx>
#include <Expr_InvalidAssignment.hxx>
#include <Expr_InvalidFunction.hxx>
#include <Expr_InvalidOperand.hxx>
#include <Expr_NotAssigned.hxx>
#include <Expr_NotEvaluable.hxx>
#include <ExprIntrp_SyntaxError.hxx>
#include <math_NotSquare.hxx>
#include <math_SingularMatrix.hxx>
#include <Expr_InvalidOperand.hxx>


#include <../handle_class.h>

DEFINE_HANDLECLASS(BSplCLib_Cache)
DEFINE_HANDLECLASS(BSplSLib_Cache)
DEFINE_HANDLECLASS(BVH_BuildThread)
DEFINE_HANDLECLASS(Expr_Absolute)
DEFINE_HANDLECLASS(Expr_ArcCosine)
DEFINE_HANDLECLASS(Expr_ArcSine)
DEFINE_HANDLECLASS(Expr_ArcTangent)
DEFINE_HANDLECLASS(Expr_ArgCosh)
DEFINE_HANDLECLASS(Expr_ArgSinh)
DEFINE_HANDLECLASS(Expr_ArgTanh)
DEFINE_HANDLECLASS(Expr_BinaryExpression)
DEFINE_HANDLECLASS(Expr_BinaryFunction)
DEFINE_HANDLECLASS(Expr_Cosh)
DEFINE_HANDLECLASS(Expr_Cosine)
DEFINE_HANDLECLASS(Expr_Difference)
DEFINE_HANDLECLASS(Expr_Different)
DEFINE_HANDLECLASS(Expr_Division)
DEFINE_HANDLECLASS(Expr_Equal)
DEFINE_HANDLECLASS(Expr_Exponential)
DEFINE_HANDLECLASS(Expr_Exponentiate)
DEFINE_HANDLECLASS(Expr_FunctionDerivative)
DEFINE_HANDLECLASS(Expr_GeneralExpression)
DEFINE_HANDLECLASS(Expr_GeneralFunction)
DEFINE_HANDLECLASS(Expr_GeneralRelation)
DEFINE_HANDLECLASS(Expr_GreaterThan)
DEFINE_HANDLECLASS(Expr_GreaterThanOrEqual)
DEFINE_HANDLECLASS(Expr_ExprFailure)
DEFINE_HANDLECLASS(Expr_InvalidAssignment)
DEFINE_HANDLECLASS(Expr_InvalidFunction)
DEFINE_HANDLECLASS(Expr_InvalidOperand)
DEFINE_HANDLECLASS(Expr_LessThan)
DEFINE_HANDLECLASS(Expr_LessThanOrEqual)
DEFINE_HANDLECLASS(Expr_LogOf10)
DEFINE_HANDLECLASS(Expr_LogOfe)
DEFINE_HANDLECLASS(Expr_NamedConstant)
DEFINE_HANDLECLASS(Expr_NamedExpression)
DEFINE_HANDLECLASS(Expr_NamedFunction)
DEFINE_HANDLECLASS(Expr_NamedUnknown)
DEFINE_HANDLECLASS(Expr_NotAssigned)
DEFINE_HANDLECLASS(Expr_NotEvaluable)
DEFINE_HANDLECLASS(Expr_NumericValue)
DEFINE_HANDLECLASS(Expr_PolyExpression)
DEFINE_HANDLECLASS(Expr_PolyFunction)
DEFINE_HANDLECLASS(Expr_Product)
DEFINE_HANDLECLASS(Expr_Sign)
DEFINE_HANDLECLASS(Expr_Sine)
DEFINE_HANDLECLASS(Expr_SingleRelation)
DEFINE_HANDLECLASS(Expr_Sinh)
DEFINE_HANDLECLASS(Expr_Square)
DEFINE_HANDLECLASS(Expr_SquareRoot)
DEFINE_HANDLECLASS(Expr_Sum)
DEFINE_HANDLECLASS(Expr_SystemRelation)
DEFINE_HANDLECLASS(Expr_Tangent)
DEFINE_HANDLECLASS(Expr_Tanh)
DEFINE_HANDLECLASS(Expr_UnaryExpression)
DEFINE_HANDLECLASS(Expr_UnaryFunction)
DEFINE_HANDLECLASS(Expr_UnaryMinus)
DEFINE_HANDLECLASS(ExprIntrp_Generator)
DEFINE_HANDLECLASS(ExprIntrp_GenExp)
DEFINE_HANDLECLASS(ExprIntrp_GenFct)
DEFINE_HANDLECLASS(ExprIntrp_GenRel)
DEFINE_HANDLECLASS(ExprIntrp_SyntaxError)
DEFINE_HANDLECLASS(PLib_Base)
DEFINE_HANDLECLASS(PLib_HermitJacobi)
DEFINE_HANDLECLASS(PLib_JacobiPolynomial)
DEFINE_HANDLECLASS(Poly_CoherentTriangulation)
DEFINE_HANDLECLASS(Poly_Polygon2D)
DEFINE_HANDLECLASS(Poly_Polygon3D)
DEFINE_HANDLECLASS(Poly_PolygonOnTriangulation)
DEFINE_HANDLECLASS(Poly_Triangulation)
DEFINE_HANDLECLASS(Poly_TriangulationParameters)
DEFINE_HANDLECLASS(TopLoc_Datum3D)
DEFINE_HANDLECLASS(TopLoc_SListNodeOfItemLocation)
DEFINE_HANDLECLASS(gp_VectorWithNullMagnitude)
DEFINE_HANDLECLASS(math_NotSquare)
DEFINE_HANDLECLASS(math_SingularMatrix)

