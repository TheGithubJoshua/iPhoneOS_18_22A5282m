@class VUITVSeasonManagedObject;

@interface VUISidebandSeasonMediaCollection : VUIMediaCollection

@property (retain, nonatomic) VUITVSeasonManagedObject *seasonManagedObject;

- (id)seasonNumber;
- (void).cxx_destruct;
- (id)isLocal;
- (id)title;
- (id)canonicalID;
- (id)colorCapability;
- (id)HLSColorCapability;
- (id)initWithMediaLibrary:(id)a0 seasonManagedObject:(id)a1 requestedProperties:(id)a2;
- (id)showIdentifier;

@end
