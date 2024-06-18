@interface PLDiskController : NSObject {
    double _lastFSCheck;
    long long _bytesRequiredForPhoto;
    struct { unsigned char needToCheckDiskSpace : 1; unsigned char probablyLowOnDiskSpace : 1; unsigned char isAssetsd : 1; unsigned int extra : 28; } _flags;
}

+ (id)mountPointForPath:(id)a0;
+ (id)sharedInstance;
+ (long long)diskSpaceAvailableForUse;
+ (BOOL)freeSpaceBelowDesiredSpaceThresholdForPath:(id)a0;
+ (long long)fileSystemSizeForPath:(id)a0;
+ (long long)freeDiskSpaceThreshold;
+ (long long)diskSpaceAvailableForPath:(id)a0;

- (id)init;
- (void)updateAvailableDiskSpace;
- (BOOL)hasEnoughDiskToTakePicture;
- (long long)bytesToAutomaticallyClear;
- (void)_actuallyUpdateCookie;
- (void)dealloc;
- (void)_updateCookie;
- (void)_diskSpaceDidBecomeLow;

@end
