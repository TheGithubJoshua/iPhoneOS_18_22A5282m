@class NSSet, NSString;

@interface PSCellularManagementCache : NSObject

@property (retain) NSSet *managedCellDataAppCache;
@property (readonly, nonatomic) BOOL isGlobalDataModificationRestricted;
@property (readonly, nonatomic) BOOL hasManagedCellularData;
@property (readonly, nonatomic) NSString *mdmName;

+ (id)sharedInstance;

- (id)initPrivate;
- (id)init;
- (void)clearCache;
- (void)willEnterForeground;
- (id)getLogger;
- (void).cxx_destruct;
- (id)managedAppBundleIDs;
- (BOOL)isManaged:(id)a0;
- (void)managedConfigurationProfileListDidChange;
- (void)managedConfigurationSettingsDidChange;
- (id)managedCellDataAppBundleIDs;

@end
