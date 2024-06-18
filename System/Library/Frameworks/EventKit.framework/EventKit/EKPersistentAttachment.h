@interface EKPersistentAttachment : EKPersistentObject

+ (id)relations;
+ (Class)meltedClass;
+ (id)propertyKeyForUniqueIdentifier;
+ (id)propertiesToUnloadOnCommit;

- (void)setFileSize:(id)a0;
- (id)fileSize;
- (int)entityType;
- (id)fileFormat;
- (int)flags;
- (void)setUUID:(id)a0;
- (id)URLString;
- (id)UUID;
- (void)setFlags:(int)a0;
- (void)setExternalID:(id)a0;
- (void)setExternalModificationTag:(id)a0;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)externalModificationTag;
- (id)externalID;
- (void)setURLString:(id)a0;
- (void)setFileFormat:(id)a0;
- (void)setFileNameRaw:(id)a0;
- (id)XPropertiesData;
- (id)fileNameRaw;
- (id)localRelativePath;
- (id)securityScopedLocalURLForArchivedDataWrapper;
- (id)securityScopedLocalURLWrapper;
- (id)securityScopedURLWrapperForPendingFileCopy;
- (void)setLocalRelativePath:(id)a0;
- (void)setSecurityScopedLocalURLForArchivedDataWrapper:(id)a0;
- (void)setSecurityScopedLocalURLWrapper:(id)a0;
- (void)setSecurityScopedURLWrapperForPendingFileCopy:(id)a0;
- (void)setShouldSetQuarantineAttributesOnCopiedFile:(BOOL)a0;
- (void)setXPropertiesData:(id)a0;
- (BOOL)shouldSetQuarantineAttributesOnCopiedFile;

@end
