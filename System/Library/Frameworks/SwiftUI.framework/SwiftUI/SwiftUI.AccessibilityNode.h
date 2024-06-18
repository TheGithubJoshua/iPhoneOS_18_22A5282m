@class NSString, NSArray, UIBezierPath, AXChartDescriptor, NSAttributedString;
@protocol _TtP7SwiftUI28PlatformAccessibilityElement_;

@interface SwiftUI.AccessibilityNode : NSObject <AXChart, AXCustomContentProvider, AXContainerDataSeries> {
    void /* unknown type, empty encoding */ id;
    void /* unknown type, empty encoding */ version;
    void /* unknown type, empty encoding */ children;
    void /* unknown type, empty encoding */ bridgedChild;
    void /* unknown type, empty encoding */ parent;
    void /* unknown type, empty encoding */ viewRendererHost;
    void /* unknown type, empty encoding */ environment;
    void /* unknown type, empty encoding */ attachmentsStorage;
    void /* unknown type, empty encoding */ cachedCombinedAttachment;
    void /* unknown type, empty encoding */ platformElementPropertiesDirty;
    void /* unknown type, empty encoding */ platformRotorStorage;
    void /* unknown type, empty encoding */ cachedIsPlaceholderOrIgnored;
    void /* unknown type, empty encoding */ relationshipScope;
}

@property (nonatomic, retain) AXChartDescriptor *accessibilityChartDescriptor;
@property (nonatomic) BOOL isAccessibilityElement;
@property (nonatomic) unsigned long long accessibilityTraits;
@property (nonatomic, copy) NSString *accessibilityLabel;
@property (nonatomic, copy) NSArray *accessibilityUserInputLabels;
@property (nonatomic, copy) NSArray *accessibilityAttributedUserInputLabels;
@property (nonatomic, retain) NSAttributedString *accessibilityAttributedLabel;
@property (nonatomic, copy) NSString *accessibilityValue;
@property (nonatomic, retain) NSAttributedString *accessibilityAttributedValue;
@property (nonatomic, copy) NSString *accessibilityHint;
@property (nonatomic, retain) NSAttributedString *accessibilityAttributedHint;
@property (nonatomic, copy) NSString *accessibilityLanguage;
@property (nonatomic, copy) NSString *accessibilityTextualContext;
@property (nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } accessibilityFrame;
@property (nonatomic, retain) UIBezierPath *accessibilityPath;
@property (nonatomic, readonly) BOOL _accessibilityIsHostNode;
@property (nonatomic, readonly) id<_TtP7SwiftUI28PlatformAccessibilityElement_> _accessibilityNodeRepresentedElement;
@property (nonatomic, readonly) NSArray *_accessibilityNodeChildrenUnsorted;
@property (nonatomic, copy) NSArray *accessibilityElements;
@property (nonatomic) struct CGPoint { double x0; double x1; } accessibilityActivationPoint;
@property (nonatomic, copy) NSArray *accessibilityDragSourceDescriptors;
@property (nonatomic, copy) NSArray *accessibilityDropPointDescriptors;
@property (nonatomic) BOOL accessibilityViewIsModal;
@property (nonatomic) BOOL accessibilityElementsHidden;
@property (nonatomic) BOOL shouldGroupAccessibilityChildren;
@property (nonatomic) long long accessibilityNavigationStyle;
@property (nonatomic) long long accessibilityContainerType;
@property (nonatomic) BOOL accessibilityRespondsToUserInteraction;
@property (nonatomic, copy) NSArray *accessibilityCustomActions;
@property (nonatomic, readonly) NSArray *_accessibilityUserDefinedLinkedUIElements;
@property (nonatomic, copy) NSArray *accessibilityCustomRotors;
@property (nonatomic, copy) NSArray *accessibilityCustomContent;
@property (nonatomic, copy) NSString *accessibilityIdentifier;

- (id)init;
- (id)_accessibilityUserTestingChildren;
- (void)accessibilityIncrement;
- (void).cxx_destruct;
- (void)dealloc;
- (void)accessibilityDecrement;
- (BOOL)accessibilityActivate;
- (id)accessibilityContainer;
- (void)accessibilityElementDidBecomeFocused;
- (void)accessibilityElementDidLoseFocus;
- (BOOL)accessibilityPerformEscape;
- (BOOL)accessibilityPerformMagicTap;
- (BOOL)accessibilityScroll:(long long)a0;
- (id)_accessibilityUserTestingParent;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_accessibilityBoundsForRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (id)_accessibilityDataSeriesGridlinePositionsForAxis:(long long)a0;
- (id)_accessibilityDataSeriesMaximumValueForAxis:(long long)a0;
- (id)_accessibilityDataSeriesName;
- (BOOL)_accessibilityDataSeriesSupportsSonification;
- (id)_accessibilityDataSeriesTitleForAxis:(long long)a0;
- (id)_accessibilityDataSeriesUnitLabelForAxis:(long long)a0;
- (id)_accessibilityDataSeriesValuesForAxis:(long long)a0;
- (long long)_accessibilityExpandedStatus;
- (BOOL)_accessibilityIsChartElement;
- (double)_accessibilityMaxValue;
- (double)_accessibilityMinValue;
- (id)_accessibilityRoleDescription;
- (unsigned long long)_accessibilityAutomationType;
- (BOOL)_accessibilityCanPerformEscapeAction;
- (BOOL)_accessibilityDataSeriesIncludesTrendlineInSonification;
- (id)_accessibilityDataSeriesMinimumValueForAxis:(long long)a0;
- (double)_accessibilityDataSeriesSonificationDuration;
- (BOOL)_accessibilityDataSeriesSupportsSummarization;
- (long long)_accessibilityDataSeriesType;
- (id)_accessibilityDataSeriesValueDescriptionForPosition:(double)a0 axis:(long long)a1;
- (id)_accessibilityHeadingLevel;
- (BOOL)_accessibilityIsRTL;
- (id)_accessibilityMediaAnalysisElement;
- (double)_accessibilityNumberValue;
- (BOOL)_accessibilitySupportsActivateAction;
- (id)_accessibilityUserTestingVisibleAncestor;
- (id)accessibilityCustomAttribute:(id)a0;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })accessibilityRowRange;
- (id)accessibilityURL;
- (void)accessibilityZoomInAtPoint:(struct CGPoint { double x0; double x1; })a0;
- (void)accessibilityZoomOutAtPoint:(struct CGPoint { double x0; double x1; })a0;

@end