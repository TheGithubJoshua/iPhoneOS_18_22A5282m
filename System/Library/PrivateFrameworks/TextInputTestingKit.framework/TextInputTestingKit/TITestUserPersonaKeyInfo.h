@class TIGaussianErrorGenerator, TIFitAffineMLLMatrixWrapper;

@interface TITestUserPersonaKeyInfo : NSObject

@property (nonatomic) struct CGPoint { double x; double y; } center;
@property (retain, nonatomic) TIGaussianErrorGenerator *errorGenerator;
@property (retain, nonatomic) TIFitAffineMLLMatrixWrapper *rotationMatrix;

- (void).cxx_destruct;
- (id)description;

@end
