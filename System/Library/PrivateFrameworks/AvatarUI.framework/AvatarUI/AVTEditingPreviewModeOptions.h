@class NSString;

@interface AVTEditingPreviewModeOptions : NSObject

@property (readonly, nonatomic) NSString *framingMode;
@property (readonly, nonatomic) NSString *bodyPosePack;

+ (id)defaultOptions;

- (void).cxx_destruct;
- (id)description;
- (id)initWithFramingMode:(id)a0 bodyPosePack:(id)a1;

@end
