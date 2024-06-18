@class NSArray, NSString, RCFoldersFetchedResultsController, RCSavedRecordingsController;
@protocol RCFolder;

@interface RCApplicationModel : RCSavedRecordingsModel <NSFetchedResultsControllerDelegate>

@property (class, readonly) RCApplicationModel *sharedApplicationModel;

@property (readonly, nonatomic) RCSavedRecordingsController *deletedRecordingsController;
@property (readonly, nonatomic) RCSavedRecordingsController *recordingsController;
@property (readonly, nonatomic) RCFoldersFetchedResultsController *foldersController;
@property (readonly, nonatomic) id<RCFolder> voiceMemosRecordingsFolder;
@property (readonly, nonatomic) id<RCFolder> capturedOnWatchRecordingsFolder;
@property (readonly, nonatomic) id<RCFolder> favoriteRecordingsFolder;
@property (readonly, nonatomic) id<RCFolder> recentlyDeletedRecordingsFolder;
@property (readonly, nonatomic) NSArray *recordings;
@property (readonly, nonatomic) NSArray *deletedRecordings;
@property (readonly, nonatomic) NSArray *userFolders;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)deleteFolderAndPermanentlyEraseAllPlayableRecordings:(id)a0;
- (id)playableRecordingsForFolder:(id)a0;
- (id)_recordingsControllerWithFolder:(id)a0;
- (id)initWithContainer:(id)a0 concurrencyType:(unsigned long long)a1;
- (id)recordingsControllerWithFolder:(id)a0;
- (id)_folderWithType:(long long)a0;
- (id)newChangeTrackingBackgroundModel;
- (unsigned long long)userFolderCount;
- (void)_deleteFolderAndRecordings:(id)a0 shouldPermanentlyErase:(BOOL)a1;
- (void).cxx_destruct;
- (id)mostRecentRecording;
- (id)_recordingsControllerWithPredicate:(id)a0;
- (unsigned long long)playableCountForFolder:(id)a0;
- (void)deleteFolderAndAllPlayableRecordings:(id)a0;
- (void)controllerDidChangeContent:(id)a0;

@end
