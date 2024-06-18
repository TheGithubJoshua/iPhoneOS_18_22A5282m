@class NSURL, SFUCryptoKey, TSPObjectContext, NSMapTable, NSDictionary, NSObject, TSPDocumentLoadValidationPolicy, TSUTemporaryDirectory, NSMutableArray, NSProgress, NSString, NSSet, TSPDocumentSaveValidationPolicy, NSMutableSet, NSOperationQueue, NSUUID;
@protocol TSKImporter, TSAImportDelegate, NSFilePresenter, TSADocumentPassphraseProvider, OS_dispatch_queue;

@interface TSAImportController : NSObject <TSPObjectContextDelegate, NSFilePresenter, TSDImportExportDelegate> {
    NSURL *_temporaryURL;
    TSUTemporaryDirectory *_temporaryDFFDirectory;
    NSMutableSet *_importWarnings;
    NSMutableArray *_deferredWriters;
    NSProgress *_resourceAccessProgress;
    struct { unsigned char isPasswordProtected : 1; unsigned char isCleanedUp : 1; } _flags;
}

@property (copy, nonatomic) NSURL *fileURL;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *importQueue;
@property (readonly, nonatomic) BOOL shouldUpdateAdditionalResourceRequestsAfterImport;
@property (readonly, copy, nonatomic) NSString *documentType;
@property (readonly, nonatomic) id<TSKImporter> importer;
@property (nonatomic) id<TSAImportDelegate> delegate;
@property (readonly, nonatomic) NSString *sourcePath;
@property (readonly, nonatomic) NSURL *temporaryURL;
@property (nonatomic) BOOL temporaryURLShouldBeAppropriateForReplacingSourcePath;
@property (readonly, nonatomic) TSUTemporaryDirectory *temporaryDirectory;
@property (readonly, nonatomic) TSPObjectContext *documentContext;
@property (readonly, nonatomic) long long documentTypeCategory;
@property (readonly, nonatomic) BOOL hasWarnings;
@property (readonly, nonatomic) BOOL isBrowsingVersions;
@property (readonly, nonatomic) BOOL isPasswordProtected;
@property (weak, nonatomic) id<TSADocumentPassphraseProvider> passphraseProvider;
@property (readonly, nonatomic) id<NSFilePresenter> filePresenter;
@property (readonly) SFUCryptoKey *encryptionKey;
@property (readonly, nonatomic) TSPDocumentLoadValidationPolicy *documentLoadValidationPolicy;
@property (readonly, nonatomic) TSPDocumentSaveValidationPolicy *documentSaveValidationPolicy;
@property (readonly, nonatomic) BOOL ignoreDocumentSupport;
@property (readonly, nonatomic) BOOL isDocumentSupportTemporary;
@property (readonly, nonatomic) NSDictionary *additionalDocumentPropertiesForWrite;
@property (readonly, nonatomic) NSDictionary *additionalDocumentSupportPropertiesForWrite;
@property (readonly, nonatomic) BOOL areNewExternalReferencesToDataAllowed;
@property (readonly, nonatomic) NSUUID *baseUUIDForObjectUUID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSURL *presentedItemURL;
@property (readonly, retain) NSOperationQueue *presentedItemOperationQueue;
@property (readonly, copy) NSURL *primaryPresentedItemURL;
@property (readonly) NSSet *observedPresentedItemUbiquityAttributes;
@property (readonly, nonatomic) NSMapTable *incompatibleMediaContainersWithDataUnsupportedOnThisDevice;
@property (readonly, nonatomic) NSMapTable *incompatibleMediaContainersWithDataUnsupportedOnAllDevices;

- (id)name;
- (void).cxx_destruct;
- (void)relinquishPresentedItemToWriter:(id /* block */)a0;
- (void)dealloc;
- (void)presentedItemDidMoveToURL:(id)a0;
- (id)warnings;
- (id)documentProvider;
- (id)logContext;
- (void)addPersistenceWarnings:(id)a0;
- (void)addWarning:(id)a0;
- (id)defaultDraftName;
- (id)packageDataForWrite;
- (void)presentPersistenceError:(id)a0;
- (void)removeWarning:(id)a0;
- (void)_beginImportWithProgress:(id)a0 completionQueue:(id)a1 completionHandler:(id /* block */)a2;
- (void)_continueImportWithProgress:(id)a0 success:(BOOL)a1 error:(id)a2 completedSteps:(int)a3 completionQueue:(id)a4 completionHandler:(id /* block */)a5;
- (void)_performImportWithProgress:(id)a0 completedSteps:(int)a1 completionQueue:(id)a2 completionHandler:(id /* block */)a3;
- (BOOL)_saveContextToTemporaryURL:(id)a0 passphrase:(id)a1 originalURL:(id)a2 documentUUID:(id)a3 error:(id *)a4;
- (void)_setPresentedItemURL:(id)a0;
- (void)addIncompatibleMediaContainer:(id)a0 incompatibleData:(id)a1 compatibilityLevel:(long long)a2;
- (id)additionalResourceRequestsForObjectContext:(id)a0;
- (void)cancelImport;
- (void)finishImportWithProgress:(id)a0 success:(BOOL)a1 error:(id)a2 completionQueue:(id)a3 completionHandler:(id /* block */)a4;
- (id)importErrorWithCode:(long long)a0 description:(id)a1 failureReason:(id)a2 underlyingError:(id)a3;
- (id)importWithCompletionQueue:(id)a0 completionHandler:(id /* block */)a1;
- (void)importWithProgress:(id)a0 completionQueue:(id)a1 completionHandler:(id /* block */)a2;
- (Class)importerClass;
- (id)initWithPath:(id)a0 delegate:(id)a1;
- (id)initWithPath:(id)a0 documentType:(id)a1 delegate:(id)a2;
- (id)makeObjectContextWithTemplateDocument:(id)a0 error:(id *)a1;
- (BOOL)needsFileCoordination;
- (void)prepareForImportDisplayingProgress:(id)a0 completionQueue:(id)a1 completionHandler:(id /* block */)a2;
- (void)removeFilePresenter;
- (void)resumeAutosaveWithReason:(id)a0;
- (void)resumeSaveAndAutosaveWithReason:(id)a0;
- (void)retrievePassphraseForEncryptedDocumentWithImporter:(id)a0 completion:(id /* block */)a1;
- (void)showProgressIfNeeded:(id)a0 forURL:(id)a1;
- (void)suspendAutosaveWithReason:(id)a0;
- (void)suspendSaveAndAutosaveWithReason:(id)a0;
- (id)templateDocumentWithName:(id)a0 variantIndex:(unsigned long long)a1;
- (void)willSaveImportedDocument;

@end