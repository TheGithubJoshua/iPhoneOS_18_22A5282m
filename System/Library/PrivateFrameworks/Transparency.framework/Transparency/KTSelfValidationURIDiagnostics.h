@class NSDictionary, NSString, NSDate;

@interface KTSelfValidationURIDiagnostics : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain) NSDictionary *ktVerificationInfoDiagnosticsJson;
@property (retain) NSDictionary *transparentDataDiagnosticsJson;
@property (retain) NSString *result;
@property (readonly) NSDictionary *diagnosticsJsonDictionary;
@property (retain) NSString *errorDescription;
@property (retain) NSDate *requestTime;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;

@end
