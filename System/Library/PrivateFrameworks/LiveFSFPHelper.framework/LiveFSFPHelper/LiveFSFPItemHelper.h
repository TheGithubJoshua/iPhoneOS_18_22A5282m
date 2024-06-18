@class NSURL, LiveFSFPExtensionHelper, NSMapTable, NSDate, NSDictionary, NSError, NSMutableDictionary, NSObject, NSFileProviderItemVersion, NSString, NSSet, NSPersonNameComponents, NSArray, NSData, NSNumber, UTType, LiveFSFPEnumeratorDataContainer;
@protocol OS_dispatch_group;

@interface LiveFSFPItemHelper : NSObject <NSFileProviderItem_Private> {
    struct _LIFileAttributes { unsigned long long __fa_rsvd0; unsigned long long fa_validmask; unsigned long long fa_seqno; unsigned int fa_type; unsigned int fa_mode; unsigned int fa_nlink; unsigned int fa_uid; unsigned int fa_gid; unsigned int fa_bsd_flags; unsigned long long fa_size; unsigned long long fa_allocsize; unsigned long long fa_fileid; unsigned long long fa_parentid; struct timespec { long long tv_sec; long long tv_nsec; } fa_atime; struct timespec { long long tv_sec; long long tv_nsec; } fa_mtime; struct timespec { long long tv_sec; long long tv_nsec; } fa_ctime; struct timespec { long long tv_sec; long long tv_nsec; } fa_birthtime; struct timespec { long long tv_sec; long long tv_nsec; } fa_backuptime; struct timespec { long long tv_sec; long long tv_nsec; } fa_addedtime; unsigned int fa_int_flags; unsigned int _pad0; } attributes;
    int numChildren;
    NSString *_fullPath;
    BOOL _isFetchingXattrValues;
    NSDate *_lastXattrValuesFetchDate;
    NSMutableDictionary *_pendingRenameCompletionBlocks;
    NSObject<OS_dispatch_group> *_xattrFetchGroup;
    NSDate *_lastUsedDate;
    NSData *_tagData;
    NSNumber *_favoriteRank;
}

@property long long attr_load;
@property (readonly, copy, nonatomic) NSString *path;
@property (readonly, copy, nonatomic) NSString *fullPath;
@property (readonly, copy, nonatomic) NSString *fh;
@property (retain) LiveFSFPExtensionHelper *extension;
@property (retain) LiveFSFPItemHelper *parent;
@property (weak) LiveFSFPEnumeratorDataContainer *container;
@property int liType;
@property (retain) NSMapTable *itemNameCache;
@property (copy, nonatomic) NSNumber *favoriteRank;
@property (copy, nonatomic) NSDate *lastUsedDate;
@property (copy, nonatomic) NSData *tagData;
@property unsigned long long inodeNum;
@property (readonly, copy) NSURL *fileURL;
@property (readonly, copy) NSNumber *hasUnresolvedConflicts;
@property (readonly, copy) NSString *containerDisplayName;
@property (readonly, copy, getter=isDownloadRequested) NSNumber *downloadRequested;
@property (readonly, getter=isHidden) BOOL hidden;
@property (readonly, copy) NSString *providerIdentifier;
@property (readonly, copy) NSString *sharingPermissions;
@property (readonly, copy) NSString *fp_spotlightDomainIdentifier;
@property (readonly, copy) NSString *fp_spotlightSubDomainIdentifier;
@property (readonly, copy) NSString *fp_domainIdentifier;
@property (readonly, copy) NSString *fp_parentDomainIdentifier;
@property (readonly, getter=fp_isUbiquitous) BOOL fp_ubiquitous;
@property (readonly, copy) NSArray *conflictingVersions;
@property (readonly) BOOL fp_isContainer;
@property (readonly) BOOL fp_isContainerPristine;
@property (readonly) BOOL fp_isCloudDocsContainer;
@property (readonly, copy) NSString *fp_cloudContainerIdentifier;
@property (readonly, copy) NSSet *fp_cloudContainerClientBundleIdentifiers;
@property (readonly, copy, nonatomic) NSString *displayName;
@property (readonly, nonatomic, getter=isTopLevelSharedItem) BOOL topLevelSharedItem;
@property (readonly, copy, nonatomic) NSData *quarantineBlob;
@property (getter=isSyncRoot) BOOL syncRoot;
@property (readonly, copy) NSString *fileSystemFilename;
@property (readonly, nonatomic, getter=isExcludedFromSync) BOOL excludedFromSync;
@property (readonly, nonatomic, getter=fp_isLastModifiedByCurrentUser) BOOL fp_lastModifiedByCurrentUser;
@property (readonly, nonatomic, getter=fp_isAddedByCurrentUser) BOOL fp_addedByCurrentUser;
@property (readonly, nonatomic) NSPersonNameComponents *fp_addedByNameComponents;
@property (readonly, nonatomic) NSString *preformattedOwnerName;
@property (readonly, nonatomic) NSString *preformattedMostRecentEditorName;
@property (readonly) BOOL isCollaborationInvitation;
@property (readonly, copy, nonatomic) NSString *itemIdentifier;
@property (readonly, copy, nonatomic) NSString *parentItemIdentifier;
@property (readonly, copy, nonatomic) NSString *filename;
@property (readonly, copy, nonatomic) UTType *contentType;
@property (readonly, copy, nonatomic) NSString *typeIdentifier;
@property (readonly, nonatomic) struct NSFileProviderTypeAndCreator { unsigned int x0; unsigned int x1; } typeAndCreator;
@property (readonly, nonatomic) unsigned long long capabilities;
@property (readonly, nonatomic) unsigned long long fileSystemFlags;
@property (readonly, copy, nonatomic) NSNumber *documentSize;
@property (readonly, copy, nonatomic) NSNumber *childItemCount;
@property (readonly, copy, nonatomic) NSDate *creationDate;
@property (readonly, copy, nonatomic) NSDate *contentModificationDate;
@property (readonly, nonatomic) NSDictionary *extendedAttributes;
@property (readonly, nonatomic, getter=isTrashed) BOOL trashed;
@property (readonly, nonatomic, getter=isUploaded) BOOL uploaded;
@property (readonly, nonatomic, getter=isUploading) BOOL uploading;
@property (readonly, copy, nonatomic) NSError *uploadingError;
@property (readonly, nonatomic, getter=isDownloaded) BOOL downloaded;
@property (readonly, nonatomic, getter=isDownloading) BOOL downloading;
@property (readonly, copy, nonatomic) NSError *downloadingError;
@property (readonly, nonatomic, getter=isMostRecentVersionDownloaded) BOOL mostRecentVersionDownloaded;
@property (readonly, nonatomic, getter=isShared) BOOL shared;
@property (readonly, nonatomic, getter=isSharedByCurrentUser) BOOL sharedByCurrentUser;
@property (readonly, nonatomic) NSPersonNameComponents *ownerNameComponents;
@property (readonly, nonatomic) NSPersonNameComponents *mostRecentEditorNameComponents;
@property (readonly, nonatomic) NSData *versionIdentifier;
@property (readonly, nonatomic) NSFileProviderItemVersion *itemVersion;
@property (readonly, copy, nonatomic) NSString *symlinkTargetPath;
@property (readonly, nonatomic) NSDictionary *userInfo;
@property (readonly, nonatomic) long long contentPolicy;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)UTIForExtension:(id)a0 liType:(int)a1;
+ (int)dt_dir;
+ (int)dt_examine;
+ (int)dt_lnk;
+ (int)dt_reg;
+ (id)newItemForFH:(id)a0 withReference:(int)a1 name:(id)a2 parent:(id)a3 type:(int)a4 attrs:(id)a5 extension:(id)a6;

- (BOOL)isDirectory;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (BOOL)isDocument;
- (id)lastUsedTime;
- (void)dealloc;
- (id)br_pathExtension;
- (BOOL)isSymlink;
- (void)resetFileHandle;
- (void)_fetchFavoriteRank:(id)a0 completionHandler:(id /* block */)a1;
- (void)_fetchLastUsedDateWithProxy:(id)a0 completionHandler:(id /* block */)a1;
- (void)_fetchTagDataWithProxy:(id)a0 completionHandler:(id /* block */)a1;
- (void)_fetchXattrNamed:(id)a0 proxy:(id)a1 completionHandler:(id /* block */)a2;
- (BOOL)_fetchXattrValues;
- (void)afterRename:(id)a0 performBlock:(id /* block */)a1;
- (BOOL)calcNumberOfChildren:(id *)a0;
- (void)doDealloc;
- (void)dropAfterRenameBlockForName:(id)a0;
- (BOOL)ensureFileHandleOrError:(id *)a0;
- (id)initItemForFH:(id)a0 withReference:(int)a1 name:(id)a2 parent:(id)a3 type:(int)a4 attrs:(id)a5 extension:(id)a6;
- (void)performBlocksForRename:(id)a0 onEHQueue:(BOOL)a1;
- (void)prefetchXattrBasedValues;
- (void)recursivelyReparentChildren;
- (void)recursivelySetChildrenDeleted;
- (int)refreshAttrsHasAProblem:(id *)a0;
- (void)setAttributes:(id)a0 time:(long long)a1;
- (void)setAttributesLocked:(id)a0 time:(long long)a1;
- (void)setAttributesStale;
- (void)setItemDeleted;
- (void)setNewParent:(id)a0 andName:(id)a1;

@end