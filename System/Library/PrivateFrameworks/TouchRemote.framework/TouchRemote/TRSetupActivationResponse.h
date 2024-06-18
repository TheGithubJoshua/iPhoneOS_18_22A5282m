@class NSError;

@interface TRSetupActivationResponse : TRResponseMessage

@property (nonatomic) BOOL activated;
@property (retain, nonatomic) NSError *error;

+ (BOOL)supportsSecureCoding;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)description;

@end
