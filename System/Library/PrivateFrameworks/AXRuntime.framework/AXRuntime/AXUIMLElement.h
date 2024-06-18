@class NSString, NSMutableArray, AXUIElement;

@interface AXUIMLElement : AXUIElement {
    AXUIElement *_parent;
    AXUIElement *_hostingParent;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _touchExpandedFrame;
    unsigned long long _traits;
    NSString *_value;
    long long _uiClass;
    NSMutableArray *_customActions;
    BOOL _isReconciling;
}

@property (class, nonatomic) BOOL performFuzzyHitTestNextTime;

@property (retain, nonatomic) NSString *label;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } portraitUpFrame;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } rotatedFrame;
@property (nonatomic) struct CGPoint { double x; double y; } rotatedCenterPoint;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } screenFrame;
@property (nonatomic) unsigned long long mlGeneration;

+ (void)clearCaches;
+ (void)initialize;
+ (void)_fireRefreshTimer;
+ (void)setFrameDelegate:(id)a0;
+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_appRelativeRectForRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 contextId:(unsigned int)a1;
+ (void)_applyAXTraitsForElement:(id)a0 uiClass:(long long)a1;
+ (id)_cachedMLElementsForID:(id)a0;
+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_convertFrameToPortraitUp:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 fromOrientation:(long long)a1 appFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2;
+ (long long)_interfaceOrientationForElement:(id)a0;
+ (void)_queue_createMLElements:(id)a0 postDelegateCallback:(BOOL)a1;
+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_screenRelativeRectForRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 contextId:(unsigned int)a1;
+ (void)_setCachedMLElements:(id)a0 forID:(id)a1;
+ (id)_textDetectionOptions:(id)a0 options:(id)a1;
+ (struct { id x0; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x1; })_windowContextInformation:(id)a0;
+ (id)cachedElementForParent:(struct __AXUIElement { } *)a0;
+ (void)clearCachesForAppsExcluding:(id)a0;
+ (id)elementsInDirection:(long long)a0 withElement:(id)a1 nextElements:(id)a2;
+ (void)setAutoRefresh:(BOOL)a0 forApp:(id)a1;
+ (id)sharedFingerController;

- (BOOL)isValid;
- (void).cxx_destruct;
- (void)disableCache;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (BOOL)performAXAction:(int)a0;
- (id)previousElementsWithParameters:(id)a0;
- (id)_appElement;
- (void)_applyCustomActionsForFeature:(id)a0 screenScale:(double)a1 screenRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 elements:(id)a3;
- (id)_currentMLElements;
- (id)_findMatchingElementForMLElement:(id)a0 flattenedAppElements:(id)a1;
- (id)_flattenedAppElements;
- (void)_forceMLElementRefresh:(id)a0 postDelegateCallback:(BOOL)a1 completionBlock:(id /* block */)a2;
- (BOOL)_handleScroll:(int)a0;
- (BOOL)_handleScrollToVisible:(id)a0;
- (BOOL)_isTopLevelMLElement;
- (id)_reconcileAppElementsWithMLElements:(id)a0 flattenedElements:(id)a1;
- (id)_reconcileElements:(id)a0;
- (id)_reconciledElements;
- (BOOL)_shouldDemoteElement:(id)a0 withMLElements:(id)a1;
- (BOOL)_shouldPromoteElement:(id)a0;
- (BOOL)_simulateScrollAction:(int)a0 withScreenDistanceFactor:(double)a1 forVisibleAction:(BOOL)a2;
- (id)_topLevelAppElement;
- (id)_topLevelMLElement;
- (id)arrayWithAXAttribute:(long long)a0;
- (BOOL)boolWithAXAttribute:(long long)a0;
- (BOOL)canPerformAXAction:(int)a0;
- (struct CGColor { } *)colorWithAXAttribute:(long long)a0;
- (void *)copyAttributeValue:(long long)a0;
- (void *)copyAttributeValue:(long long)a0 parameter:(void *)a1;
- (void *)copyAttributeValue:(long long)a0 parameter:(void *)a1 baseElement:(id)a2;
- (struct __AXUIElement { } *)copyElementAtPosition:(struct CGPoint { double x0; double x1; })a0;
- (void)enableCache:(BOOL)a0;
- (id)initWithParentElement:(struct __AXUIElement { } *)a0;
- (BOOL)isMLElement;
- (BOOL)isProbablyEqual:(id)a0;
- (BOOL)isValidForApplication:(id)a0;
- (id)nextElementsWithCount:(unsigned long long)a0;
- (id)nextElementsWithCount:(unsigned long long)a0 baseElement:(id)a1;
- (id)nextElementsWithParameters:(id)a0;
- (id)numberWithAXAttribute:(long long)a0;
- (id)objectWithAXAttribute:(long long)a0;
- (id)objectWithAXAttribute:(long long)a0 parameter:(void *)a1;
- (const struct CGPath { } *)pathWithAXAttribute:(long long)a0;
- (BOOL)performAXAction:(int)a0 withValue:(id)a1 fencePort:(unsigned int)a2;
- (struct CGPoint { double x0; double x1; })pointWithAXAttribute:(long long)a0;
- (id)previousElementsWithCount:(unsigned long long)a0;
- (id)previousElementsWithCount:(unsigned long long)a0 baseElement:(id)a1;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })rangeWithAXAttribute:(long long)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rectWithAXAttribute:(long long)a0;
- (void)setAXAttribute:(long long)a0 withArray:(id)a1;
- (void)setAXAttribute:(long long)a0 withBOOL:(BOOL)a1;
- (void)setAXAttribute:(long long)a0 withFloat:(float)a1;
- (void)setAXAttribute:(long long)a0 withLong:(long long)a1;
- (void)setAXAttribute:(long long)a0 withNumber:(id)a1;
- (void)setAXAttribute:(long long)a0 withObject:(id)a1;
- (void)setAXAttribute:(long long)a0 withObject:(id)a1 synchronous:(BOOL)a2;
- (void)setAXAttribute:(long long)a0 withPoint:(struct CGPoint { double x0; double x1; })a1;
- (void)setAXAttribute:(long long)a0 withRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (void)setAXAttribute:(long long)a0 withSize:(struct CGSize { double x0; double x1; })a1;
- (void)setAXAttribute:(long long)a0 withString:(id)a1;
- (void)setAXAttribute:(long long)a0 withUIElement:(id)a1;
- (void)setAXAttribute:(long long)a0 withUIElementArray:(id)a1;
- (id)stringWithAXAttribute:(long long)a0;
- (id)topLevelMLElement;
- (id)uiElementsWithAttribute:(long long)a0;
- (id)uiElementsWithAttribute:(long long)a0 parameter:(void *)a1;
- (id)uiElementsWithAttribute:(long long)a0 parameter:(void *)a1 fetchAttributes:(BOOL)a2;
- (void)updateCache:(long long)a0;
- (void)updateCacheWithAttributes:(id)a0;
- (id)valueArrayWithAXAttributes:(struct __CFArray { } *)a0;

@end