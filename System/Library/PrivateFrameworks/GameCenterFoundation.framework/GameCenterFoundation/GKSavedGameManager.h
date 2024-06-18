@class NSMutableDictionary, NSURL, NSMetadataQuery, NSMutableArray;

@interface GKSavedGameManager : NSObject

@property (retain, nonatomic) NSURL *ubiquityURL;
@property (nonatomic) BOOL ubiquityUnavailable;
@property (retain, nonatomic) NSMetadataQuery *query;
@property (retain, nonatomic) NSMutableDictionary *documents;
@property (nonatomic) long long queryDisableCount;
@property (retain, nonatomic) NSMutableArray *fetchHandlers;

+ (id)sharedManager;

- (id)init;
- (void)addDocument:(id)a0;
- (void)saveGameData:(id)a0 withName:(id)a1 completionHandler:(id /* block */)a2;
- (void)fetchSavedGamesWithCompletionHandler:(id /* block */)a0;
- (void)enableQueryUpdates;
- (id)documentForSavedGame:(id)a0;
- (id)savedGameForDocuments:(id)a0;
- (void)updateSavedGameDocumentsForQueryWithHandler:(id /* block */)a0;
- (void)documentConflictStateChanged:(id)a0;
- (void)disableQueryUpdates;
- (void)removeDocument:(id)a0;
- (id)savedGameForDocument:(id)a0;
- (void)queryDidFinishGathering:(id)a0;
- (void)startSavedGameQuery;
- (void).cxx_destruct;
- (void)setupUbiquity;
- (id)currentDocumentWithName:(id)a0;
- (void)documentModified:(id)a0;
- (id)errorForNoUbiquity;
- (void)dealloc;
- (id)documentToSaveWithName:(id)a0;
- (void)callFetchHandlers;
- (id)fileURLForName:(id)a0;
- (void)deleteSavedGamesWithName:(id)a0 completionHandler:(id /* block */)a1;
- (id)savedGamesWithName:(id)a0;
- (void)ubiquityAvailabilityChanged:(id)a0;
- (void)queryDidUpdate:(id)a0;
- (void)resolveConflictingSavedGames:(id)a0 withData:(id)a1 completionHandler:(id /* block */)a2;
- (void)loadDataForSavedGame:(id)a0 completionHandler:(id /* block */)a1;

@end
