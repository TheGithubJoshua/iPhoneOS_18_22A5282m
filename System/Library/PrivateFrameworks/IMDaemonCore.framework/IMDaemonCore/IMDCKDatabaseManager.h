@class CKContainer;

@interface IMDCKDatabaseManager : NSObject

@property (readonly, nonatomic) CKContainer *manateeContainer;
@property (readonly, nonatomic) CKContainer *nickNameContainer;
@property (readonly, nonatomic) CKContainer *truthContainer;

+ (id)sharedInstance;

- (id)init;
- (id)truthDatabase;
- (id)manateeDataBase;
- (id)_nickNameContainer;
- (BOOL)_serverSaysToUseOldContainer;
- (void).cxx_destruct;
- (id)nickNamePublicDatabase;
- (void)fetchCurrentUserForNicknameContainer:(id /* block */)a0;
- (id)_nickNameContainerIdentifier;
- (id)truthPublicDatabase;

@end
