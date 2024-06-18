@class PHPhotoLibrary, NSDictionary;

@interface VCPFaceProcessingVersionManager : NSObject {
    PHPhotoLibrary *_photoLibrary;
    NSDictionary *_versionState;
}

+ (id)sharedManagerForPhotoLibrary:(id)a0;
+ (id)resetLevelDescription:(long long)a0;

- (id)initWithPhotoLibrary:(id)a0;
- (BOOL)_updateVersionStateFileWithError:(id *)a0;
- (int)migrateFaceProcessingToVersion:(int)a0;
- (id)_versionStateURL;
- (int)currentProcessingVersion;
- (void).cxx_destruct;
- (int)resetAnalysisDataWithResetLevel:(long long)a0 error:(id *)a1;
- (int)_updateCurrentProcessingVersion:(int)a0;
- (int)defaultProcessingVersion;

@end
