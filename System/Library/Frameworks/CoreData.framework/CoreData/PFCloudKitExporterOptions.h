@class NSCloudKitMirroringDelegateOptions, CKDatabase;

@interface PFCloudKitExporterOptions : NSObject <NSCopying> {
    CKDatabase *_database;
    NSCloudKitMirroringDelegateOptions *_mirroringDelegateOptions;
    unsigned long long _perOperationBytesThreshold;
    unsigned long long _perOperationObjectThreshold;
}

- (id)initWithDatabase:(id)a0 options:(id)a1;
- (id)copy;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;

@end
