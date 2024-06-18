@class NSString, NSDictionary;

@interface TPSTargetingValidation : NSObject <TPSValidatable>

@property (copy, nonatomic) NSString *identifier;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSDictionary *targetContext;
@property (nonatomic) long long joinType;
@property (nonatomic) BOOL ignoreCache;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (unsigned long long)unsignedIntegerValue;
- (id)key;
- (void)cancel;
- (BOOL)boolValue;
- (long long)integerValue;
- (id)stringValue;
- (id)arrayValue;
- (void).cxx_destruct;
- (id)value;
- (void)validateWithCompletion:(id /* block */)a0;
- (id)initWithTargetContext:(id)a0;

@end
