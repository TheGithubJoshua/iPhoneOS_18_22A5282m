@class SESDCKAssertion, NSString;

@interface NFDCKAssertion : NSObject

@property (readonly, nonatomic) SESDCKAssertion *sesAssertion;
@property (readonly, nonatomic) NSString *keyIdentifier;

- (void)invalidate;
- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithSESAssertion:(id)a0;

@end
