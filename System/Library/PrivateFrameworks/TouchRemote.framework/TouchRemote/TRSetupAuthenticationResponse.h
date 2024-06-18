@class NSSet, NSError;

@interface TRSetupAuthenticationResponse : TRResponseMessage

@property (retain, nonatomic) NSSet *unauthenticatedAccountServices;
@property (retain, nonatomic) NSError *error;

+ (BOOL)supportsSecureCoding;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)description;

@end
