@class NSArray, NSString, NSUUID;

@interface CAXSuggestion : NSObject <NSSecureCoding, ATXProtoBufWrapper>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSArray *suggestedActions;
@property (retain, nonatomic) NSString *modelVersion;
@property (retain, nonatomic) NSUUID *blendingCacheUpdateUUID;

- (id)initWithCoder:(id)a0;
- (id)jsonRawData;
- (BOOL)checkAndReportDecodingFailureIfNeededForid:(id)a0 key:(id)a1 coder:(id)a2 errorDomain:(id)a3 errorCode:(long long)a4;
- (id)initWithProto:(id)a0;
- (id)json;
- (id)initWithProtoData:(id)a0;
- (id)proto;
- (id)encodeAsProto;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (id)initWithSuggestedActions:(id)a0 modelVersion:(id)a1;

@end
