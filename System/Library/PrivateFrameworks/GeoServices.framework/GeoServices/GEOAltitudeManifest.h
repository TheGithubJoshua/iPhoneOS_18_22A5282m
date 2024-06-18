@class NSString, GEOAltitudeManifestReserved;

@interface GEOAltitudeManifest : NSObject <NSXMLParserDelegate, GEOResourceManifestTileGroupObserver> {
    GEOAltitudeManifestReserved *_reserved;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedManager;

- (id)availableRegions;
- (id)init;
- (id)initWithoutObserver;
- (void)commonInit;
- (BOOL)parseXml:(id)a0;
- (BOOL)hasDataVersionForRegion:(unsigned int)a0;
- (void)getvalidFlyOverAnimationIDPool:(void *)a0;
- (void)parser:(id)a0 didStartElement:(id)a1 namespaceURI:(id)a2 qualifiedName:(id)a3 attributes:(id)a4;
- (unsigned int)dataVersionForRegion:(unsigned int)a0;
- (void).cxx_destruct;
- (id)tourIdsForRegion:(unsigned int)a0;
- (void)resourceManifestManagerWillChangeActiveTileGroup:(id)a0;
- (void)parseManifest:(id)a0;
- (void)dealloc;
- (BOOL)isValidTourId:(unsigned long long)a0;
- (id)nameForRegion:(unsigned int)a0;
- (unsigned int)versionForRegion:(unsigned int)a0;
- (void)resourceManifestManagerDidChangeActiveTileGroup:(id)a0;
- (void)_reloadManifest;
- (id)tripIdsForRegion:(unsigned int)a0;

@end
