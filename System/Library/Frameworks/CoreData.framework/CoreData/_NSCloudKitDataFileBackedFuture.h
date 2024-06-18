@interface _NSCloudKitDataFileBackedFuture : _NSDataFileBackedFuture

- (void)_copyToInterimLocation;
- (id)initWithStoreMetadata:(id)a0 directory:(id)a1 originalFileURL:(id)a2;
- (void)_moveToPermanentLocation;
- (BOOL)_isCloudKitSupportOriginated;

@end
