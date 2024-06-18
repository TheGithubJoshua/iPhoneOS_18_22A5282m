@class NSUUID, NSString, LNSystemContext, NSNumber, LNEnvironment;

@interface LNActionExecutorOptions : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSUUID *executionUUID;
@property (copy, nonatomic) NSString *clientLabel;
@property (nonatomic) unsigned short source;
@property (nonatomic) long long interactionMode;
@property (copy, nonatomic) NSNumber *viewActionIdentifier;
@property (nonatomic) BOOL donateToTranscript;
@property (copy, nonatomic) LNEnvironment *environment;
@property (copy, nonatomic) LNSystemContext *systemContext;
@property (nonatomic) double connectionOperationTimeout;

- (id)initWithCoder:(id)a0;
- (id)init;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
