@class NSPersistentStore, PFUbiquityLocation, NSPersistentStoreCoordinator, PFUbiquityMetadataFactoryFilePresenter;

@interface PFUbiquityMetadataFactoryEntry : NSObject {
    PFUbiquityLocation *_metadataStoreFileLocation;
    NSPersistentStoreCoordinator *_psc;
    NSPersistentStore *_store;
    PFUbiquityMetadataFactoryFilePresenter *_filePresenter;
}

- (id)init;
- (id)description;
- (void)dealloc;
- (id)initWithMetadataStoreFileLocation:(id)a0;

@end
