@class NSError, CKRecord, BRCItemGlobalID;

@interface BRCLocalVersion : BRCVersion

@property (retain, nonatomic) CKRecord *uploadedAssets;
@property (retain, nonatomic) NSError *uploadError;
@property (retain, nonatomic) BRCItemGlobalID *prevZoneGlobalID;

+ (BOOL)supportsSecureCoding;

- (id)initWithCoder:(id)a0;
- (void)sqliteBind:(struct sqlite3_stmt { } *)a0 index:(int)a1;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initFromResultSet:(id)a0 pos:(int)a1;
- (id)initWithVersion:(id)a0;
- (id)sizeObj;
- (id)initForPackage:(BOOL)a0;
- (void)_clearSignatures:(unsigned long long)a0 isPackage:(BOOL)a1;
- (id)descriptionWithContext:(id)a0;
- (unsigned long long)diffAgainstLocalVersion:(id)a0;
- (id)initWithLocalVersion:(id)a0;
- (id)initWithServerVersion:(id)a0;
- (BOOL)isMissingUploadsWithDiffs:(unsigned long long)a0 isDocumentSyncPaused:(BOOL)a1 isDocumentResumingSync:(BOOL)a2;
- (id)isPackageObj;
- (BOOL)shouldRecreateUploadJobGivenDiffs:(unsigned long long)a0;
- (void)updateFromFSAtPath:(id)a0 filenameOverride:(id)a1;
- (void)updateLocationAndMetaFromFSAtPath:(id)a0 updateFilename:(BOOL)a1 filenameOverride:(id)a2;
- (void)updateServerFieldsFromVersion:(id)a0;

@end
