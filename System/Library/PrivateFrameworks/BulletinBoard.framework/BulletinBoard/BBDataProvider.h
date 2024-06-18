@class NSString, BBDataProviderIdentity;

@interface BBDataProvider : NSObject <BBSectionIdentity> {
    BBDataProviderIdentity *_identity;
}

@property (retain) BBDataProviderIdentity *identity;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)initialized;
- (id)debugDescriptionWithChildren:(unsigned long long)a0;
- (id)displayNameForSubsectionID:(id)a0;
- (void)dataProviderDidLoad;
- (id)sectionBundlePath;
- (id)sectionDisplayName;
- (void)deliverResponse:(id)a0 forBulletinRequest:(id)a1 withCompletion:(id /* block */)a2;
- (void)startWatchdog;
- (id)sortDescriptors;
- (void)clearedInfoForClearingAllBulletinsWithLastClearedInfo:(id)a0 completion:(id /* block */)a1;
- (id)parentSectionIdentifier;
- (id)sectionIdentifier;
- (void)clearedInfoForBulletins:(id)a0 lastClearedInfo:(id)a1 completion:(id /* block */)a2;
- (void)bulletinsWithRequestParameters:(id)a0 lastCleared:(id)a1 completion:(id /* block */)a2;
- (id)defaultSubsectionInfos;
- (id)sortKey;
- (void)clearedInfoForClearingBulletinsFromDate:(id)a0 toDate:(id)a1 lastClearedInfo:(id)a2 completion:(id /* block */)a3;
- (void)invalidate;
- (void).cxx_destruct;
- (void)reloadIdentityWithCompletion:(id /* block */)a0;
- (id)defaultSectionInfo;
- (BOOL)syncsBulletinDismissal;
- (id)sectionParameters;
- (void)updateSectionInfoWithSectionInfo:(id)a0 handler:(id /* block */)a1 completion:(id /* block */)a2;
- (id)sectionIcon;
- (void)deliverMessageWithName:(id)a0 userInfo:(id)a1;
- (void)noteSectionInfoDidChange:(id)a0;
- (BOOL)canPerformMigration;
- (id)universalSectionIdentifier;
- (void)updateClearedInfoWithClearedInfo:(id)a0 handler:(id /* block */)a1 completion:(id /* block */)a2;
- (BOOL)migrateSectionInfo:(id)a0 oldSectionInfo:(id)a1;
- (BOOL)canClearAllBulletins;
- (BOOL)canClearBulletinsByDate;

@end
