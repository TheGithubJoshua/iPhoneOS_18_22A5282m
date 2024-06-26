@class NSString, NSDictionary, _LTLocalePair;

@interface _LTSafariLatencyLoggingRequest : NSObject <_LTLoggingRequest>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) double start;
@property (readonly, nonatomic) double firstResponse;
@property (readonly, nonatomic) double firstParagraphComplete;
@property (readonly, nonatomic) double progressComplete;
@property (readonly, nonatomic) double pageComplete;
@property (copy, nonatomic) NSString *processName;
@property (readonly, nonatomic) NSDictionary *dict;
@property (copy, nonatomic) _LTLocalePair *localePair;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithCoder:(id)a0;
- (id)init;
- (void)markFirstParagraphComplete;
- (void)markProgressDone;
- (void)markPageComplete;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (void)markResponse;

@end
