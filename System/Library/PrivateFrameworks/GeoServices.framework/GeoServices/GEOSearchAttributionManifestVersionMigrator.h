@class NSMutableArray, NSString, GEOResourceManifestConfiguration, geo_isolater;

@interface GEOSearchAttributionManifestVersionMigrator : NSObject <GEOActiveTileGroupMigrator> {
    GEOResourceManifestConfiguration *_manifestConfiguration;
    geo_isolater *_isolater;
    NSMutableArray *_runningTasks;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithManifestConfiguration:(id)a0 mapLayerDataManager:(id)a1;
- (id)taskForNewTileGroup:(id)a0 inResourceManifest:(id)a1 oldTileGroup:(id)a2 activeScales:(id)a3 activeScenarios:(id)a4 dataSet:(id)a5 updateType:(long long)a6;
- (BOOL)needsMigrationForNewTileGroup:(id)a0 inResourceManifest:(id)a1 oldTileGroup:(id)a2 dataSet:(id)a3;
- (void)_addRunningTask:(id)a0;
- (void)_removeRunningTask:(id)a0;

@end
