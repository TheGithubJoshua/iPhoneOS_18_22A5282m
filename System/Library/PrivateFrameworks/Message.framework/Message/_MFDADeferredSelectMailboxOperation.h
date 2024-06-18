@class NSString;

@interface _MFDADeferredSelectMailboxOperation : _MFOfflineCacheOperation {
    NSString *_folderID;
}

+ (BOOL)supportsSecureCoding;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (BOOL)translateToLocalActionWithConnection:(id)a0;

@end
