@class CLSPersonIdentity;

@interface CLSPersonIdentityResult : NSObject

@property (retain, nonatomic) CLSPersonIdentity *person;
@property (nonatomic) float confidence;

+ (id)personResultWithPerson:(id)a0 andConfidence:(float)a1;

- (void).cxx_destruct;
- (id)description;
- (BOOL)isSamePersonAsResult:(id)a0;
- (void)mergeWithResult:(id)a0;

@end
