@class NSString;

@interface PXDebug : UIImageView

@property (nonatomic) struct CGImage { } *previewImage;
@property (nonatomic) struct CGColor { } *backgroundColor;
@property (copy, nonatomic) NSString *name;

- (id)layer;
- (void).cxx_destruct;
- (id)description;
- (id)__dbg_formattedDisplayName;
- (id)__dbg_snapshotImage;

@end
