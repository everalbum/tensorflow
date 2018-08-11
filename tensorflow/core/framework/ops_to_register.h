// This file was autogenerated by print_selective_registration_header.py
#ifndef OPS_TO_REGISTER
#define OPS_TO_REGISTER

    namespace {
      constexpr const char* skip(const char* x) {
        return (*x) ? (*x == ' ' ? skip(x + 1) : x) : x;
      }

      constexpr bool isequal(const char* x, const char* y) {
        return (*skip(x) && *skip(y))
                   ? (*skip(x) == *skip(y) && isequal(skip(x) + 1, skip(y) + 1))
                   : (!*skip(x) && !*skip(y));
      }

      template<int N>
      struct find_in {
        static constexpr bool f(const char* x, const char* const y[N]) {
          return isequal(x, y[0]) || find_in<N - 1>::f(x, y + 1);
        }
      };

      template<>
      struct find_in<0> {
        static constexpr bool f(const char* x, const char* const y[]) {
          return false;
        }
      };
    }  // end namespace
    constexpr const char* kNecessaryOpKernelClasses[] = {
"UnaryOp<CPUDevice, functor::abs<float>>",
"BinaryOp<CPUDevice, functor::add<float>>",
"BinaryOp<CPUDevice, functor::add<int32>>",
"ReductionOp<CPUDevice, bool, int32, Eigen::internal::AndReducer>",
"ArgMaxOp<CPUDevice, float, int64>",
"AssertOp",
"AvgPoolingOp<CPUDevice, float>",
"BiasOp<CPUDevice, float>",
"CpuCastOp",
"ConcatV2Op<CPUDevice, ::tensorflow::uint8>",
"ConcatV2Op<CPUDevice, bool>",
"ConcatV2Op<CPUDevice, float>",
"ConstantOp",
"Conv2DOp<CPUDevice, float>",
"DepthwiseConv2dNativeOp<CPUDevice, float>",
"DequantizeOp<CPUDevice, quint8>",
"EnterOp",
"ExitOp",
"UnaryOp<CPUDevice, functor::exp<float>>",
"ExpandDimsOp<int32>",
"FillOp<CPUDevice, bool, int32>",
"FillOp<CPUDevice, float, int32>",
"UnaryOp<CPUDevice, functor::floor<double>>",
"BinaryOp<CPUDevice, functor::safe_floor_div<int32>>",
"FusedBatchNormOp<CPUDevice, float, float>",
"GatherOp<CPUDevice, float, int32>",
"BinaryOp<CPUDevice, functor::greater<float>>",
"BinaryOp<CPUDevice, functor::greater<int32>>",
"BinaryOp<CPUDevice, functor::greater_equal<float>>",
"BinaryOp<CPUDevice, functor::greater_equal<int32>>",
"IdentityOp",
"ImageProjectiveTransform<CPUDevice, float>",
"BinaryOp<CPUDevice, functor::less<float>>",
"BinaryOp<CPUDevice, functor::less<int32>>",
"BinaryOp<CPUDevice, functor::less_equal<int32>>",
"BinaryOp<CPUDevice, functor::logical_and>",
"BinaryOp<CPUDevice, functor::logical_or>",
"LoopCondOp",
"MatMulOp<CPUDevice, float, false >",
"MaxPoolingOp<CPUDevice, float>",
"BinaryOp<CPUDevice, functor::maximum<float>>",
"BinaryOp<CPUDevice, functor::maximum<int32>>",
"ReductionOp<CPUDevice, float, int32, Eigen::internal::MeanReducer<float>>",
"MergeOp",
"BinaryOp<CPUDevice, functor::minimum<double>>",
"BinaryOp<CPUDevice, functor::minimum<float>>",
"BinaryOp<CPUDevice, functor::minimum<int32>>",
"BinaryOp<CPUDevice, functor::mul<double>>",
"BinaryOp<CPUDevice, functor::mul<float>>",
"UnaryOp<CPUDevice, functor::neg<float>>",
"UnaryOp<CPUDevice, functor::neg<int32>>",
"NextIterationOp",
"NoOp",
"NonMaxSuppressionV3Op<CPUDevice>",
"BinaryOp<CPUDevice, functor::not_equal_to<float>>",
"PackOp<CPUDevice, ::tensorflow::int32>",
"PackOp<CPUDevice, ::tensorflow::int64>",
"PackOp<CPUDevice, ::tensorflow::uint8>",
"PackOp<CPUDevice, bool>",
"PackOp<CPUDevice, float>",
"PadOp<CPUDevice, float, int32>",
"PlaceholderOp",
"BinaryOp<CPUDevice, functor::pow<float>>",
"RangeOp<::tensorflow::int32>",
"RankOp",
"BinaryOp<CPUDevice, functor::div<double>>",
"BinaryOp<CPUDevice, functor::div<float>>",
"ReluOp<CPUDevice, float>",
"ReshapeOp",
"ResizeBilinearOp<CPUDevice, ::tensorflow::uint8>",
"ResizeBilinearOp<CPUDevice, float>",
"UnaryOp<CPUDevice, functor::rsqrt<float>>",
"ShapeOp<int32>",
"UnaryOp<CPUDevice, functor::sigmoid<float>>",
"SliceOp<CPUDevice, ::tensorflow::uint8>",
"SliceOp<CPUDevice, float>",
"SoftmaxOp<CPUDevice, float>",
"UnaryOp<CPUDevice, functor::sqrt<float>>",
"UnaryOp<CPUDevice, functor::square<float>>",
"BinaryOp<CPUDevice, functor::squared_difference<float>>",
"SqueezeOp",
"IdentityOp",
"StridedSliceOp<CPUDevice, ::tensorflow::int32>",
"StridedSliceOp<CPUDevice, ::tensorflow::uint8>",
"StridedSliceOp<CPUDevice, float>",
"BinaryOp<CPUDevice, functor::sub<float>>",
"BinaryOp<CPUDevice, functor::sub<int32>>",
"ReductionOp<CPUDevice, ::tensorflow::int64, int32, Eigen::internal::SumReducer<::tensorflow::int64>>",
"ReductionOp<CPUDevice, float, int32, Eigen::internal::SumReducer<float>>",
"(SvdOp<float>)",
"SwitchOp",
"TensorArrayPackOrGatherOp<CPUDevice, float, false >",
"TensorArrayReadOp<CPUDevice, ::tensorflow::int32>",
"TensorArrayReadOp<CPUDevice, float>",
"TensorArrayUnpackOrScatterOp<CPUDevice, ::tensorflow::int32, false >",
"TensorArrayUnpackOrScatterOp<CPUDevice, float, false >",
"TensorArraySizeOp",
"TensorArrayOp",
"TensorArrayWriteOp<CPUDevice, float>",
"TileOp<CPUDevice, int32>",
"TopK<CPUDevice, float>",
"TransposeCpuOp",
"UnpackOp<CPUDevice, ::tensorflow::int32>",
"UnpackOp<CPUDevice, float>",
"RecvOp",
"SendOp",
};
#define SHOULD_REGISTER_OP_KERNEL(clz) (find_in<sizeof(kNecessaryOpKernelClasses) / sizeof(*kNecessaryOpKernelClasses)>::f(clz, kNecessaryOpKernelClasses))

constexpr inline bool ShouldRegisterOp(const char op[]) {
  return false
     || isequal(op, "Abs")
     || isequal(op, "Add")
     || isequal(op, "All")
     || isequal(op, "ArgMax")
     || isequal(op, "Assert")
     || isequal(op, "AvgPool")
     || isequal(op, "BiasAdd")
     || isequal(op, "Cast")
     || isequal(op, "ConcatV2")
     || isequal(op, "Const")
     || isequal(op, "Conv2D")
     || isequal(op, "DepthwiseConv2dNative")
     || isequal(op, "Dequantize")
     || isequal(op, "Enter")
     || isequal(op, "Exit")
     || isequal(op, "Exp")
     || isequal(op, "ExpandDims")
     || isequal(op, "Fill")
     || isequal(op, "Floor")
     || isequal(op, "FloorDiv")
     || isequal(op, "FusedBatchNorm")
     || isequal(op, "GatherV2")
     || isequal(op, "Greater")
     || isequal(op, "GreaterEqual")
     || isequal(op, "Identity")
     || isequal(op, "ImageProjectiveTransform")
     || isequal(op, "Less")
     || isequal(op, "LessEqual")
     || isequal(op, "LogicalAnd")
     || isequal(op, "LogicalOr")
     || isequal(op, "LoopCond")
     || isequal(op, "MatMul")
     || isequal(op, "MaxPool")
     || isequal(op, "Maximum")
     || isequal(op, "Mean")
     || isequal(op, "Merge")
     || isequal(op, "Minimum")
     || isequal(op, "Mul")
     || isequal(op, "Neg")
     || isequal(op, "NextIteration")
     || isequal(op, "NoOp")
     || isequal(op, "NonMaxSuppressionV3")
     || isequal(op, "NotEqual")
     || isequal(op, "Pack")
     || isequal(op, "Pad")
     || isequal(op, "Placeholder")
     || isequal(op, "Pow")
     || isequal(op, "Range")
     || isequal(op, "Rank")
     || isequal(op, "RealDiv")
     || isequal(op, "Relu")
     || isequal(op, "Reshape")
     || isequal(op, "ResizeBilinear")
     || isequal(op, "Rsqrt")
     || isequal(op, "Shape")
     || isequal(op, "Sigmoid")
     || isequal(op, "Slice")
     || isequal(op, "Softmax")
     || isequal(op, "Sqrt")
     || isequal(op, "Square")
     || isequal(op, "SquaredDifference")
     || isequal(op, "Squeeze")
     || isequal(op, "StopGradient")
     || isequal(op, "StridedSlice")
     || isequal(op, "Sub")
     || isequal(op, "Sum")
     || isequal(op, "Svd")
     || isequal(op, "Switch")
     || isequal(op, "TensorArrayGatherV3")
     || isequal(op, "TensorArrayReadV3")
     || isequal(op, "TensorArrayScatterV3")
     || isequal(op, "TensorArraySizeV3")
     || isequal(op, "TensorArrayV3")
     || isequal(op, "TensorArrayWriteV3")
     || isequal(op, "Tile")
     || isequal(op, "TopKV2")
     || isequal(op, "Transpose")
     || isequal(op, "Unpack")
     || isequal(op, "_Recv")
     || isequal(op, "_Send")
  ;
}
#define SHOULD_REGISTER_OP(op) ShouldRegisterOp(op)

#define SHOULD_REGISTER_OP_GRADIENT false
#endif
