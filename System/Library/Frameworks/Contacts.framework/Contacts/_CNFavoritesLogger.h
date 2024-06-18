@class NSString, NSObject;
@protocol OS_os_log;

@interface _CNFavoritesLogger : NSObject <CNFavoritesLogger>

@property (readonly, nonatomic) NSObject<OS_os_log> *log;
@property (readonly, nonatomic) NSObject<OS_os_log> *summaryLog;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)failedToVerifyFavorites:(id)a0 withPropertyListFavorites:(id)a1 error:(id)a2;
- (id)init;
- (void)_simulateCrashReportWithMessage:(id)a0;
- (void)finishedReadingRemoteFavorites;
- (void)failedToReadFavoritesFromPath:(id)a0 error:(id)a1 simulateCrashReport:(BOOL)a2;
- (void)failedToConvertFavoritesToPropertyList:(id)a0;
- (void)failedToWriteFavoritesToPath:(id)a0 error:(id)a1 simulateCrashReport:(BOOL)a2;
- (void).cxx_destruct;
- (void)rematchingFavorites:(id /* block */)a0;
- (void)finishedWritingFavoritesToPath:(id)a0 entriesCount:(unsigned long long)a1;
- (void)finishedWritingRemoteFavorites;
- (void)finishedReadingFavoritesFromPath:(id)a0 entriesCount:(unsigned long long)a1;
- (void)reportFavoritesAccessedBeforeFirstUnlock;
- (void)readingFavorites:(id /* block */)a0;
- (void)failedToWriteRemoteFavorites:(id)a0;
- (void)failedToReadRemoteFavorites:(id)a0;
- (void)failedToVerifyWrittenFavoritesExistsAtPath:(id)a0;
- (void)writingFavorites:(id /* block */)a0;

@end