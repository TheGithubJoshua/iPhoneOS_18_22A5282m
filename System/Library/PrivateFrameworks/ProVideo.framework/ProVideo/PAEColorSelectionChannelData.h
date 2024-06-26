@interface PAEColorSelectionChannelData : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property int mode;
@property int state;
@property int action;
@property int style;
@property double x;
@property double y;
@property double radius;
@property double radiusScale;
@property double frame;
@property int timeScale;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
