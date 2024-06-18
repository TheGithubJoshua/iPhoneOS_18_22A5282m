@class UIImage, NSString;

@interface PLCameraPreviewImageWellChangeNotification : PLChangeNotification {
    UIImage *_image;
    NSString *_uuid;
}

@property (readonly, nonatomic) UIImage *image;
@property (readonly, nonatomic) NSString *assetUUID;

+ (id)notification;

- (id)init;
- (id)_init;
- (id)object;
- (id)name;
- (void).cxx_destruct;
- (id)description;
- (id)userInfo;

@end
