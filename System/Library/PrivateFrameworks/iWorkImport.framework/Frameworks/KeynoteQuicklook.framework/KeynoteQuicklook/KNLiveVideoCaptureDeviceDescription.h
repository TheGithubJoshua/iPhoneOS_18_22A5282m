@class KNLiveVideoCaptureDeviceIdentifier;

@interface KNLiveVideoCaptureDeviceDescription : TSKSosBase <NSCopying>

@property (readonly, nonatomic) KNLiveVideoCaptureDeviceIdentifier *identifier;
@property (readonly, nonatomic) struct CGSize { double width; double height; } defaultVideoResolution;

- (unsigned long long)hash;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithIdentifier:(id)a0 defaultVideoResolution:(struct CGSize { double x0; double x1; })a1;
- (id)initWithMessage:(const void *)a0 unarchiver:(id)a1;
- (void)saveToMessage:(void *)a0 archiver:(id)a1;

@end
