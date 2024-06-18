@class NSString;

@interface BMStoreBookmark : NSObject <NSCopying, NSSecureCoding, BMProtoBufWrapper>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *streamId;
@property (readonly, nonatomic) NSString *segmentName;
@property (readonly, nonatomic) double iterationStartTime;
@property (readonly, nonatomic) unsigned long long offset;

- (id)initWithCoder:(id)a0;
- (BOOL)checkAndReportDecodingFailureIfNeededForid:(id)a0 key:(id)a1 coder:(id)a2 errorDomain:(id)a3 errorCode:(long long)a4;
- (id)initWithProto:(id)a0;
- (BOOL)checkAndReportDecodingFailureIfNeededFordouble:(double)a0 key:(id)a1 coder:(id)a2 errorDomain:(id)a3 errorCode:(long long)a4;
- (id)initWithProtoData:(id)a0;
- (id)_descriptionDict;
- (id)proto;
- (unsigned long long)hash;
- (id)encodeAsProto;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (id)initWithStream:(id)a0 segment:(id)a1 iterationStartTime:(double)a2 offset:(unsigned long long)a3;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
