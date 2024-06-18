@class NSString;

@interface _MFDADeferredSetFlagsOperation : _MFOfflineCacheOperation {
    unsigned long long _onFlags;
    unsigned long long _offFlags;
    NSString *_messageID;
}

+ (BOOL)supportsSecureCoding;
+ (id)log;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (BOOL)translateToLocalActionWithConnection:(id)a0;

@end
