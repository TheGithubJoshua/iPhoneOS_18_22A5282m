@class NSString, NSMutableDictionary, PFUbiquityLocation;

@interface PFUbiquityExportContext : NSObject {
    NSMutableDictionary *_storeNameToStoreExportContext;
    NSMutableDictionary *_ubiquityRootPathToStack;
    NSString *_localPeerID;
    PFUbiquityLocation *_ubiquityRootLocation;
    BOOL _useLocalStorage;
}

- (id)description;
- (void)dealloc;
- (id)initWithLocalPeerID:(id)a0 andUbiquityRootLocation:(id)a1;

@end
