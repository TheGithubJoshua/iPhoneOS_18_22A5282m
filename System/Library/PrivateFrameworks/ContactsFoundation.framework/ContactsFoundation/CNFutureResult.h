@class NSError;

@interface CNFutureResult : NSObject

@property (retain, nonatomic) id result;
@property (copy, nonatomic) NSError *error;

- (void).cxx_destruct;
- (void)setResult:(id)a0 error:(id)a1;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
