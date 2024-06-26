@class NSMutableDictionary, _UILabelContent, UIFont, NSTextEncapsulation, NSDictionary, _UILabelConfiguration, _UILabelLegacyScaledMetrics, UIColor, NSString, _UILabelMetrics, CUIStyleEffectConfiguration, NSAttributedString, _UILabelVisualStyle, _UILabelScaledMetrics, _UILabelSynthesizedContent, _UITextSizeCache, CUICatalog;

@interface UILabel : UIView <_UIViewBaselineSpacing, _UIMultilineTextContentSizing, _UILabelVisualStyleSubject, NSCoding, UIContentSizeCategoryAdjusting> {
    struct CGSize { double width; double height; } _size;
    UIColor *_backgroundColor;
    long long _numberOfLines;
    struct { double firstBaseline; double lastBaseline; struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } referenceBounds; long long measuredNumberOfLines; struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } bounds; } _intrinsicSizeBaselineInfo;
    _UILabelMetrics *_metrics;
    _UILabelMetrics *_intrinsicMetrics;
    double _previousBaselineOffsetFromBottom;
    double _previousFirstLineBaseline;
    _UILabelContent *_content;
    _UILabelSynthesizedContent *_synthesizedContent;
    NSAttributedString *_synthesizedAttributedText;
    NSDictionary *_cachedSynthesizedTextAttributes;
    NSMutableDictionary *_fallbackColorsForUserInterfaceStyle;
    double _minimumFontSize;
    long long _lineSpacing;
    id _layout;
    _UILabelLegacyScaledMetrics *_scaledMetrics;
    struct CGSize { double width; double height; } _scaledMetricsTargetSize;
    _UITextSizeCache *_intrinsicContentSizeCache;
    CUICatalog *_cuiCatalog;
    NSTextEncapsulation *_textEncapsulation;
    CUIStyleEffectConfiguration *_cuiStyleEffectConfiguration;
    NSMutableDictionary *_marqueeAnimations;
    NSMutableDictionary *_marqueeMaskAnimations;
    _UILabelConfiguration *_configuration;
    UIFont *_overrideTextFont;
    unsigned long long _accessibilityButtonShapesChangedToken;
    UIColor *_lastSetColor;
    struct { unsigned char highlighted : 1; unsigned char autosizeTextToFit : 1; unsigned char supportMultiLineShrinkToFit : 1; unsigned char autotrackTextToFit : 1; unsigned char baselineAdjustment : 2; unsigned char enabled : 1; unsigned char explicitAlignment : 1; unsigned char enablesMarqueeWhenAncestorFocused : 1; unsigned char marqueeEnabled : 1; unsigned char marqueeRunable : 1; unsigned char marqueeRequired : 1; unsigned char marqueeUpdatable : 1; unsigned char usesExplicitPreferredMaxLayoutWidth : 1; unsigned char drawsDebugBaselines : 1; unsigned char explicitBaselineOffset : 1; unsigned char usesSimpleTextEffects : 1; unsigned char wantsUnderlineForAccessibilityButtonShapesEnabled : 1; unsigned char disableUpdateTextColorOnTraitCollectionChange : 1; unsigned char textAlignmentFollowsWritingDirection : 1; unsigned char textAlignmentMirrored : 1; unsigned char shortcutIntrinsicContentSize : 1; unsigned char multilineLabelRequiresCarefulMeasurement : 1; unsigned char noNeedsDisplayCheckForBaselineCalculationNeeded : 1; unsigned char overallWritingDirectionFollowsLayoutDirection : 1; unsigned char hyphenationFactorIgnoredIfURLsDetected : 1; unsigned char extendedAccessibilityAdjustments : 1; unsigned char canUseUILabelLayer : 1; unsigned char implementsDefaultAttributes : 1; unsigned char textColorFollowsTintColor : 1; unsigned char materialTextColorFollowsTintColor : 1; unsigned char showsExpansionTextWhenTruncated : 1; unsigned char adjustsFontForContentSizeCategory : 1; unsigned char disableConfigurationUpdate : 1; unsigned char temporarilyDisableHighlight : 1; } _textLabelFlags;
    double _multilineContextWidth;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) double _capOffsetFromBoundsTop;
@property (readonly, nonatomic) double _firstLineBaselineOffsetFromBoundsTop;
@property (nonatomic, setter=_setFirstLineCapFrameOriginY:) double _firstLineCapFrameOriginY;
@property (nonatomic, setter=_setFirstLineBaselineFrameOriginY:) double _firstLineBaselineFrameOriginY;
@property (nonatomic, setter=_setLastLineBaselineFrameOriginY:) double _lastLineBaselineFrameOriginY;
@property (nonatomic, setter=_setDrawsDebugBaselines:) BOOL _drawsDebugBaselines;
@property (nonatomic, setter=_setWantsUnderlineForAccessibilityButtonShapesEnabled:) BOOL _wantsUnderlineForAccessibilityButtonShapesEnabled;
@property (nonatomic, setter=_setWantsUnderlineForAccessibilityButtonShapesEnabled:) BOOL _wantsUnderlineForAccessibilityButtonShapesEnabled;
@property (readonly, nonatomic) double _lastLineBaseline;
@property (nonatomic) long long lineSpacing;
@property (retain, nonatomic, getter=_content, setter=_setContent:) _UILabelContent *_content;
@property (readonly, retain, nonatomic, getter=_synthesizedAttributedText) NSAttributedString *_synthesizedAttributedText;
@property (retain, nonatomic, setter=_setVisualStyle:) _UILabelVisualStyle *_visualStyle;
@property (retain, nonatomic, setter=set_fontForShortcutBaselineCalculation:) UIFont *_fontForShortcutBaselineCalculation;
@property (readonly, nonatomic) long long _measuredNumberOfLines;
@property (readonly, nonatomic) _UILabelScaledMetrics *_scaledMetrics;
@property (retain, nonatomic, setter=_setMetrics:) _UILabelMetrics *_metrics;
@property (retain, nonatomic, setter=_setOverrideTextFont:) UIFont *_overrideTextFont;
@property (retain, nonatomic, setter=_setConfiguration:) _UILabelConfiguration *_configuration;
@property (copy, nonatomic) NSString *text;
@property (retain, nonatomic) UIFont *font;
@property (retain, nonatomic) UIColor *textColor;
@property (retain, nonatomic) UIColor *shadowColor;
@property (nonatomic) struct CGSize { double x0; double x1; } shadowOffset;
@property (nonatomic) long long textAlignment;
@property (nonatomic) long long lineBreakMode;
@property (copy, nonatomic) NSAttributedString *attributedText;
@property (retain, nonatomic) UIColor *highlightedTextColor;
@property (nonatomic, getter=isHighlighted) BOOL highlighted;
@property (nonatomic, getter=isUserInteractionEnabled) BOOL userInteractionEnabled;
@property (nonatomic, getter=isEnabled) BOOL enabled;
@property (nonatomic) long long numberOfLines;
@property (nonatomic) BOOL adjustsFontSizeToFitWidth;
@property (nonatomic) long long baselineAdjustment;
@property (nonatomic) double minimumScaleFactor;
@property (nonatomic) BOOL allowsDefaultTighteningForTruncation;
@property (nonatomic) unsigned long long lineBreakStrategy;
@property (nonatomic) double preferredMaxLayoutWidth;
@property (nonatomic) BOOL enablesMarqueeWhenAncestorFocused;
@property (nonatomic) BOOL showsExpansionTextWhenTruncated;
@property (nonatomic) double minimumFontSize;
@property (nonatomic) BOOL adjustsLetterSpacingToFitWidth;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) BOOL adjustsFontForContentSizeCategory;

+ (Class)layerClass;
+ (id)_defaultColor;
+ (id)defaultFont;
+ (id)_defaultAttributes;
+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_insetRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 forAttributedString:(id)a1 withDefaultFont:(id)a2 inView:(id)a3;

- (id)initWithCoder:(id)a0;
- (struct { double x0; double x1; })_baselineOffsetsAtSize:(struct CGSize { double x0; double x1; })a0;
- (BOOL)_textColorFollowsTintColor;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_didChangeFromIdiom:(long long)a0 onScreen:(id)a1 traverseHierarchy:(BOOL)a2;
- (void)invalidateIntrinsicContentSize;
- (BOOL)_shouldCeilSizeToViewScale;
- (void)setSemanticContentAttribute:(long long)a0;
- (double)_preferredMaxLayoutWidth;
- (void)setMarqueeEnabled:(BOOL)a0;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_commonInit;
- (id)_disabledFontColor;
- (void)setNeedsDisplay;
- (double)shadowBlur;
- (struct CGSize { double x0; double x1; })_intrinsicSizeWithinSize:(struct CGSize { double x0; double x1; })a0;
- (void)_didMoveFromWindow:(id)a0 toWindow:(id)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (double)_minimumFontSize;
- (void)_setColor:(id)a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)_applicationDidBecomeActiveNotification:(id)a0;
- (id)_associatedScalingLabel;
- (id)largeContentTitle;
- (void)traitCollectionDidChange:(id)a0;
- (void)drawTextInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_setTextColorFollowsTintColor:(BOOL)a0;
- (void)encodeWithCoder:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })textRectForBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_contentDidChange:(long long)a0 fromContent:(id)a1;
- (void).cxx_destruct;
- (void)setUserInteractionEnabled:(BOOL)a0;
- (BOOL)_usesSimpleTextEffects;
- (void)setBackgroundColor:(id)a0;
- (void)_setTextColor:(id)a0;
- (void)_setFont:(id)a0;
- (void)setColor:(id)a0;
- (BOOL)_shouldDrawUnderlinesLikeWebKit;
- (void)_accessibilityButtonShapesChangedNotification:(id)a0;
- (void)_setUsesSimpleTextEffects:(BOOL)a0;
- (void)_updateTextColorWithFallbackColorIfNeeded;
- (BOOL)_needsDoubleUpdateConstraintsPass;
- (void)_prepareForFirstIntrinsicContentSizeCalculation;
- (void)layerWillDraw:(id)a0;
- (void)dealloc;
- (double)_multilineContextWidth;
- (id)color;
- (void)_prepareForSecondIntrinsicContentSizeCalculationWithLayoutEngineBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (float)_hyphenationFactor;
- (void)setBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_accessibilityButtonShapesParametersDidChange;
- (void)setShadowBlur:(double)a0;
- (double)_baselineOffsetFromBottom;
- (void)_setMultilineContextWidth:(double)a0;
- (void)_setHyphenationFactor:(float)a0;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })_contentInsetsFromFonts;
- (id)_defaultAttributes;
- (void)tintColorDidChange;
- (id)_image;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_drawTextInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 forceMultiline:(BOOL)a1;
- (struct CGSize { double x0; double x1; })rawSize;
- (void)_setCuiCatalog:(id)a0;
- (BOOL)isAccessibilityElementByDefault;
- (double)_actualScaleFactor;
- (void)_ancestorWillUpdateFocusInContext:(id)a0 withAnimationCoordinator:(id)a1;
- (void)_applicationWillResignActiveNotification:(id)a0;
- (double)_autolayoutSpacingAtEdge:(int)a0 forAttribute:(long long)a1 inContainer:(id)a2 isGuide:(BOOL)a3;
- (double)_autolayoutSpacingAtEdge:(int)a0 forAttribute:(long long)a1 nextToNeighbor:(id)a2 edge:(int)a3 attribute:(long long)a4 multiplier:(double)a5;
- (id)_cuiCatalog;
- (id)_cuiStyleEffectConfiguration;
- (void)_drawFullMarqueeTextInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_drawTextInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_drawTextInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 baselineCalculationOnly:(BOOL)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_drawingRectForBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_ensureMetricsInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 forDrawing:(BOOL)a1;
- (double)_firstBaselineOffsetFromTop;
- (double)_firstLineBaseline;
- (id)_fontInfoForBaselineSpacing;
- (BOOL)_hasBaseline;
- (BOOL)_hasCustomAutolayoutNeighborSpacingForAttribute:(long long *)a0;
- (BOOL)_hasFontInfoForVerticalBaselineSpacing;
- (void)_invalidateBaselineConstraints;
- (void)_invalidateLabelSize;
- (void)_invalidateTextSize;
- (BOOL)_isMarqueeUpdatable;
- (BOOL)_multilineLabelRequiresCarefulMeasurement;
- (void)_ola_willApplyMultilineTextWidthDisambiguationConstraint;
- (BOOL)_overallWritingDirectionFollowsLayoutDirection;
- (void)_resetUsesExplicitPreferredMaxLayoutWidth;
- (void)_setCuiStyleEffectConfiguration:(id)a0;
- (void)_setDefaultAttributes:(id)a0;
- (void)_setFallbackTextColor:(id)a0 forUserInterfaceStyle:(long long)a1;
- (void)_setLineBreakMode:(long long)a0;
- (void)_setLineBreakStrategy:(unsigned long long)a0;
- (void)_setMarqueeUpdatable:(BOOL)a0;
- (void)_setMinimumFontSize:(double)a0;
- (void)_setMultilineLabelRequiresCarefulMeasurement:(BOOL)a0;
- (void)_setOverallWritingDirectionFollowsLayoutDirection:(BOOL)a0;
- (void)_setText:(id)a0;
- (void)_setTextAlignment:(long long)a0;
- (void)_setTextAlignmentFollowsWritingDirection:(BOOL)a0;
- (void)_setTextAlignmentMirrored:(BOOL)a0;
- (void)_setTextEncapsulation:(id)a0;
- (void)_setUseShortcutIntrinsicContentSize:(BOOL)a0;
- (BOOL)_shouldInvalidateBaselineConstraintsForSize:(struct CGSize { double x0; double x1; })a0 oldSize:(struct CGSize { double x0; double x1; })a1;
- (void)_startMarqueeIfNecessary;
- (void)_stopMarqueeWithRedisplay:(BOOL)a0;
- (id)_stringDrawingContext;
- (long long)_stringDrawingOptions;
- (id)_synthesizedContent;
- (BOOL)_textAlignmentFollowsWritingDirection;
- (BOOL)_textAlignmentMirrored;
- (id)_textEncapsulation;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_textRectForBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 limitedToNumberOfLines:(long long)a1 includingShadow:(BOOL)a2;
- (id)_tightBoundingBoxLayoutGuide;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_tightBoundingRectOfFirstLine;
- (void)_updateSystemConstraints;
- (BOOL)_useShortcutIntrinsicContentSize;
- (BOOL)autotrackTextToFit;
- (BOOL)centersHorizontally;
- (id)currentTextColor;
- (unsigned long long)defaultAccessibilityTraits;
- (void)drawContentsInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)drawsUnderline;
- (BOOL)isElementAccessibilityExposedToInterfaceBuilder;
- (BOOL)marqueeEnabled;
- (BOOL)marqueeRunning;
- (void)setAutotrackTextToFit:(BOOL)a0;
- (void)setCentersHorizontally:(BOOL)a0;
- (void)setDrawsUnderline:(BOOL)a0;
- (void)setMarqueeRunning:(BOOL)a0;
- (void)setRawSize:(struct CGSize { double x0; double x1; })a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })textRectForBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 limitedToNumberOfLines:(long long)a1;
- (struct CGSize { double x0; double x1; })textSize;
- (struct CGSize { double x0; double x1; })textSizeForWidth:(double)a0;

@end
