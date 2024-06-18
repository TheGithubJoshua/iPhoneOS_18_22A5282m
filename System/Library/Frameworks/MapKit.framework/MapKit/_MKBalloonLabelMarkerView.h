@class UIColor, UIBlurEffect, NSString, UIImage, UIView;

@interface _MKBalloonLabelMarkerView : _MKLabelMarkerView <_MKBalloonCalloutViewConfiguring> {
    UIView *_anchorDotView;
    BOOL _needsToResolveBalloonAttributes;
    long long _balloonCalloutStyle;
    BOOL _balloonCalloutShouldOriginateFromSmallSize;
    UIColor *_balloonFillColor;
    UIColor *_balloonStrokeColor;
    UIImage *_balloonImage;
    UIView *_balloonContentView;
    double _smallBalloonScaleFactor;
}

@property (readonly, nonatomic, getter=_balloonCalloutStyle) long long balloonCalloutStyle;
@property (readonly, nonatomic, getter=_balloonTintColor) UIColor *balloonTintColor;
@property (readonly, nonatomic, getter=_balloonStrokeColor) UIColor *balloonStrokeColor;
@property (readonly, nonatomic, getter=_balloonImage) UIImage *balloonImage;
@property (readonly, nonatomic, getter=_balloonContentView) UIView *balloonContentView;
@property (readonly, nonatomic, getter=_balloonInnerStrokeColor) UIColor *balloonInnerStrokeColor;
@property (readonly, nonatomic, getter=_balloonImageTintColor) UIColor *balloonImageTintColor;
@property (readonly, nonatomic, getter=_balloonCalloutShouldShowArrow) BOOL balloonCalloutShouldShowArrow;
@property (readonly, nonatomic, getter=_balloonCalloutShouldCenterWhenOffscreen) BOOL balloonCalloutShouldCenterWhenOffscreen;
@property (readonly, nonatomic, getter=_balloonMaterial) UIBlurEffect *balloonMaterial;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)traitCollectionDidChange:(id)a0;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (void)_addAnchorDotViewIfNeeded;
- (BOOL)_balloonCalloutShouldOriginateFromSmallSize:(double *)a0;
- (void)_configureBalloonForDataIconImageKeys:(id)a0 scale:(double)a1;
- (void)_resolveBalloonAttributesIfNecessary;
- (id)initWithAnnotation:(id)a0 reuseIdentifier:(id)a1;
- (BOOL)shouldShowCallout;
- (BOOL)updateCalloutViewIfNeededAnimated:(BOOL)a0;

@end