@class UIColor, NSString;

@interface LPVideoProperties : NSObject <NSCopying>

@property (retain, nonatomic, setter=_setOverlappingControlsColor:) UIColor *_overlappingControlsColor;
@property (nonatomic) BOOL hasAudio;
@property (copy, nonatomic) NSString *accessibilityText;

- (unsigned long long)hash;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
