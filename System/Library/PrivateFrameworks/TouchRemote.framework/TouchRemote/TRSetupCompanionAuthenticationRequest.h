@class NSSet, ACAccount, AKDevice;

@interface TRSetupCompanionAuthenticationRequest : TRRequestMessage

@property (retain, nonatomic) ACAccount *account;
@property (retain, nonatomic) NSSet *targetedAccountServices;
@property (retain, nonatomic) AKDevice *companionDevice;
@property (nonatomic) BOOL shouldUseAIDA;

+ (BOOL)supportsSecureCoding;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)description;

@end
