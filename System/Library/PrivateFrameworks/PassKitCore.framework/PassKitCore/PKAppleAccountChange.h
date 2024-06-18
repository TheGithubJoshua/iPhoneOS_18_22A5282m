@class PKAppleAccountState;

@interface PKAppleAccountChange : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) long long type;
@property (readonly, nonatomic) long long event;
@property (readonly, nonatomic) PKAppleAccountState *currentState;
@property (readonly, nonatomic) PKAppleAccountState *previousState;

+ (long long)changeTypeToAccount:(id)a0 fromAccount:(id)a1;

- (id)initWithCoder:(id)a0;
- (id)initWithEvent:(long long)a0 currentAccount:(id)a1 previousAccount:(id)a2;
- (BOOL)didEnablementOfWalletDataclassChange;
- (void)encodeWithCoder:(id)a0;
- (BOOL)didEnablementOfRelevantDataclassesChange;
- (void).cxx_destruct;
- (id)description;
- (BOOL)didAccountManagedStateChange;
- (BOOL)shouldBeNotedByPassLibrary;
- (BOOL)didAccountOrderChange;
- (BOOL)didEnablementOfUbiquityDataclassChange;

@end
