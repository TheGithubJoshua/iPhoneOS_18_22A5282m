@class _TtC17KnowledgeGraphKit20MAFloatMatrixWrapper;

@interface MAFloatMatrix : NSObject

@property (class, readonly, nonatomic) Class wrapperClass;

@property (readonly, nonatomic) _TtC17KnowledgeGraphKit20MAFloatMatrixWrapper *wrapper;
@property (readonly, nonatomic) long long rows;
@property (readonly, nonatomic) long long columns;
@property (readonly, nonatomic) long long count;

+ (id)onesWithRows:(long long)a0 columns:(long long)a1;
+ (id)zerosWithRows:(long long)a0 columns:(long long)a1;

- (id)data;
- (id)init;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)initWithArray:(id)a0;
- (unsigned long long)hash;
- (id)array;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (float)mean;
- (float)sum;
- (id)initWithWrapper:(id)a0;
- (id)row:(long long)a0;
- (BOOL)isApproximatelyEqualTo:(id)a0 epsilon:(float)a1;
- (float)floatAtRow:(long long)a0 column:(long long)a1;
- (id)initWithData:(id)a0 rows:(long long)a1 columns:(long long)a2;
- (id)initWithFloats:(const float *)a0 rows:(long long)a1 columns:(long long)a2;
- (BOOL)isApproximatelyEqualTo:(id)a0;
- (id)matrixByAddingScalar:(float)a0;
- (id)matrixByAppendingColumn:(id)a0;
- (id)matrixByAppendingColumnsOfMatrix:(id)a0;
- (id)matrixByAppendingRow:(id)a0;
- (id)matrixBySubtractingMatrix:(id)a0;
- (id)matrixBySubtractingScalar:(float)a0;
- (id)meanAlongAxis:(unsigned long long)a0;
- (id)sumAlongAxis:(unsigned long long)a0;
- (float)sumOfSquares;

@end
