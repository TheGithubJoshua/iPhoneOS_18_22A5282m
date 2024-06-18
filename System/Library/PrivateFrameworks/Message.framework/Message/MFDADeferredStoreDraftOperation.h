@class NSString;

@interface MFDADeferredStoreDraftOperation : _MFOfflineCacheOperation {
    NSString *_messageIDHeader;
    NSString *_folderID;
}

+ (BOOL)supportsSecureCoding;
+ (id)log;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (id)initWithMessageIDHeader:(id)a0 mailbox:(id)a1;
- (BOOL)translateToLocalActionWithConnection:(id)a0;

@end
