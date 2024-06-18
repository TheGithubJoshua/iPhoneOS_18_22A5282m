@class NSString;

@interface _MFDADeferredDeleteMessageOperation : _MFOfflineCacheOperation {
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
