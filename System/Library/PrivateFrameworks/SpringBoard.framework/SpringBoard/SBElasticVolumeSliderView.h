@class NSString;

@interface SBElasticVolumeSliderView : MRUContinuousSliderView <SBElasticGlyphView>

@property (nonatomic) double additiveGlyphScaleFactor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)createBackgroundView;
- (struct CGPoint { double x0; double x1; })glyphCenter;
- (void)setAxis:(unsigned long long)a0;

@end
