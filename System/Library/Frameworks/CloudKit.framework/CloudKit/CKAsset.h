@class NSURL, NSFileHandle, CKAssetDownloadPreauthorization, NSDate, NSDictionary, CKMergeableDeltaID, CKAssetTransferOptions, CKAssetReference, NSString, CKRecord, CKRecordID, CKMediaItemMaker, CKAssetRereferenceInfo, NSNumber, NSData;

@interface CKAsset : NSObject <CKRecordValue, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) NSData *signature;
@property (nonatomic) unsigned long long size;
@property (nonatomic) unsigned long long paddedFileSize;
@property (retain, nonatomic) NSNumber *deviceID;
@property (retain, nonatomic) NSNumber *fileID;
@property (copy, nonatomic) NSURL *nullableFileURL;
@property (copy, nonatomic) NSURL *fileURL;
@property (retain, nonatomic) NSData *assetContent;
@property (copy, nonatomic) NSString *itemTypeHint;
@property (copy, nonatomic) NSString *UUID;
@property (retain, nonatomic) NSString *downloadURLTemplate;
@property (retain, nonatomic) NSDate *downloadURLExpiration;
@property (copy, nonatomic) NSString *uploadReceipt;
@property (nonatomic) double uploadReceiptExpiration;
@property (nonatomic) long long storageGroupingPolicy;
@property (nonatomic) BOOL shouldReadRawEncryptedData;
@property (nonatomic) BOOL usesAssetDownloadStagingManager;
@property (retain, nonatomic) CKAssetTransferOptions *assetTransferOptions;
@property (retain, nonatomic) CKAssetReference *assetReference;
@property (retain, nonatomic) NSDictionary *assetChunkerOptions;
@property (weak, nonatomic) CKRecord *record;
@property (copy, nonatomic) NSString *recordKey;
@property (retain, nonatomic) NSURL *contentBaseURL;
@property (retain, nonatomic) NSString *owner;
@property (retain, nonatomic) NSString *requestor;
@property (copy, nonatomic) NSString *authToken;
@property (retain, nonatomic) CKAssetDownloadPreauthorization *downloadPreauthorization;
@property (retain, nonatomic) NSString *downloadBaseURL;
@property (retain, nonatomic) CKMediaItemMaker *mediaItemMaker;
@property (nonatomic) unsigned long long downloadTokenExpiration;
@property (copy, nonatomic) NSData *boundaryKey;
@property (retain, nonatomic) NSFileHandle *fileHandle;
@property (retain, nonatomic) NSURL *constructedAssetDownloadURL;
@property (retain, nonatomic) NSString *constructedAssetDownloadURLTemplate;
@property (nonatomic) unsigned long long constructedAssetEstimatedSize;
@property (retain, nonatomic) NSData *constructedAssetDownloadParameters;
@property (copy, nonatomic) NSURL *realPathURL;
@property (retain, nonatomic) NSNumber *generationCountToSave;
@property (nonatomic) BOOL shouldReadAssetContentUsingClientProxy;
@property (nonatomic) BOOL exposeAssetKey;
@property (retain, nonatomic) NSData *assetKey;
@property (retain, nonatomic) NSData *wrappedAssetKey;
@property (retain, nonatomic) NSData *clearAssetKey;
@property (retain, nonatomic) NSData *referenceSignature;
@property (nonatomic) BOOL wasCached;
@property (nonatomic) BOOL hasSize;
@property (nonatomic) BOOL uploaded;
@property (nonatomic) BOOL downloaded;
@property (nonatomic) long long arrayIndex;
@property (retain, nonatomic) CKRecordID *recordID;
@property (retain, nonatomic) CKMergeableDeltaID *mergeableDeltaID;
@property (retain, nonatomic) CKAssetRereferenceInfo *assetRereferenceInfo;
@property (nonatomic) long long uploadRank;

+ (id)getFileMetadataWithFileHandle:(id)a0 openInfo:(id)a1 error:(id *)a2;
+ (int)errorCodeFromPOSIXCode:(int)a0;
+ (id)openWithOpenInfo:(id)a0 error:(id *)a1;
+ (id)_openUnencryptedWithOpenInfo:(id)a0 genCountCheck:(BOOL)a1 error:(id *)a2;
+ (id)openToReadRawEncryptedDataWithOpenInfo:(id)a0 error:(id *)a1;
+ (id)getFileSizeWithOpenInfo:(id)a0 error:(id *)a1;
+ (id)_canonicalizeTemplateURL:(id)a0;
+ (BOOL)_templateURLRequiresAssetKey:(id)a0;
+ (id)getFileMetadataAtPath:(id)a0 error:(id *)a1;
+ (id)assetWithFileURL:(id)a0;
+ (id)_expandTemplateURL:(id)a0 fieldValues:(id)a1;

- (id)openWithError:(id *)a0;
- (id)initWithFileURL:(id)a0;
- (id)initWithFileDescriptor:(int)a0;
- (id)initWithCoder:(id)a0;
- (id)init;
- (id)CKDescriptionPropertiesWithPublic:(BOOL)a0 private:(BOOL)a1 shouldExpand:(BOOL)a2;
- (id)downloadURL;
- (BOOL)isRereferencedAssetUpload;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)_initBare;
- (id)assetHandleUUID;
- (id)downloadURLWithFileName:(id)a0;
- (id)initWithAssetContent:(id)a0 itemTypeHint:(id)a1;
- (id)initWithAssetReference:(id)a0;
- (id)initWithDeviceID:(id)a0 fileID:(id)a1 generationID:(id)a2;
- (id)initWithFileURL:(id)a0 signature:(id)a1;
- (id)initWithFileURL:(id)a0 signature:(id)a1 assetHandleUUID:(id)a2;
- (BOOL)isConstructedAsset;

@end