@interface VNImageSignature : NSObject <NSSecureCoding> {
    struct FastRegistration_Signatures { float *piRow; unsigned long long nPiRow; struct Projections_meanStdTable { float *sumTable; float *sumSqTable; } piRowTable; float *piCol; unsigned long long nPiCol; struct Projections_meanStdTable { float *sumTable; float *sumSqTable; } piColTable; char *_memoryContainer; } _signature;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) const struct FastRegistration_Signatures { float *x0; unsigned long long x1; struct Projections_meanStdTable { float *x0; float *x1; } x2; float *x3; unsigned long long x4; struct Projections_meanStdTable { float *x0; float *x1; } x5; char *x6; } *signature;

- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)dealloc;
- (id)initWithImageBuffer:(id)a0 regionOfInterest:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 error:(id *)a2;

@end
