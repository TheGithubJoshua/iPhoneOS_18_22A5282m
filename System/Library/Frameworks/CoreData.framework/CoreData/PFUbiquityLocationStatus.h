@class NSError, PFUbiquityLocation;

@interface PFUbiquityLocationStatus : NSObject {
    BOOL _isLive;
    BOOL _isDeleted;
    BOOL _isDownloaded;
    BOOL _isDownloading;
    BOOL _isUploaded;
    BOOL _isUploading;
    BOOL _isImported;
    BOOL _isScheduled;
    BOOL _isExported;
    BOOL _isFailed;
    PFUbiquityLocation *_location;
    NSError *_error;
    unsigned long long _hash;
    long long _numBytes;
    long long _numNotifications;
}

- (id)init;
- (id)initWithLocation:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (void)dealloc;

@end
