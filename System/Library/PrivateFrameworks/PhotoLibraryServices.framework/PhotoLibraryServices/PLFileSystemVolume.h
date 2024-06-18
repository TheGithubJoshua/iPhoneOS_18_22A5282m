@class NSString, NSURL, NSSet;

@interface PLFileSystemVolume : PLManagedObject {
    NSURL *_url;
}

@property (retain, nonatomic) NSString *name;
@property (retain, nonatomic) NSString *uuid;
@property (retain, nonatomic) NSString *volumeUuidString;
@property (copy, nonatomic) NSURL *url;
@property (readonly, nonatomic) BOOL isOffline;
@property (retain, nonatomic) NSSet *resources;

+ (id)entityName;
+ (id)volumeForObjectUUID:(id)a0 context:(id)a1;
+ (id)keyPathsForValuesAffectingValueForKey:(id)a0;
+ (id)volumeForVolumeUUID:(id)a0 context:(id)a1;
+ (id)volumeForURL:(id)a0 context:(id)a1;
+ (id)predictedURLForVolumeName:(id)a0;

- (id)payloadID;
- (void)awakeFromFetch;
- (void)awakeFromInsert;
- (void)willTurnIntoFault;
- (id)payloadForChangedKeys:(id)a0;
- (void)unregisterWithVolumeManager;
- (id)payloadIDForTombstone:(id)a0;
- (void)_unregisterWithVolumeManager;
- (void).cxx_destruct;
- (void)_registerWithVolumeManager;
- (id)predictedURL;
- (void)didTurnIntoFault;
- (BOOL)supportsCloudUpload;

@end
