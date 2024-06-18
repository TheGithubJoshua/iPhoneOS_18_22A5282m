@class NSDate;

@interface CXAnswerCallAction : CXCallAction {
    struct CGSize { double width; double height; } _localPortraitAspectRatio;
    struct CGSize { double width; double height; } _localLandscapeAspectRatio;
}

@property (copy, nonatomic) NSDate *dateConnected;
@property (nonatomic) BOOL downgradeToAudio;
@property (nonatomic) BOOL pauseVideoToStart;

+ (BOOL)supportsSecureCoding;
+ (double)timeout;

- (id)initWithCoder:(id)a0;
- (void)setLocalLandscapeAspectRatio:(struct CGSize { double x0; double x1; })a0;
- (struct CGSize { double x0; double x1; })localLandscapeAspectRatio;
- (struct CGSize { double x0; double x1; })localPortraitAspectRatio;
- (void)setLocalPortraitAspectRatio:(struct CGSize { double x0; double x1; })a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)customDescription;
- (void)fulfill;
- (void)fulfillWithDateConnected:(id)a0;
- (void)updateAsFulfilledWithDateConnected:(id)a0;
- (void)updateCopy:(id)a0 withZone:(struct _NSZone { } *)a1;
- (void)updateSanitizedCopy:(id)a0 withZone:(struct _NSZone { } *)a1;

@end
