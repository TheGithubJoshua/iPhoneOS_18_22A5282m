@protocol CKObjectValidating;

@interface CKKeyPathExpressionValidator : CKPredicateValidatorInstance

@property (retain, nonatomic) id<CKObjectValidating> validator;

- (BOOL)validate:(id)a0 error:(id *)a1;
- (id)CKPropertiesDescription;
- (void).cxx_destruct;
- (id)initWithValidator:(id)a0;

@end
