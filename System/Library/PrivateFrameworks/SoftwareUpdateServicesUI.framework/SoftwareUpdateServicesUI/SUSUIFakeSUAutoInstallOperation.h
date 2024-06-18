@class NSUUID;

@interface SUSUIFakeSUAutoInstallOperation : SUAutoInstallOperation {
    BOOL _cancelled;
    NSUUID *_uuid;
}

- (id)id;
- (void)cancel;
- (BOOL)isCanceled;
- (void).cxx_destruct;
- (BOOL)isExpired;
- (id)forecast;

@end
