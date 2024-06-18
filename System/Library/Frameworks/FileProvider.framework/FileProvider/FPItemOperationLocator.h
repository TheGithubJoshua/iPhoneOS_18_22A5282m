@interface FPItemOperationLocator : FPActionOperationLocator

+ (BOOL)supportsSecureCoding;

- (id)filename;
- (BOOL)isFolder;
- (id)parentIdentifier;
- (id)description;
- (unsigned long long)size;
- (id)identifier;
- (BOOL)isDownloaded;
- (BOOL)isMaterializedOnDisk;
- (BOOL)isProviderItem;
- (BOOL)requiresCrossDeviceCopy;

@end
