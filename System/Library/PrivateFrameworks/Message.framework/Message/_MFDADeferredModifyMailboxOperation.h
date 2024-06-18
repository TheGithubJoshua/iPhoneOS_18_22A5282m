@class NSString;

@interface _MFDADeferredModifyMailboxOperation : _MFOfflineCacheOperation {
    NSString *_folderID;
    NSString *_newParentFolderID;
    NSString *_newDisplayName;
}

+ (BOOL)supportsSecureCoding;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (id)initWithFolderID:(id)a0 newParentFolderID:(id)a1 newDisplayName:(id)a2;
- (BOOL)translateToLocalActionWithConnection:(id)a0;

@end
