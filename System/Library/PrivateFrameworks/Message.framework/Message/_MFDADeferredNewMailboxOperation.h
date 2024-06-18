@class NSString;

@interface _MFDADeferredNewMailboxOperation : _MFOfflineCacheOperation {
    NSString *_displayName;
    NSString *_parentFolderID;
    NSString *_temporaryFolderID;
}

+ (BOOL)supportsSecureCoding;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (BOOL)translateToLocalActionWithConnection:(id)a0;

@end
