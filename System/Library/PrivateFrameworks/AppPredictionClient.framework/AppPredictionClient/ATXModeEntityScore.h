@class NSUUID, NSDictionary;

@interface ATXModeEntityScore : NSObject <NSSecureCoding, ATXModeEntityJsonProtocol>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSUUID *uuid;
@property (nonatomic) double score;
@property (retain, nonatomic) NSDictionary *featureVector;

- (id)initWithCoder:(id)a0;
- (id)jsonDict;
- (BOOL)checkAndReportDecodingFailureIfNeededFordouble:(double)a0 key:(id)a1 coder:(id)a2 errorDomain:(id)a3 errorCode:(long long)a4;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (id)debugDescription;
- (id)initWithScore:(double)a0 featureVector:(id)a1 uuid:(id)a2;

@end
